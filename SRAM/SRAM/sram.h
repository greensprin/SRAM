#pragma once

#define MEM_CAPA (8192)

class SRAM {
public:
  void in_data(int addr, int data, int we, int ce, int clk, int rst);
  int out_data(int addr, int data, int we, int ce, int clk, int rst);
  void rst_mem(int rst);

private:
  int memory[MEM_CAPA];
};