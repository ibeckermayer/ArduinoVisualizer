const int sensorPin = A0; // select the input pin for the potentiometer
int sensorValue = 0; // variable to store the value coming from the sensor
const int est_0_val = 840; //the estimated value to subtract so that no sound = 0 (determined empirically)


void setup() {
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  int trueValue = sensorValue-est_0_val; //estimated value with no sound = 0
  Serial.println(trueValue);
//  Serial.print(",");
//  Serial.println(sensorValue);
}
