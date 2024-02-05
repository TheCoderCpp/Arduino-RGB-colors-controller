int lights[3];
void setup() {
  for (int i = 0; i != 3; i++)
  {
    if (lights[i] == 0)
    {
      if (i == 0)
      {
        digitalWrite(5, LOW);
      }
      else if (i == 1)
      {
        digitalWrite(6, LOW);
      }
      else if (i == 2)
      {
        digitalWrite(9, LOW);
      }
    }
    else
    {
      if (i == 0)
      {
        digitalWrite(5, HIGH);
      }
      else if (i == 1)
      {
        digitalWrite(6, HIGH);
      }
      else if (i == 2)
      {
        digitalWrite(9, HIGH);
      }
    }
  }
  Serial.begin(115200);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}
char key;
void loop() {
  
  key = Serial.read();

  if (key == 'r')
  {
    if (lights[0] == 0)
    {
    digitalWrite(5, HIGH);
    lights[0] = 1;
    }
    else {
      digitalWrite(5, LOW);
      lights[0] = 0;
    }
  }
  else if (key == 'g')
  {
    if (lights[1] == 0)
    {
    digitalWrite(6, HIGH);
    lights[1] = 1;
    }
    else {
      digitalWrite(6, LOW);
      lights[1] = 0;
    }
  }
  else if (key == 'b')
  {
    if (lights[2] == 0)
    {
    digitalWrite(9, HIGH);
    lights[2] = 1;
    }
    else {
      digitalWrite(9, LOW);
      lights[2] = 0;
    }
  }
  else if (key == 'd')
  {
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(9, LOW);
  }
  else if (key == 'e')
  {
    for (int i = 0; i != 3; i++)
  {
    if (lights[i] == 0)
    {
      if (i == 0)
      {
        digitalWrite(5, LOW);
      }
      else if (i == 1)
      {
        digitalWrite(6, LOW);
      }
      else if (i == 2)
      {
        digitalWrite(9, LOW);
      }
    }
    else
    {
      if (i == 0)
      {
        digitalWrite(5, HIGH);
      }
      else if (i == 1)
      {
        digitalWrite(6, HIGH);
      }
      else if (i == 2)
      {
        digitalWrite(9, HIGH);
      }
    }
    }
  }
}