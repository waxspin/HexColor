int RED_PIN = 6;
int GREEN_PIN = 5;
int BLUE_PIN = 3;
int WHITE_PIN_1 = 10;
int WHITE_PIN_2 = 11;

int oldMillis = 0;
int nowMillis = 0;
int WAIT_TIME_IN_MILLIS = 250;
int FADE_INCREMENT = 15;
int curBrightness = 255;



void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(WHITE_PIN_1, OUTPUT);
  pinMode(WHITE_PIN_2, OUTPUT);
  
  //Init the pins to the initial curBrightness value.
  analogWrite(RED_PIN, curBrightness);
  analogWrite(GREEN_PIN, curBrightness);
  analogWrite(BLUE_PIN, curBrightness);
  analogWrite(WHITE_PIN_1, curBrightness);
  analogWrite(WHITE_PIN_2, curBrightness);
  
  
  Serial.begin(9600);
  
  Serial.println("The initialization has taken place.");
}

void loop() {
  nowMillis = millis();
  
  if (nowMillis - oldMillis > WAIT_TIME_IN_MILLIS) {
    curBrightness -= FADE_INCREMENT;
    
    if (curBrightness > 255 || curBrightness < 0) {
      FADE_INCREMENT *= -1;
    }
  
  analogWrite(RED_PIN, curBrightness);
  analogWrite(GREEN_PIN, curBrightness);
  analogWrite(BLUE_PIN, curBrightness);
  analogWrite(WHITE_PIN_1, curBrightness);
  analogWrite(WHITE_PIN_2, curBrightness);
  
  //Serial.println(FADE_INCREMENT);
  
  oldMillis = nowMillis;
  }
  
  
}
