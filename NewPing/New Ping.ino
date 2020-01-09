//Heming Halvorson-Taylor
//NewPing
//NewPing is an assignment that teaches you to use the New Ping library which helps you code an ultrasonic sensor.

#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
int buttonState = 0;
int buttonPin = 9;
int factor = 0;
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
	 pinMode(buttonPin, INPUT);
}

void loop()
{
	buttonState = digitalRead(buttonPin);

	myHCSR04.ping_cm(200); //This sets a distance limit for the sensor.

	if (buttonState == HIGH and factor == LOW){
		Serial.print(myHCSR04.ping_cm());
		Serial.println();
	}
	factor = buttonState; //This line of code makes it so that it only reads the distance once in a loop.
	delay(50);

}
