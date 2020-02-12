#include "chip8.h"


#include <stdio.h>
#include <stdint.h>

uint16_t opcode;
uint8_t  memory[MEM_SIZE];
uint8_t  V[16];
uint16_t I;
uint16_t PC;
uint8_t  gfx[GFX_ROWS][GFX_COLS];
uint8_t  delay_timer;
uint8_t  sound_timer;
uint16_t stack[STACK_SIZE];
uint16_t SP;
uint8_t  key[KEY_SIZE];
bool     chip8_draw_flag;

int main() {
    int i;

    PC = 0x200;
    opcode = 0;
    I = 0;
    SP = 0;

    memset(memory, 0, sizeof(uint8_t)  * MEM_SIZE);
    memset(V,      0, sizeof(uint8_t)  * 16);
    memset(gfx,    0, sizeof(uint8_t)  * GFX_SIZE);
    memset(stack,  0, sizeof(uint16_t) * STACK_SIZE);
    memset(key,    0, sizeof(uint8_t)  * KEY_SIZE);
}
