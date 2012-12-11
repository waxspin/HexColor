int RED_PIN = 6;
int GREEN_PIN = 5;
int BLUE_PIN = 3;
int WHITE_PIN_1 = 10;
int WHITE_PIN_2 = 11;

int oldMillis = 0;
int nowMillis = 0;


void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(WHITE_PIN_1, OUTPUT);
  pinMode(WHITE_PIN_2, OUTPUT);
  
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  analogWrite(WHITE_PIN_1, 255);
  analogWrite(WHITE_PIN_2, 255);
  
  
  Serial.begin(9600);
  
  Serial.println("The initialization has taken place.");
}

void loop() {
  
}
