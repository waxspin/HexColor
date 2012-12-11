int RED_PIN = 6;
int GREEN_PIN = 5;
int BLUE_PIN = 3;


void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
  analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 255);
    analogWrite(BLUE_PIN, 255);
  
  Serial.begin(9600);
  
  Serial.println("The initialization has taken place.");
}

void loop() {
  
}
