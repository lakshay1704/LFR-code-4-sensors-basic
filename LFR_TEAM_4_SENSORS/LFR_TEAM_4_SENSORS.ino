int LS = 10 ;
int RS = 11 ;
int ELS = 9 ;
int ERS = 12 ;
int LM1 = 5 ;
int RM1 = 3 ;
int LM2 = 4;
int RM2 = 2;

void setup()
{
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
  pinMode(ELS, INPUT);
  pinMode(ERS, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM2, OUTPUT);
}

void loop() {
 if(digitalRead(LS)==1 && digitalRead(RS)==1 && digitalRead(ELS)==1 && digitalRead(ERS)==1 )     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(RM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, LOW);
   
  } 
  
 if(digitalRead(LS)==1 && digitalRead(RS)==0 && digitalRead(ELS)==1 && digitalRead(ERS)==1 )     // Turn right
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, LOW);
    

  }
  
  if(digitalRead(LS)==0 && digitalRead(RS)==1 && digitalRead(ELS)==1 && digitalRead(ERS)==1 )     // turn left
  {
    digitalWrite(LM1, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, LOW);
  
  }
  
  if(digitalRead(LS)==0 && digitalRead(RS)==0 && digitalRead(ELS)==0 && digitalRead(ERS)==0)     // stop
  {
    digitalWrite(LM1, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, LOW);
    
  }
   
   if(digitalRead(LS)==0 && digitalRead(RS)==1 && digitalRead(ELS)==0 && digitalRead(ERS)==1 )     // Move Extreme Left
  {
    digitalWrite(LM1, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(LM2, HIGH);
    digitalWrite(RM2, LOW);
   }
   
   if(digitalRead(LS)==1 && digitalRead(RS)==0 && digitalRead(ELS)==1 && digitalRead(ERS)==0 )     // Move Extreme Right
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(RM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM2, HIGH);
   }
}
