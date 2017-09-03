// Esempio 01: accendi il led appena è premuto il pulsante

#define BUTTON 8              // pin di input dove è collegato il pulsante
#define RELE 7
int  val = 0, prevVal=0;                 // si userà val per conservare lo stato del pin di input
#define MAX_VIDEOS 24

int   keys[MAX_VIDEOS] = { 81,87,69,82,84,89,85,73,65,83,68,70,71,72,74,75,90,88,67,86,66,78,77,44 };

int sendVideo(){
  return ;
}

void setup() {
  Serial.begin(9600);
  pinMode(BUTTON, INPUT);     // imposta il pin digitale come input
  pinMode(RELE, OUTPUT);
  digitalWrite(RELE, HIGH); 
}

void loop() {
  val = digitalRead(BUTTON);  // legge il valore dell'input e lo conserva

  // controlla che l'input sia HIGH (pulsante premuto)
  if (val == HIGH) {
    digitalWrite(RELE, LOW);
    if( val != prevVal)
    {
      //Serial.println(val);
      //Serial.println(prevVal);
      Serial.print(keys[random(MAX_VIDEOS)]);
      //Serial.println();
    }
  }
  else 
  {
    digitalWrite(RELE, HIGH);
  }
  
  prevVal = val;
  delay(50);
}
