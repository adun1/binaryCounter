#define RED 11
#define RED2 4
#define YELLOW 10
#define GREEN 9
#define BLUE 6
#define WHITE 5
#define RED_DELAY 500  
#define GAP 3000
#define END 2000

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(WHITE, OUTPUT);
  pinMode(RED2, OUTPUT);
}

//idea turn it into recursive
void binaryCount()
{
  for(int i = 0; i < 2; i++)
  {
    (i % 2 == 0) ? digitalWrite(RED, LOW): digitalWrite(RED, HIGH);
    for(int j = 0; j < 2; j++)
    {
      (j % 2 == 0) ? digitalWrite(YELLOW, LOW) : digitalWrite(YELLOW, HIGH);
      for(int k = 0; k < 2; k++)
      {
        (k % 2 == 0) ? digitalWrite(GREEN, LOW) : digitalWrite(GREEN, HIGH);
        for(int c = 0; c < 2; c++)
        {
          (c % 2 == 0) ? digitalWrite(BLUE, LOW) : digitalWrite(BLUE, HIGH);
          for(int d = 0; d < 2; d++)
          {
            (d % 2 == 0) ? digitalWrite(WHITE, LOW) : digitalWrite(WHITE, HIGH);
            for(int e = 0; e < 2; e++)
            {
              (e % 2 == 0) ? digitalWrite(RED2, LOW) : digitalWrite(RED2, HIGH);
              delay(GAP);
              
            }
            
          }
        }
      }
      
    }
  }
}

void turnOnAll()
{
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(WHITE, HIGH);
}

void turnOffAll()
{
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(WHITE, LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
  binaryCount();
  turnOffAll();
  delay(END);
}
