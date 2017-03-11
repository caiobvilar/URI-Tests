#include <iostream>
#include <iomanip>
#include <cfenv>



int main()
{
	int prod_code,prod_quant;
	float prod_price,total;
	std::cin >> prod_code >> prod_quant >> prod_price;
	total = prod_quant*prod_price;
	std::cin >> prod_code >> prod_quant >> prod_price;
	total += prod_quant*prod_price;
	std::cout << "VALOR A PAGAR: R$ " << std::setprecision(2) << std::fixed << total << std::endl;
	return 0;
}
