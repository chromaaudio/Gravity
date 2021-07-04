#pragma once


class Map: public juce::Component, public juce::Value::Listener, juce::ValueTree::Listener{
public:
    // Constructors and destructors.
    Map(AudioContainer&, Parameters&, const juce::String&);
    ~Map() override;

    void setComponents();
    void addListeners();
    void setGradients();
    void removeListeners();

private:
    // View methods.
    void paint(Graphics&) override;
    void paintOrbits(Graphics&);
    void paintForceVectors(Graphics&);
    void drawForceVector(Astro&, Astro&, float, Graphics&);
    void resized() override;
    
    void drawSun();
    void createPlanet(int, int);
    void setupPlanet(int x, int y, juce::ValueTree);
    void destroyPlanet(juce::String&);
    void rebuildPlanets();

    // Interface methods
    int getMaxNumPlanets();
    int getNumPlanets();
    juce::ValueTree getMapNode();
    juce::ValueTree getSunNode();
    juce::ValueTree getRootPlanetNode();

    // Controller methods.
    void mouseUp(const MouseEvent&) override;
    void mouseDoubleClick(const MouseEvent&) override;

    // Callback methods.
    void valueChanged(juce::Value&) override;
    void valueTreePropertyChanged(juce::ValueTree&, const juce::Identifier&) override;
    void valueTreeChildRemoved(juce::ValueTree&, juce::ValueTree&, int) override;

public:
    // Member variables.
    juce::Value m_UpdateImage;

private:
    // Member variables.
    OwnedArray<Planet> m_Planets;
    AudioContainer& m_AudioContainerRef;
    Parameters& m_ParametersRef;
    ControlPanel m_ControlPanel;
    Sun m_Sun;

    juce::ColourGradient m_BackgroundGradient;
    juce::ColourGradient m_ForceVectorGradient;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Map)
};
