//
// Course:  C++, Curso Completo
// Teacher: Wagner Rambo
// Student: Brunno Hiroshy Murai
// Module:  5
// Lesson:  2
// Date:    2022-12-19
// IDE:     Code::Blocks
// File:    Memory.cpp
//
//========================================
//---- Class Development (Member-Function)
#include "Memory.hpp"

Memory::Memory(int memoryNumber){
    memory = memoryNumber;
}
Memory::~Memory(){
}
void Memory::getRandomNumbers(){
    srand(time(0)+memory);
    for(int i=0; i<16; i++) ram[i]=rand()%255;
}
void Memory::listNumbers(){
    cout<<"Memoria: "<<memory<<endl;
    getRandomNumbers();
    for(int i=0; i<16; i++){
        cout<<"ADDR "<<setw(3)<<i<<" content = "<<setw(4)<<ram[i]<<endl;
    }
}
