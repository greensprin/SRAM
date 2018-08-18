#include <cstdio>
#include <iostream>

// my header file
#include "sram.h"

int main(void) {
  int clk = 1;
  int rst = 1;
  const int limit = 100;

  int addr = 40;
  int data = 300;
  int we = 0;
  int ce = 1;

  SRAM sram1;
  sram1.rst_mem(rst);
  rst = 0;

  // input data
  we = 1;
  sram1.in_data(addr, data, we, ce, clk, rst);

  // output data
  we = 0;
  int odata = sram1.out_data(addr, data, we, ce, clk, rst);
  std::cout << odata << std::endl;

  // break point
  getchar();

  return 0;
}