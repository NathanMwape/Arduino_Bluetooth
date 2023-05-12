char states = 0; // Définit une variable de caractère pour stocker la valeur entrante

const int led1 = 5; // Définit la broche pour la LED 1
const int led2 = 8; // Définit la broche pour la LED 2
const int led3 = 13; // Définit la broche pour la LED 3

// initialisation de la fonction
void setup() {
  Serial.begin(9600);  // Initialise la communication série avec une vitesse de 9600 bauds     
  pinMode(led1, OUTPUT); // Initialise la broche pour la LED 1 en sortie
  pinMode(led2, OUTPUT); // Initialise la broche pour la LED 2 en sortie
  pinMode(led3, OUTPUT); // Initialise la broche pour la LED 3 en sortie
}

// excution de programme
void loop() {
  if (Serial.available() > 0) { // Vérifie si des données sont disponibles sur la communication série
    states = Serial.read(); // Lit la valeur entrante et la stocke dans la variable "states"
    Serial.print(states); // Affiche la valeur entrante dans le moniteur série
    Serial.print("\n"); // Passe à la ligne dans le moniteur série
    if (states == '1') { // Si la valeur entrante est '1'
      digitalWrite(led1, HIGH); // Allume la LED 1
      Serial.print("led 1 Alummee"); // Affiche un message dans le moniteur série
    }
    else if (states == '0') { // Sinon, si la valeur entrante est '0'
      digitalWrite(led1, LOW); // Éteint la LED 1
      Serial.print("led 1 eteint"); // Affiche un message dans le moniteur série
    }
    else if (states == '2') { // Si la valeur entrante est '2'
      digitalWrite(led2, HIGH); // Allume la LED 2
      Serial.print("led 2 Alummee"); // Affiche un message dans le moniteur série
    }
    else if (states == '3') { // Sinon, si la valeur entrante est '3'
      digitalWrite(led2, LOW); // Éteint la LED 2
      Serial.print("led 2 eteint"); // Affiche un message dans le moniteur série
    }
    else if (states == '4') { // Si la valeur entrante est '4'
      digitalWrite(led3, HIGH); // Allume la LED 3
      Serial.print("led 3 Alummee"); // Affiche un message dans le moniteur série
    }
    else if (states == '5') { // Sinon, si la valeur entrante est '5'
      digitalWrite(led3, LOW); // Éteint la LED 3
      Serial.print("led 3 eteint"); // Affiche un message dans le moniteur série
    }
    else if (states == '6') { // Si la valeur entrante est '6'
      digitalWrite(led1, HIGH); // Allume la LED 1
      digitalWrite(led2, HIGH); // Allume la LED 2
      digitalWrite(led3, HIGH); // Allume la LED 3
      Serial.print("ON ALL "); // Affiche un message dans le moniteur série
    }
    else if (states == '7') { // Si la valeur entrante est '7'
      digitalWrite(led1, LOW); // Éteint la LED 1
      digitalWrite(led2, LOW); // Éteint la LED 2
      digitalWrite(led3, LOW); // Éteint la LED 3
      Serial.print("ON ALL "); // Affiche un message dans le moniteur série
    }
  }
}
