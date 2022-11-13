/// 2022_10_24_001_Arreglos_CP11.cpp 
// Daniel Callejas Rayón
//Ver la sintaxis de los arreglos

#include <iostream>
#include <string>

int main()
{
    bool respuesta, denuevo;
    int videojuego;
    std::string videojuego1[3];
    std::string videojuego2[3];
    std::string videojuego3[3];
    std::cout << "Bienvenido a la biblioteca de juegos ¿Quieres acceder a la informacion de un juego?\n";
    std::cin >> respuesta; 

    if (respuesta == 0) {
        std::cout << "Bueno, que tenga buen dia";
    }
    else {
        do {
            std::cout << "Ha cual videojuego quieres acceder 1,2,3\n";
            std::cin >> videojuego;
            switch (videojuego) {
            case 1:
                if (videojuego1[0] == "") {
                    std::cout << "No tenemos datos en este juego, ¿Quieres agregar unos?\n";
                    std::cin >> respuesta;
                    if (respuesta == 0) {
                        denuevo = 1;
                    }
                    else {
                        std::cout << "Dime el nombre del juego\n";
                        std::getline(std::cin, videojuego1[0]);
                        std::cout << "En que año se lanzo?\n";
                        std::getline(std::cin, videojuego1[1]);
                        std::cout << "Quien fue el director del juego?\n";
                        std::getline(std::cin, videojuego1[2]);
                        break;

                    }
                }
                else {
                    std::cout << "El juego se llama: " << videojuego1[0] << std::endl;
                    std::cout << "Fue lanzado el " << videojuego1[1] << std::endl;
                    std::cout << "Dirigido por " << videojuego1[2] << std::endl;
                }
                break;
            case 2:
                if (videojuego2[0] == "") {
                    std::cout << "No tenemos datos en este juego, ¿Quieres agregar unos?\n";
                    std::cin >> respuesta;
                    if (respuesta == 0) {
                        denuevo = 1;
                    }
                    else {
                        std::cout << "Dime el nombre del juego\n";
                        std::getline(std::cin, videojuego2[0]);
                        std::cout << "En que año se lanzo?\n";
                        std::getline(std::cin, videojuego2[1]);
                        std::cout << "Quien fue el director del juego?\n";
                        std::getline(std::cin, videojuego2[2]);
                        break;

                    }
                }
                else {
                    std::cout << "El juego se llama: " << videojuego2[0] << std::endl;
                    std::cout << "Fue lanzado el " << videojuego2[1] << std::endl;
                    std::cout << "Dirigido por " << videojuego2[2] << std::endl;
                }
            case 3:
                if (videojuego3[0] == "") {
                    std::cout << "No tenemos datos en este juego, ¿Quieres agregar unos?\n";
                    std::cin >> respuesta;
                    if (respuesta == 0) {
                        denuevo = 1;
                    }
                    else {
                        std::cout << "Dime el nombre del juego\n";
                        std::getline(std::cin, videojuego3[0]);
                        std::cout << "En que año se lanzo?\n";
                        std::getline(std::cin, videojuego3[1]);
                        std::cout << "Quien fue el director del juego?\n";
                        std::getline(std::cin, videojuego3[2]);
                        break;

                    }
                }
                else {
                    std::cout << "El juego se llama: " << videojuego3[0] << std::endl;
                    std::cout << "Fue lanzado el " << videojuego3[1] << std::endl;
                    std::cout << "Dirigido por " << videojuego3[2] << std::endl;
                }
            default:
                std::cout << "No tenemos otros juegos\n";
                break;
            }
            std::cout << "quieres acceder a otro videojuego?\n";
            std::cin >> denuevo;
        } while (denuevo != 0);
        std::cout << "Que tenga buen dia";
    }
}
