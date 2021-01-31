/* BEGIN PRIVATE FUNCTION */
char* letter[] = 
{
   ".-", "-...", "-.-.", "-..", ".",  /* A -> I */
   "..-.", "--.", "....", "..",
   ".---", "-.-", ".-..", "--", "-.", /* J -> R */
   "---", ".--.", "--.-", ".-.",
   "...", "-", "..-",  "...-", ".--", /* S -> Z */
   "-..-", "-.--", "--.."
};

char* number[] =
{
  "----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."
};

const int ledPin = 13;
const int dotDelay = 200;
/* END PRIVATE FUNCTION */

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* END USER CODE */
  /* BEGIN USER CODE */
  char ch;
  if(Serial.available() > 0)
  {
    ch = Serial.read();
    if(ch >= 'a' && ch <= 'z')
    {
      Serial.println(letter[ch - 'a']);
      flashSequence(letter[ch - 'a']);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      Serial.println(letter[ch - 'A']);
      flashSequence(letter[ch - 'A']);
    }
    else if(ch >= '0' && ch <= '9')
    {
      Serial.println(letter[ch - '0']);
      flashSequence(letter[ch - '0']);
    }
    else if(ch == ' ')
    {
      Serial.println(' ');
      delay(dotDelay * 4);
    }
  }
}

/* BEGIN PRIVATE FUNCTION */
void flashSequence(char* sequence)
{
  int i = 0;
  while(sequence[i] != '\0')
  {
    flashDotOrDash(sequence[i]);
    ++i;
  }
  delay(dotDelay * 3);
}

void flashDotOrDash(char DotOrDash)
{
  digitalWrite(ledPin, HIGH);
  if(DotOrDash == ".")
  {
    delay(dotDelay);
  }
  else
  {
    delay(dotDelay * 5);
  }
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
}
/* END PRIVATE FUNCTION */
