#include <Arduino.h>
#include <BowlWatchy.h>

#include "settings.h"

BowlWatchy watchy(settings);

void setup() {
  watchy.init();
}

void loop() {
  // put your main code here, to run repeatedly:
}