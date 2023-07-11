#include <Arduino.h>
const int btn_elevar = 7;
const int btn_rebaixar = 6;
String jman;
int temperatura;

void setup() {
	Serial.begin(9600);
	pinMode(btn_elevar, INPUT_PULLUP);
	pinMode(btn_rebaixar, INPUT_PULLUP);
}

void loop() {
	temperatura = random(10, 30);
	int elevar = digitalRead(btn_elevar);
	int rebaixar = digitalRead(btn_rebaixar);
	if(rebaixar == LOW && elevar == HIGH){
		jman = "_/10.";
	}else if(rebaixar == HIGH && elevar == LOW){
		jman = "_/01.";
	}else{
		jman = "_/00.";
	}
	Serial.println(jman + temperatura + "/");
	delay(500);
}