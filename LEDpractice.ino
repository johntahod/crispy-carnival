
int led [3]= {6,7,8};  // make pin 6,7,8 led

int trig = 9;//trig is pin 9
int echo = 10;//echo pin 10

long duration; //store long number 
int distance;

void setup() {
  for(int x=0; x<3; x++)
  {
pinMode(led[x],OUTPUT); //made led 6,7,8 output


}


pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);//start communicatin with arduino
}
void loop() {
  digitalWrite(trig,LOW);//dont do anything
  delay(10);//wait 10 seconds
  digitalWrite(trig,HIGH);//shoot a signal 
  delay(10);//shoot for 10 milisec.

  digitalWrite(trig,LOW);//turn out trig
  duration=pulseIn(echo,HIGH);//reads signal
  distance = duration *0.034/2; //conversion factor
  Serial.println(distance);
  

/*

  for(int x = 0; x< 3; x++)
  { 
    digitalWrite(led[x],HIGH); //turn on led
    delay(100);//make wait half second
  
    digitalWrite(led[x],LOW);
    delay(100);
  }*/

}
