// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double ok = value;
  if (n == 0) {
    value = 1;
  }
  if (n != 0) {
for (uint64_t i = 1; i < n; i++) {
  value = value * ok;
}
  }
  return value;
}

uint64_t fact(uint16_t n) {
  uint64_t factor = 1;
  if (n == 0) {
    factor = 1;
  }
  if (n != 0) {
for (uint64_t i = 1; i <= n; i++) {
  factor = factor * i;
}
  }
  return factor;
}

double calcItem(double x, uint16_t n) {
return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
double value = 0;
for (uint64_t i = 0; i < count; i++) {
  value = value + calcItem(x, i);
}
  return value;
}

double sinn(double x, uint16_t count) {
double value = 0;
for (uint64_t i = 1; i < count; i++) {
  value = value + pown(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
}
  return value;
}

double cosn(double x, uint16_t count) {
double value = 0;
for (uint64_t i = 1; i < count; i++) {
  value = value + pown(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
}
  return value;
}
