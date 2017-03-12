#include <iostream>
#include <iomanip>

int main()
{
	int distancia;
	int tempo;
	std::cin >> distancia;

	tempo = (distancia*60)/(30);
	std::cout << tempo <<" minutos" << std::endl;
	return 0;
}
