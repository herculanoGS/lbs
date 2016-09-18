
void setup() {
  Serial.begin(9600);
  Serial.print("Digite uma string para procurarmos um palíndromo nela\n");
}

String palindrome;

int head[]={0,0};

unsigned long t;

void check_pal(int lohi[]){
  while(palindrome.charAt(lohi[0]) == palindrome.charAt(lohi[1]) 
  && lohi[0] >= 0 && lohi[1] <= palindrome.length()){
    lohi[0]--;
    lohi[1]++;
  }
  lohi[0]++;
  lohi[1]--;
  if(lohi[1] - lohi[0] > head[1] - head[0]){
    head[0]=lohi[0];
    head[1]=lohi[1];
  }
}

void find_pals(){
  int lohi[]={0,0};
  head[0]=0;
  head[1]=0;
  int i = palindrome.length();
  while(i-->1){
    lohi[0]=i;
    lohi[1]=i;// palindromos impares
    check_pal(lohi);
    lohi[0]=i-1;
    lohi[1]=i;// palindromos pares
    check_pal(lohi);
  }
}

void loop() {
  // put your main code here, to run repeatedly: 
  if (Serial.available() > 0) {
    t = millis();
    palindrome = Serial.readString();
    find_pals();
    t = millis() - t;
    Serial.print("O maior palindromo é [" + 
    palindrome.substring(head[0],head[1] +1) + 
    "] lo: [" + head[0] + "] hi: [" + head[1] + 
    "] ms: [" + t + "]\n");
  }
}
