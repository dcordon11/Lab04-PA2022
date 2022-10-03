// Lab4_Diego_Cordón_1094021.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

void Carrera()
{
    
    int casillas[70];
    int tortuga = 1;
    int liebre = 2;
    int *punterosCasilla;
    int porcentaje = rand() % 9;

     

    punterosCasilla = casillas;
    

    do
    {
        srand(time(NULL));
        std::cout << porcentaje << endl;
        for (int i = 1; i <= 10; i++)
        {
            porcentaje = 1 + rand() % (11 - 1);
        }



        for (int i = 0; i < 70; i++)
        {
            switch (porcentaje)
            {
            case 1:
                casillas[i] = i + 3;
                std::cout << "Paso veloz";
                std::cout << "\n";
                break;
            case 2:
                casillas[i] = i - 6;
                std::cout << "Resbalon";
                std::cout << "\n";
                break;
            case 3:
                casillas[i] = i + 1;
                std::cout << "Paso lento";
                std::cout << "\n";
                break;
            case 4:
                casillas[i] = i + 0;
                std::cout << "Duerme";
                std::cout << "\n";
                break;
            case 5:
                casillas[i] = i + 9;
                std::cout << "Gran Salto";
                std::cout << "\n";
                break;
            case 6:
                casillas[i] = i - 12;
                std::cout << "Gran resbalon";
                std::cout << "\n";
                break;
            case 7:
                std::cout << "Salto pequenio";
                std::cout << "\n";
                casillas[i] = i + 1;
                break;
            case 8:
                std::cout << "Resbalon pequenio";
                std::cout << "\n";
                casillas[i] = i - 2;
                break;

            default:
                break;
            }

            if (casillas[69] != 1 && casillas[69] != 2)
            {
                //casillas[i] = 0;
                
                casillas[0] = tortuga + liebre;
                //casillas[69] = 3;

                
            }

            //std::cout << "Casilla[" << i <<"]" << casillas[i] << endl;
            std::cout << "Casilla [" << i << "]: " << *punterosCasilla++ << endl;


            if (casillas[i] == 3)
            {
                std::cout << "Ouch!" << endl;
            }
            

            if (casillas[69] == 1)
            {
                std::cout << "El ganador es la Tortuga";
                std::cout << "\n";
            }
            else if (casillas[69] == 2)
            {
                std::cout << "El ganador es la Liebre";
                std::cout << "\n";
            }
            else if (casillas[69] == 3)
            {
                std::cout << "Es un empate!";
                std::cout << "\n";
                abort;
            }
        }
        system("pause");

    } while (casillas[69] != 3);

    //std::cout << casillas << endl;

    
}



int main()
{
    std::cout << "Bienvenidos a la carrera!" << endl;
    std::cout << "Los participantes son la Liebre y la Tortuga" << endl;
    std::cout << "\n";
    std::cout << "Tortuga = 1, Liebre = 2, Juntos = 3";
    std::cout << "\n";

    Carrera();

    std::cout << "Fin de la carrera";
    
    system("pause");

}

