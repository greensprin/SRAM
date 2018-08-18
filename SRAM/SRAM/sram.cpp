#include "sram.h"

void SRAM::in_data(int addr, int data, int we, int ce, int clk, int rst) {
  if (we == 1 && ce == 1 && clk == 1 && rst == 0) {
    memory[addr] = data;
  }
}

int SRAM::out_data(int addr, int data, int we, int ce, int clk, int rst) {
  if (we == 0 && ce == 1 && clk == 1 && rst == 0) {
    return memory[addr];
  }
  return 0;
}

void SRAM::rst_mem(int rst) {
  if (rst == 1) {
    for (int i = 0; i < MEM_CAPA; i++) { memory[i] = 0; }
  }
}