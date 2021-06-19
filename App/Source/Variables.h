#pragma once


struct Variables{
    // Window variables.
    static const int WINDOW_WIDTH;
    static const int WINDOW_HEIGHT;
    static const bool IS_WIDTH_RESIZABLE;
    static const bool IS_HEIGHT_RESIZABLE;

    // Editor variables.
    static const juce::Colour EDITOR_BG_COLOUR;
    static const int LEFT_BAR;
    static const int TOP_BAR;
    static const int MAP_TRIM;

    // Top bar variables.
    static const juce::Colour TOP_BAR_SHADOW_COLOUR;

    // Map variables.
    static const int MAX_NUM_PLANETS;
    static const juce::Colour MAP_BG_COLOUR_1;
    static const juce::Colour MAP_BG_COLOUR_2;
    static const juce::Colour MAP_CIRCLE_COLOUR;
    
    // Planet variables.
    static const int DEFAULT_PLANET_DIAMETER;
    static const int MAX_PLANET_SIZE;
    static const int MIN_PLANET_SIZE;
    static const int SIZE_MODIFIER;
    static const int CLIP_BOUNDARY;

    // Sun variables.
    static const int SUN_DIAMETER;
};