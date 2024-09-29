unsigned int var = 0;
void setup()
{
  Serial.begin(9600);
  Serial.println("Hello Computer");
  unsigned int var = 0;
}

void loop()
{
  Serial.print("{\"var\":");
  Serial.print(var++);
  Serial.print("}");
  Serial.print("\n");
  delay(100);
}