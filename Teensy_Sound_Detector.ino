int value;
double voltage;
double decibels;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(PIN_B0, OUTPUT);
  pinMode(PIN_B1, OUTPUT);
  pinMode(PIN_B3, OUTPUT);

  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  value = analogRead(0);
  Serial.print("Analog 0 = ");
  Serial.println(value);

  voltage = value * 5 / 1023.0;
  Serial.print("Voltage = ");
  Serial.println(voltage);

  decibels = 20 * log10(voltage/0.7746);
  Serial.print("Decibels = ");
  Serial.println(decibels);
  Serial.println("--------------");

  if(decibels == -0.00)
  {
      digitalWrite(PIN_B0, LOW);
      digitalWrite(PIN_B1, LOW);
      digitalWrite(PIN_B3, LOW);

      delay(15);
  }
  
  if(decibels >= -12.00 && decibels < 11.00)
  {
    digitalWrite(PIN_B0, HIGH);
    delay(15);
  }
  
  if(decibels >= 11.00 && decibels < 14.00)
  {
    digitalWrite(PIN_B0, HIGH);
    digitalWrite(PIN_B1, HIGH);
    delay(15);
  }
  
  if(decibels >= 14.00)
  {
    digitalWrite(PIN_B0, HIGH);
    digitalWrite(PIN_B1, HIGH);
    digitalWrite(PIN_B3, HIGH);
    delay(15);
  }
  
  else
  {
    digitalWrite(PIN_B0, LOW);
    digitalWrite(PIN_B1, LOW);
    digitalWrite(PIN_B3, LOW);

     delay(15);
  }
}
