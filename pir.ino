/*  
   http://RandomNerdTutorials.com/pirsensor
 */
 
int led = 13;                
int sensor = 2;              
int stare = LOW;             
int val = 0;                 
void setup() {
  pinMode(led, OUTPUT);      // initializare LED ca iesire
  pinMode(sensor, INPUT);    // initializare senzor ca intrare

}

void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) 
  {           
    digitalWrite(led, HIGH);   
    delay(100);                 
    
    if (stare == LOW) 
    { 
      stare = HIGH;       
    }
  } 
  else 
  {
      digitalWrite(led, LOW); 
      delay(100);              
      
      if (stare == HIGH)
      {
        stare = LOW;       
      }
  }
}
