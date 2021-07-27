#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

struct {
  char     revision[16];
  uint16_t dingleberries;
} registers = {"$Rev::       $:", 69};


void main(void) {
  printf("%s\n", registers.revision);
}
