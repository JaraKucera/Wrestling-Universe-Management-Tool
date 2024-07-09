// Wrestling-Universe-Management-Tool.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Wrestler.cpp"

int main()
{
    Wrestler cmpunk("CM PUNK", HEEL, RAW);
    printf(cmpunk.get_name().c_str());
    cmpunk.print();
    
}


