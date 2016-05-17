#include "WebInterface.h"
#include "Fire.h"


void setup()
{
	Serial.begin(115200);
	Serial.println();
	Serial.println("Fire2012_NeoPixelBus");

	setupWiFi();
	setupWebServer();

	setupFire();
}


void loop()
{
	server.handleClient();
	keepFireAlive();
}
