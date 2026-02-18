#include <iostream>
#include <chrono>
#include <thread>

void wait(int seconds) {
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
using namespace std;

int main() {
    int choice;
    
    cout << "Bienvenido al sistema conversor de temperaturas!" << endl;
    

    while(true) {
        cout << "\nElige la conversion: " << endl;
        cout << "1: Celsius a Fahrenheit" << endl;
        cout << "2: Fahrenheit a Celsius" << endl;
        cout << "3: Celsius a Kelvin" << endl;
        cout << "4: Kelvin a Celsius" << endl;
        cout << "5: Fahrenheit a Kelvin" << endl;
        cout << "6: Kelvin a Fahrenheit" << endl;
        cout << "0: Salir" << endl;

        cin >> choice;
        double c = 0;
        double f = 0;
        double k = 0;
        

        if(choice == 0) {
            cout << "Gracias por usar el conversor 😎" << endl;
            wait(2);
            std::cout << "c++ > rust";
            break;
        }

        if(choice == 1) {
            
            std::cout << "Elige un numero Celsius (C°)" << endl;
            std::cin >> c;
            double cf = (c * 1.8) + 32;
            std::cout << "Tu numero en F° Es... " << cf << std::endl;
            wait(2);
        }

        if(choice == 2) {
            std::cout << "Elige un numero Fahrenheit (F°)" << endl;
            std::cin >> f;
            double fc = (f - 32) / 1.8;
            std::cout << "Tu numero en C° Es... " << fc << std::endl;
            wait(2);
            
        }

        if(choice == 3) {
                        std::cout << "Elige un numero Celsius (C°)" << endl;
            std::cin >> c;
            double ck = c + 273.15;
            std::cout << "Tu numero en K Es... " << ck << std::endl;
            wait(2);
        }

        if(choice == 4) {
                        std::cout << "Elige un numero Kelvin(K)" << endl;
            std::cin >> k;
            double kc = k - 273.15;
            std::cout << "Tu numero en C° Es... " << kc << std::endl;
            wait(2);
        }

        if(choice == 5) {
                        std::cout << "Elige un numero Fahrenheit (F°)" << endl;
            std::cin >> f;
            double ftoctok = (f - 32) / 1.8 + 273.15 ;
            std::cout << "Tu numero en K Es... " << ftoctok << std::endl;
            wait(2);
        }

        if(choice == 6) {
                                  std::cout << "Elige un numero Kelvin (K)" << endl;
            std::cin >> k;
            double ktoctof = (k - 273.15) * 1.8 + 32;
            std::cout << "Tu numero en F° Es... " << ktoctof << std::endl;
            wait(2);
        
        }

        if(choice < 0 || choice > 6) {
            cout << "Opcion invalida!" << endl;
        }
    }
}