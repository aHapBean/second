//RISCV.cpp
#include <iostream>
#include <cstring>
#include <fstream>
//cpu.hpp

#include "my_cpu.hpp"
void init(cpu * &RISCV){
    RISCV->init(std::cin);
}
int main(){
    /*
    std::string inputString;
    std::cin>>inputString;
    fstream inputfile(inputString);
    */
   
    cpu *RISCV = new cpu;
    init(RISCV);
	RISCV->DEBUGrun();
    return 0;
}