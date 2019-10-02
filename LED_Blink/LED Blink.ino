
//LED Blink.ino

int led = 11;
int brightness = 1;
int valu = 1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   analogWrite(led, brightness); 
    if(brightness==250){          // wait for a second
	valu=valu-2;
	}
	if(brightness==0){
		valu=valu+2;
	}
	delay(100);
	brightness=brightness+valu;
	//Serial.println(brightness);
	for (int i = valu; i <= (brightness/30); i++){
		Serial.print("--");
	}
	Serial.println();
}