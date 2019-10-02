#include <NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 200
NewPing myHCSR04(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
void setup()
{
	Serial.begin(9600);
}

void loop()
{
	Serial.println(myHCSR04.ping_cm());
	delay(50);
	myHCSR04.ping_cm(200);
	Serial.println();
}
