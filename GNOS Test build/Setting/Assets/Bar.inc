[Rainmeter]
OnRefreshAction         = []
RightMouseDownAction    = []
OnRefreshAction		= [!Move "0" "24"][!Draggable 0][!KeepOnScreen 0][!Zpos 1]

[Variables]
@include               = #@#Config.inc

BGW = 500
BGH = 600

[TransparentBarColor]
Meter                   = Shape
Shape                   = Rectangle 0,(#BGW#-(#BGW#-400)),#BGW#,50,0 | Fill Color #BarFill# | StrokeWidth 0 | Stroke Color #StrokeColor#
X                       = 0
Y                       = 0
MouseActionCursor       = 0