// CPU implementation
// Created by Jorge on 2/2/17.
//

#ifndef CHIP_8_EMULATOR_CHIP8_H
#define CHIP_8_EMULATOR_CHIP8_H
unsigned short opcode; // current opcode. CHIP-8 has 35 2 byte opcodes
unsigned char memory[4096]; //4k memory
unsigned char V[16]; //16 CPU registers. 15 1-byte General purpose, 16th register is carry flag

unsigned short I; // index register
unsigned short pc; // program counter, 0x000 to 0xFFF;

#endif //CHIP_8_EMULATOR_CHIP8_H
