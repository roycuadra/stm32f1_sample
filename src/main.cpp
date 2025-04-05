#include <Arduino.h>

#define LED_BUILTIN PC13

void breathingEffect();
void flashing();
void doubleBlink();
void sosMorseCode();
void runningLight();
void knightRider();
void flickeringCandle();
void randomBlink();
void heartbeatPulse();
void waveFade();
void slowPulse();
void bouncingBall();
void thunderstorm();
void policeStrobe();
void fireflyTwinkle();
void fastPulse();
void stepUpFade();
void stepDownFade();
void breathingFlash();
void fastForwardBlink();

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  breathingEffect();
  flashing();
  doubleBlink();
  sosMorseCode();
  runningLight();
  knightRider();
  flickeringCandle();
  randomBlink();
  heartbeatPulse();
  waveFade();
  slowPulse();
  bouncingBall();
  thunderstorm();
  policeStrobe();
  fireflyTwinkle();
  fastPulse();
  stepUpFade();
  stepDownFade();
  breathingFlash();
  fastForwardBlink();
}

// 1. Breathing Effect
void breathingEffect() {
  for (int i = 0; i <= 255; i += 5) {
    analogWrite(LED_BUILTIN, i);
    delay(20);
  }
  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(LED_BUILTIN, i);
    delay(20);
  }
}

// 2. Flashing
void flashing() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }
}

// 3. Double Blink
void doubleBlink() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(600);
  }
}

// 4. SOS Morse Code
void sosMorseCode() {
  int dot = 200, dash = 600;
  for (int i = 0; i < 3; i++) { digitalWrite(LED_BUILTIN, HIGH); delay(dot); digitalWrite(LED_BUILTIN, LOW); delay(dot); }
  for (int i = 0; i < 3; i++) { digitalWrite(LED_BUILTIN, HIGH); delay(dash); digitalWrite(LED_BUILTIN, LOW); delay(dot); }
  for (int i = 0; i < 3; i++) { digitalWrite(LED_BUILTIN, HIGH); delay(dot); digitalWrite(LED_BUILTIN, LOW); delay(dot); }
  delay(2000);
}

// 5. Running Light
void runningLight() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
  }
}

// 6. Knight Rider (Larson Scanner)
void knightRider() {
  for (int i = 0; i < 255; i += 5) {
    analogWrite(LED_BUILTIN, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(LED_BUILTIN, i);
    delay(10);
  }
}

// 7. Flickering Candle Effect
void flickeringCandle() {
  for (int i = 0; i < 20; i++) {
    int flicker = random(80, 255);
    analogWrite(LED_BUILTIN, flicker);
    delay(random(50, 200));
  }
}

// 8. Random Blink
void randomBlink() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(random(100, 500));
    digitalWrite(LED_BUILTIN, LOW);
    delay(random(100, 500));
  }
}

// 9. Heartbeat Pulse
void heartbeatPulse() {
  for (int i = 0; i < 2; i++) {
    analogWrite(LED_BUILTIN, 255);
    delay(100);
    analogWrite(LED_BUILTIN, 50);
    delay(100);
    analogWrite(LED_BUILTIN, 255);
    delay(200);
    analogWrite(LED_BUILTIN, 0);
    delay(600);
  }
}

// 10. Wave Fade
void waveFade() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j <= 255; j += 5) {
      analogWrite(LED_BUILTIN, j);
      delay(5);
    }
    for (int j = 255; j >= 0; j -= 5) {
      analogWrite(LED_BUILTIN, j);
      delay(5);
    }
  }
}

// 11. Slow Pulse
void slowPulse() {
  for (int i = 0; i <= 255; i += 2) {
    analogWrite(LED_BUILTIN, i);
    delay(30);
  }
  for (int i = 255; i >= 0; i -= 2) {
    analogWrite(LED_BUILTIN, i);
    delay(30);
  }
}

// 12. Bouncing Ball Effect
void bouncingBall() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    delay(300);
  }
}

// 13. Thunderstorm (Lightning)
void thunderstorm() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(random(50, 300));
    digitalWrite(LED_BUILTIN, LOW);
    delay(random(50, 700));
  }
}

// 14. Police Strobe
void policeStrobe() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
  }
}

// 15. Firefly Twinkle
void fireflyTwinkle() {
  for (int i = 0; i < 10; i++) {
    int brightness = random(10, 255);
    analogWrite(LED_BUILTIN, brightness);
    delay(random(50, 200));
    analogWrite(LED_BUILTIN, 0);
    delay(random(200, 500));
  }
}

// 16. Fast Pulse
void fastPulse() {
  for (int i = 0; i < 5; i++) {
    analogWrite(LED_BUILTIN, 255);
    delay(50);
    analogWrite(LED_BUILTIN, 0);
    delay(50);
  }
}

// 17. Step-Up Fade
void stepUpFade() {
  for (int i = 0; i <= 255; i += 20) {
    analogWrite(LED_BUILTIN, i);
    delay(50);
  }
  analogWrite(LED_BUILTIN, 0);
  delay(300);
}

// 18. Step-Down Fade
void stepDownFade() {
  analogWrite(LED_BUILTIN, 255);
  delay(300);
  for (int i = 255; i >= 0; i -= 20) {
    analogWrite(LED_BUILTIN, i);
    delay(50);
  }
}

// 19. Breathing with a Flash
void breathingFlash() {
  for (int i = 0; i <= 255; i += 10) {
    analogWrite(LED_BUILTIN, i);
    delay(10);
  }
  analogWrite(LED_BUILTIN, 255);
  delay(100);
  analogWrite(LED_BUILTIN, 0);
  delay(500);
}

// 20. Fast-Forward Blink
void fastForwardBlink() {
  for (int i = 100; i >= 10; i -= 10) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(i);
    digitalWrite(LED_BUILTIN, LOW);
    delay(i);
  }
}
