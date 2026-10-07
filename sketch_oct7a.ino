// Automated Plant Watering System
// Arduino UNO + FC-28 Soil Moisture Sensor + 5V Relay + Water Pump

const int moisturePin = A0;
const int relayPin = 7;

// Adjust this value after calibration
// For most FC-28 analog sensors:
// Higher value = drier soil
const int threshold = 600;

void setup() {
  Serial.begin(9600);

  pinMode(moisturePin, INPUT);
  pinMode(relayPin, OUTPUT);

  // Pump OFF initially
  digitalWrite(relayPin, HIGH);

  Serial.println("Smart Irrigation System Started");
}

void loop() {

  int moistureValue = analogRead(moisturePin);

  Serial.print("Soil Moisture Value: ");
  Serial.println(moistureValue);

  // Soil is dry
  if (moistureValue > threshold) {

    Serial.println("Soil is DRY - Pump ON");

    digitalWrite(relayPin, LOW);  // Relay ON
    delay(3000);                  // Pump runs for 3 seconds

    digitalWrite(relayPin, HIGH); // Relay OFF

    Serial.println("Pump OFF");
  }

  // Soil has enough moisture
  else {
    Serial.println("Soil is WET - Pump OFF");

    digitalWrite(relayPin, HIGH);
  }

  delay(2000);  // Check every 2 seconds
}