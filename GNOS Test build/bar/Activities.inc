[Variables]
@include                = #@#Simple_Setting.inc
@include2               = #@#Pressets\#Preset#.inc
@include3               = #@#Fonts.inc
@include4               = #@#Language\#Language#.inc

[Activities]
Meter                   = String
FontColor               = #Text_reflex#
FontSize                = #BarSize#
FontFace                = #Default#
FontWeight		        = #BarFontWeight#
Text                    = #ActivitiesL#
SolidColor              = #Leave#
Padding                 = 5,0,5,0
H                       = #bar_height#
X                       = #FLTR#
Y                       = (#bar_height#/2)
AntiAlias               = 1
DynamicVariables        = 1

StringAlign             = LeftCenter
LeftMouseUpAction       = [!CommandMeasure MeasureSlider "Execute #State#"][!SetVariable LastConfig #Menu#]
MouseLeaveAction        = [!SetOption Activities SolidColor #Leave#][!Update]
MouseOverAction         = [!SetOption Activities SolidColor #FNColor#][!Update]

[Places]
Meter                   = String
FontColor               = #Text_reflex#
FontSize                = #BarSize#
FontFace                = #Default#
FontWeight		        = #BarFontWeight#
Text                    = #PlacesL#
SolidColor              = #Leave#
Padding                 = 5,0,5,0
H                       = #bar_height#
Y                       = (#bar_height#/2)
X                       = ([Activities:W]+#FLTR#)
AntiAlias               = 1
DynamicVariables        = 1

StringAlign             = LeftCenter
LeftMouseUpAction       = [!WriteKeyValue Variables LskinPos [Places:X] "#@#Simple_Setting.inc"][!CommandMeasure MeasureSlider2 "Execute #State2#"][!SetVariable LastConfig #Location#]
MouseLeaveAction        = [!SetOption Places SolidColor #Leave#][!Update]
MouseOverAction         = [!SetOption Places SolidColor #FNColor#][!Update]

[Task]
Meter                   = String
MeasureName             = MeasureGetActiveTitle
FontColor               = #Text_reflex#
FontSize                = #BarSize#
FontFace                = #Default#
FontWeight		        = #BarFontWeight#
SolidColor              = #Leave#
Padding                 = 5,0,5,3
W 			            = 300
H                       = #bar_height#
Y                       = (#bar_height#/2)
X                       = ([Activities:W]+[Places:W]+#FLTR#)
AntiAlias               = 1
StringAlign             = LeftCenter
ClipString 		        = 1
DynamicVariables        = 1
LeftMouseupAction       = !Execute ["#@#\Addons\TaskList"]