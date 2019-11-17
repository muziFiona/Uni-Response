#define START_B   A0 
#define white_B   A1
#define yellow_B   A2
#define orange_B   A3
#define green_B   A4 

#define LED_white 5
#define LED_yellow 4
#define LED_orange 3
#define LED_green 2

#define MaxRound 10
int theLED[MaxRound];
int LEDs[MaxRound];
int waitTime=1000;
int level=1;


void setup() {
  // put your setup code here, to run once:
  pinMode (START_B, INPUT);//A0
  pinMode (white_B, INPUT);//A1
  pinMode (yellow_B, INPUT);//A2
  pinMode (orange_B, INPUT);//A3
  pinMode (green_B, INPUT);//A4

  pinMode (LED_white, OUTPUT);//white_5
  pinMode (LED_yellow, OUTPUT);//yellow_4
  pinMode (LED_orange, OUTPUT);//orange_3
  pinMode (LED_green, OUTPUT);//green_2

}

void loop() {
  // put your main code here, to run repeatedly:

  /*if (digitalRead (START_B) == LOW){
    spark();
  }*/
  if (level == 1)
  {
    digitalWrite(LED_white, HIGH);
    digitalWrite(LED_yellow, HIGH);
    digitalWrite(LED_orange, HIGH);
    digitalWrite(LED_green, HIGH);
    randomPLAY();
  }
  
if (digitalRead (START_B) == HIGH || level !=1){
  //allLIGHT();
  gameStart();
  LEDmatch();
  //randomPLAY();
}
}

void gameStart(){
  digitalWrite(LED_white, LOW);
  digitalWrite(LED_yellow, LOW);
  digitalWrite(LED_orange, LOW);
  digitalWrite(LED_green, LOW);

  for (int i = 0; i < level; i++)
  {

    digitalWrite(LEDs[i], HIGH);
    delay(waitTime);
    digitalWrite(LEDs[i], LOW);
    delay(200);
   }
}

void LEDmatch(){

  int flag = 0;

  for (int i=0; i<level; i++){
    flag = 0;
    while (flag == 0){
      
       if (digitalRead(white_B) == HIGH)
       {
         digitalWrite(LED_white, HIGH);
         theLED[i] = LED_white;
         flag = 1;
         delay(200);
         if (theLED[i] != LEDs[i])
         {
           WRONG();
           return;
         }
        digitalWrite(LED_white, LOW);
      }
      
        if (digitalRead(yellow_B) == HIGH)
       {
         digitalWrite(LED_yellow, HIGH);
         theLED[i] = LED_yellow;
         flag = 1;
         delay(200);
         if (theLED[i] != LEDs[i])
         {
           WRONG();
           return;
         }
        digitalWrite(LED_yellow, LOW);
      }

        if (digitalRead(orange_B) == HIGH)
       {
         digitalWrite(LED_orange, HIGH);
         theLED[i] = LED_orange;
         flag = 1;
         delay(200);
         if (theLED[i] != LEDs[i])
         {
           WRONG();
           return;
         }
        digitalWrite(LED_orange, LOW);
      }

        if (digitalRead(green_B) == HIGH)
       {
         digitalWrite(LED_green, HIGH);
         theLED[i] = LED_green;
         flag = 1;
         delay(200);
         if (theLED[i] != LEDs[i])
         {
           WRONG();
           return;
         }
        digitalWrite(LED_green, LOW);
      }
    }
  }
  CORRECT();
}

void randomPLAY(){
  randomSeed(millis());
    for (int i = 0; i < MaxRound; i++)
  {

    LEDs[i] = random(2,5);
  }
}

void CORRECT(){
  allOFF();
  delay(200);
  allLIGHT();
  delay(1000);
  allOFF();
  delay(200);

  if (level < MaxRound){
    level++;
    waitTime -= 50;
  }
  else {
    for (int n=0; n< 5 ; n++){
      digitalWrite (LED_white,HIGH);
      digitalWrite (LED_yellow,LOW);
      digitalWrite (LED_orange,LOW);
      digitalWrite (LED_green,LOW);
      delay (100);
      digitalWrite (LED_white,LOW);
      digitalWrite (LED_yellow,HIGH);
      digitalWrite (LED_orange,LOW);
      digitalWrite (LED_green,LOW);
      delay (100);
      digitalWrite (LED_white,LOW);
      digitalWrite (LED_yellow,LOW);
      digitalWrite (LED_orange,HIGH);
      digitalWrite (LED_green,LOW);
      delay (100);
      digitalWrite (LED_white,LOW);
      digitalWrite (LED_yellow,LOW);
      digitalWrite (LED_orange,LOW);
      digitalWrite (LED_green,HIGH);
      delay (100);
      allOFF();
    }
    level=1;
  }
}

void WRONG(){
  for (int i=0; i<4; i++){
  spark();
  }
  level=1;
}

void spark(){
    digitalWrite (LED_green,LOW);
    digitalWrite (LED_white,HIGH);
    delay(100);
    digitalWrite (LED_white,LOW);
    digitalWrite (LED_yellow,HIGH);
    delay(100);
    digitalWrite (LED_yellow,LOW);
    digitalWrite (LED_orange,HIGH);
    delay(100);
    digitalWrite (LED_orange,LOW);
    digitalWrite (LED_green,HIGH);
    delay(100);
}
void allLIGHT(){
    digitalWrite (LED_white,HIGH);
    digitalWrite (LED_yellow,HIGH);
    digitalWrite (LED_orange,HIGH);
    digitalWrite (LED_green,HIGH);

}

void allOFF(){
    digitalWrite (LED_white,LOW);
    digitalWrite (LED_yellow,LOW);
    digitalWrite (LED_orange,LOW);
    digitalWrite (LED_green,LOW);

}
