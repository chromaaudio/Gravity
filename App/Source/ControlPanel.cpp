#include "Headers.h"


//--------------------------------------------------//
// Constructors and destructors.

ControlPanel::ControlPanel(Parameters& parameters_ref)
    :   m_ParametersRef(parameters_ref){
    setAlwaysOnTop(true);
}

ControlPanel::~ControlPanel(){}

//--------------------------------------------------//
// View methods.

void ControlPanel::paint(Graphics& g){
    g.setColour(juce::Colours::blue);
    g.fillRect(m_State.getProperty(Parameters::posXProp), (int)m_State.getProperty(Parameters::posYProp) - 100, m_Width, m_Height);
}

void ControlPanel::resized(){}

void ControlPanel::show(juce::ValueTree node){
    setVisible(true);
    m_State = node;
}

void ControlPanel::unshow(){
    setVisible(false);
}

//--------------------------------------------------//
// Controller methods.

void ControlPanel::visibilityChanged(){
    repaint();
}

bool ControlPanel::hitTest(int x, int y){
    if(getX() < x && getX() + m_Width > x && getY() < y && getY() + m_Height > y){return true;}
    else{return false;}
}
