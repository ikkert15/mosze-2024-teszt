#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    

    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 értékek duplázása" << std::endl;
    
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Érték: " << b[i] << std::endl;
    }
    
    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    
    atlag /= N_ELEMENTS;
    std::cout << "Átlag: " << atlag << std::endl;

    std::cout << "Persze hogy segítek a házidban!" << std::endl;

    delete[] b;
    return 0;
}