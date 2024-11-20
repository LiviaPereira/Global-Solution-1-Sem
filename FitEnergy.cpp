// Código Arduino sketch.ino para Bike Generator Monitor (FitEnergy)
#include <LiquidCrystal_I2C.h>

// Definindo o endereço do LCD e o tamanho do display
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Definição do pino do potenciômetro e do LED indicativo
#define POT_PIN A0
#define LED_PIN 13

void setup() {
  // Iniciando comunicação serial para debug
  Serial.begin(9600);

  // Inicializando o LCD
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("FitEnergy Iniciado");

  // Configurando o LED
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Leitura do potenciômetro (simulando a corrente do dínamo)
  int valorAnalogico = analogRead(POT_PIN);
  float corrente = (valorAnalogico / 1023.0) * 5.0; // Converter leitura analógica para tensão (simulação)

  // Mostrando a corrente em tempo real no LCD
  lcd.setCursor(0, 0);
  lcd.print("Corrente: ");
  lcd.print(corrente, 2);
  lcd.print(" A   ");

  // Verificando se a meta de energia foi atingida (exemplo: 3V no potenciômetro)
  if (corrente >= 3.0) {
    digitalWrite(LED_PIN, HIGH); // Liga o LED para indicar meta atingida
  } else {
    digitalWrite(LED_PIN, LOW); // Desliga o LED se não atingir
  }

  // Enviando informações para o monitor serial
  Serial.print("Corrente: ");
  Serial.print(corrente);
  Serial.println(" A");

  delay(1000); // Delay de 1 segundo entre leituras
}
