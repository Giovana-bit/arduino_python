#include <TMP36.h>
TEMP36 tmp(A0, 5.0);

float valorTemp = 0;
const int ledBrancoPin = 2; //Pino do LED branco
const int ledVerdePin = 3; //Pino do LED verde
const int ledVermelhoPin = 4; //Pino do LED vermelho
const int buzzerPin = 5; //Pino do buzzer

void setup () {
    Serial.begin(9600);
    pinMode(ledBrancoPin, OUTPUT);
    pinMode(ledVerdePin, OUTPUT);
    pinMode(ledVermelhoPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop () {

    if (Serial.available() > 0) {
        char led = Serial.read();

        switch (led) {
            case 'B':
            digitalWrite(ledBrancoPin, HIGH);
            digitalWrite(ledVerdePin, LOW);
            digitalWrite(ledVermelhoPin, LOW);
            digitalWrite(buzzerPin, LOW);
            break;

            case 'V':
            digitalWrite(ledBrancoPin, LOW);
            digitalWrite(ledVerdePin, HIGH);
            digitalWrite(ledVermelhoPin, LOW);
            digitalWrite(buzzerPin, LOW);
            break;

            case 'R':
            digitalWrite(ledBrancoPin, LOW);
            digitalWrite(ledVerdePin, LOW);
            digitalWrite(ledVermelhoPin, HIGH);
            digitalWrite(buzzerPin, LOW);
            break;
        }

        valorTemp = tmp.getTempC();
        Serial.printLn("Temperatura: " + String(valorTemp) + " C");
        delay(2000);
    }
}