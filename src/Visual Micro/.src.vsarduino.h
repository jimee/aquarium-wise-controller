/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

int freeRam ();
//
void alarm_maintain_ethernet();
void setup_TemperatureSensors();
void setup_Relays();
time_t syncProvider();
//
void drawSmallRelayStatus(int relay, int state, int x, int y);
void drawHeader(char* icon, char* title);
void drawLargeButton(char icon, char* text, int state, int x, int y);
void drawBackground();
void drawSpinner(int x, int y, String val);
void drawLargeBlueButton(int x, int y, char* text);
void screenHome();
int findCenterText(String text, int x1, int x2);
void drawPleaseWait();
void drawDoseChart(int x, int y, byte pump, char* label, Color arcColor);
void screenFeeding();
void screenPower();
void screenSettings();
void screenLights();
void screenClock();
void screenFeedSettings();
void screenHeater();
void screenSchedule();
void drawDosingPumpSettings(byte pump);
void drawDosingPumpTabs(byte selected);
void screenDosing(byte pump);
char* friendlyTime(byte onHour, byte onMinute);
void screenPwrSchedule();
void screenPwrScheduleItem(int itemNo);
void screenResyncLights();
void screenLightRamps();
void screenLightRampItem(byte rampNo);
void screenDosingSched();
void drawPowerScheduleLineItem(String name, Relay rly, byte x, byte y);
void drawDoingPumpScheduleLineItem(String name, DosingPump dp, byte x, byte y);
void screenDosingSchedItem(byte pumpNo);
void screenScreen();
boolean inBounds(int touchPointx, int touchPointy, int point1x, int point1y, int point2x, int point2y);
void processMyTouch();
void check_Ph(boolean print);
void check_Temperatures(boolean print);
void SaveTime();
void updateTimeDate();
void printTime(int thour, int tminute, byte ampm, int posx, int posy);
time_t tmConvert_t(int YYYY, byte MM, byte DD, byte hh, byte mm, byte ss);
void autoBrightness();
void rampScreenBrightness(byte fromLevel, byte toLevel);
void update_alarms();
void alarm_temperature(const uint8_t* deviceAddress);
void alarm_rlyLight1_on();
void alarm_rlyLight2_on();
void alarm_rlyFilter1_on();
void alarm_rlyFilter2_on();
void alarm_rlyHeater1_on();
void alarm_rlyHeater2_on();
void alarm_rlyCirc_on();
void alarm_rlyCO2_on();
void alarm_rlyLight1_off();
void alarm_rlyLight2_off();
void alarm_rlyFilter1_off();
void alarm_rlyFilter2_off();
void alarm_rlyHeater1_off();
void alarm_rlyHeater2_off();
void alarm_rlyCirc_off();
void alarm_rlyCO2_off();
void alarm_macro_dose();
void alarm_micro_dose();
void alarm_glut_dose();
void firstRunSetup();

#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\aquarium_wise_controller.ino"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\atlas_ph.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\atlas_ph.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\basic_switch.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\basic_switch.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\buzzer.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\buzzer.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\configuration.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\debug.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\display.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\display.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\dosing_pump.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\dosing_pump.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\fan.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\fan.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\fonts.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\heater.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\heater.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\pins.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\relay.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\relay.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\theme.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\uoms.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\version.h"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\webclient_ethernet.cpp"
#include "C:\Workspaces\Personal\aquarium_wise_controller\src\webclient_ethernet.h"
