# PsychicBlitz
Repo for a fighting game I'm working on using C++ and SFML

Controls
Four Buttons: A, B, C, S

Special: motion + A/B/C
    Motion List:
        236X (quarter-circle forward)
        214X (quarter-circle back)
        623X (dragon punch)
        421X (reverse dragon punch)
        22X (down-down)
        [4]6X (charge back > forward)
        [2]8X (charge down > up)
        3*X (press X three times/mash X)

Meter System:
Starts in the middle at round start, carries between rounds but rounded down to closest block
Pushes closer to opponent as you hit them, far more for hit than block
Supers/Cancels pull meter closer to your side
If meter reaches opponent, their meter is locked for the round

Presentation:
Music: Trance
SFX: I have no idea
Graphics: Sprites or 3D depending on the platform

Engine Requirements:
Accurate and fast collision
Particles
Easy scripted actions for throws
Attack data packaged in hitboxes
Sprites called from moves by frame
Online capabilities
Multiple layers for backgrounds
Basic lighting?
Bars
Easy direction flipping
Hitstop
Virtual joystick
Save states
AI?
