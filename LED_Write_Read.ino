char command;
String string;
boolean ledon = false;
#define led1 4
#define led2 5
#define led3 6
#define led4 7
#define led5 8
#define led6 9
#define led7 10
#define led8 11

  void setup()
  {
    Serial.begin(9600);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
    /*digitalWrite(led1,1);
    digitalWrite(led2,1);
    digitalWrite(led3,1);
    digitalWrite(led4,1);4
    digitalWrite(led5,1);
    digitalWrite(led6,1);
    digitalWrite(led7,1);
    digitalWrite(led8,1);
    */
  }

  void loop()
  {
    if (Serial.available() > 0) 
    {string = "";}
    
    while(Serial.available() > 0)
    {
      command = ((byte)Serial.read());
      
      if(command == ':')
      {
        break;
      }
      
      else
      {
        string += command;
      }
    }
    
    if(string == "AN")
    {
        digitalWrite(led1,0);
    }
    
    if(string =="AF")
    {
        digitalWrite(led1,1);
    }
    if(string == "BN")
    {
        digitalWrite(led2,0);
    }
    if(string =="BF")
    {
        digitalWrite(led2,1);
    }
    if(string == "CN")
    {
        digitalWrite(led3,0);
    }
    if(string =="CF")
    {
        digitalWrite(led3,1);
    }
    if(string == "DN")
    {
        digitalWrite(led4,0);
    }
    if(string =="DF")
    {
        digitalWrite(led4,1);
    }
    if(string == "EN")
    {
        digitalWrite(led5,0);
    }
    if(string =="EF")
    {
        digitalWrite(led5,1);
    }
    if(string == "FN")
    {
        digitalWrite(led6,0);
    }
    if(string =="FF")
    {
        digitalWrite(led6,1);
    }
    if(string == "GN")
    {
        digitalWrite(led7,0);
    }
    if(string =="GF")
    {
        digitalWrite(led7,1);
    }
    if(string == "HN")
    {
        digitalWrite(led8,0);
    }
    if(string =="HF")
    {
        digitalWrite(led8,1);
    }
 } 

    
