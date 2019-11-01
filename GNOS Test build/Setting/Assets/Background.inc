[Rainmeter]
OnRefreshAction         = []
RightMouseDownAction    = []
OnRefreshAction		= [!Move "0" "24"][!Draggable 0][!KeepOnScreen 0][!Zpos 1]

[Variables]
@include               = #@#Config.inc

BGW = 500
BGH = 600

[FrostedGlass]
Measure=Plugin
Plugin=FrostedGlass
Type=#skinBlur#
Border=None

[TransparentBackColor]
Meter                   = Shape
Shape                   = Rectangle 0,(#BGW#-(#BGW#-500)),#BGW#,50,0 | Fill Color #BackFill# | StrokeWidth 0 | Stroke Color #StrokeColor#
X                       = 0
Y                       = 0
MouseActionCursor       = 0