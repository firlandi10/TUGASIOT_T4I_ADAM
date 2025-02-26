#include <Arduino.h> // Wajib untuk PlatformIO + ESP32

// Deklarasi pin LED
int lampuMerah = 25;  // LED Merah di pin 25
int lampuKuning = 33; // LED Kuning di pin 33
int lampuHijau = 26;  // LED Hijau di pin 26

void setup() {
  Serial.begin(115200); // Inisialisasi komunikasi Serial
  Serial.println("ESP32 Traffic Light Simulation");

  // Atur pin sebagai OUTPUT
  pinMode(lampuMerah, OUTPUT);
  pinMode(lampuKuning, OUTPUT);
  pinMode(lampuHijau, OUTPUT);
}

void loop() {
  // Nyalakan lampu merah
  digitalWrite(lampuMerah, HIGH);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, LOW);
  Serial.println("Lampu Merah ON");
  delay(10000); // Lampu Merah menyala selama 10 detik

  // Nyalakan lampu kuning
  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, HIGH);
  digitalWrite(lampuHijau, LOW);
  Serial.println("Lampu Kuning ON");
  delay(5000); // Lampu Kuning menyala selama 5 detik

  // Nyalakan lampu hijau
  digitalWrite(lampuMerah, LOW);
  digitalWrite(lampuKuning, LOW);
  digitalWrite(lampuHijau, HIGH);
  Serial.println("Lampu Hijau ON");
  delay(9000); // Lampu Hijau menyala selama 9 detik
}