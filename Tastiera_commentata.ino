int notes[] = {262, 294, 330, 349};
//Crea un array con 4 frequenze, per le note Do,Re,Mi,Fa centrali
void setup() {
  //Fa iniziare la comunicazone seriale
  Serial.begin(9600);
  pinMode(13,OUTPUT);//imposta il pin 13 come output
}

void loop() {
  //crea una variabile per il valore che arriva dal pin A0
  int Valore = analogRead(A0);
  //stampa a monitor il valore che riceve
  Serial.println(Valore);
  //spegne il led
  digitalWrite(13,LOW);
  //suona la nota corrispondente al valore ricevuto da A0
  if (Valore == 1023) {
    //suona la prima frequenza sul pin 8
    tone(8, notes[0]);
    //accende il led se il tasto è premuto
    digitalWrite(13,HIGH);
  } else if (Valore >= 990 && Valore <= 1010) {
    //suona la seconda frequenza sul pin 8
    tone(8, notes[1]);
    //accende il led se il tasto è premuto
    digitalWrite(13,HIGH);
  } else if (Valore >= 505 && Valore <= 515) {
    //suona la terza frequenza sul pin 8
    tone(8, notes[2]);
    //accende il led se il tasto è premuto
    digitalWrite(13,HIGH);
  } else if (Valore >= 5 && Valore <= 10) {
    //suona la quarta frequenza sul pin 8
    tone(8, notes[3]);
    //accende il led se il tasto è premuto
    digitalWrite(13,HIGH);
  } else {
    //Se il valore è fuori dal nostro raggio non suonare niente
    noTone(8);
  }
}

