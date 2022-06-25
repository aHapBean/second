//RISCV.cpp
#include <iostream>
#include <cstring>
#include <fstream>
void init(cpu * &RISCV){
    string s;
    while(std::cin >> s){
        RISCV->mem->init(s);
    }
}
int main(){
    /*
    std::string inputString;
    std::cin>>inputString;
    fstream inputfile(inputString);
    */
   
    cpu *RISCV = new cpu;
    init(RISCV);
    RISCV->run();

    return 0;
}