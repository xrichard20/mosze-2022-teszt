#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //helyesen N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //'' helyett "", nincs ;
    for (int i = 0;) //paraméter hiány
    {
        b[i] = i * 2; //így benne van a 0 is
    }
    for (int i = 0; i; i++) //2. paraméter hibás
    {
        std::cout << "Ertek:" //meg kell adni melyik értéket jelenítse meg, hiányzik a ;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //pontatlan érték
    for (int i = 0; i < N_ELEMENTS, i++) //',' helyett ";"
    {
        atlag += b[i] //nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
