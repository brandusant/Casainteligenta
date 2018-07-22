
void setup() {
Serial.begin(9600);
 pinMode(13, OUTPUT); 
  pinMode(12, OUTPUT); 
   pinMode(11, OUTPUT); 
    pinMode(10, OUTPUT); 
     pinMode(9, OUTPUT); 
 }
 
void loop() {

if(Serial.available()>0)
   {     
      char data= Serial.read(); 
      switch(data)
      {
        case 'a': digitalWrite(13, HIGH);break; 
        case 'd': digitalWrite(13, LOW);break; 

        case 'c': digitalWrite(12, HIGH);break; 
        case 'd': digitalWrite(12, LOW);break; 

        case 'e': digitalWrite(11, HIGH);break; 
        case 'f': digitalWrite(11, LOW);break; 

        case 'g': digitalWrite(10, HIGH);break; 
        case 'h': digitalWrite(10, LOW);break; 

        case 'i': digitalWrite(9, HIGH);break; 
        case 'j': digitalWrite(9, LOW);break;
        
        
       default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
