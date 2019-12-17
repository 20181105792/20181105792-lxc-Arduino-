char tmpChar[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};



void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.print("h");
   Serial.print("e");
   Serial.print("l");
   Serial.print("p");
}


void GetChar(char tmpChar)
    {
      switch (tmpChar) {
        case 'a':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'b':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(6000);
        break;
        case 'c':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'd':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(4000);
        break;
        case'e':
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'f':
        Serial.println(13,LOW);
        delay(4000);
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'g':
        Serial.println(13,HIGH);
        delay(4000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'h':
        Serial.println(13,LOW);
        delay(8000);
        break;
        case 'i':
        Serial.println(13,LOW);
        delay(4000);
        break;
        case 'j':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(6000);
        break;
        case 'k':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'l':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(4000);
        break;
        case 'm':
        Serial.println(13,HIGH);
        delay(4000);
        break;
        case 'n':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'o':
        Serial.println(13,HIGH);
        delay(6000);
        break;
        case 'p':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(4000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 'q':
        Serial.println(13,HIGH);
        delay(4000);
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'r':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        break;
        case 's':
        Serial.println(13,LOW);
        delay(6000);
        break;
        case 't':
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'u':
        Serial.println(13,LOW);
        delay(4000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'v':
        Serial.println(13,LOW);
        delay(6000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'w':
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);
        delay(4000);
        break;
        case 'x':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(4000);
        Serial.println(13,HIGH);
        delay(2000);
        break;
        case 'y':
        Serial.println(13,HIGH);
        delay(2000);
        Serial.println(13,LOW);
        delay(2000);
        Serial.println(13,HIGH);88
        delay(4000);
        break;
        case 'z':
        Serial.println(13,HIGH);
        delay(4000);
        Serial.println(13,LOW);
        delay(4000);
        break;
        
        default:
           break;
      }
    }
