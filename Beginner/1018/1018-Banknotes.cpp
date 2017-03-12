#include <iostream>
#include <iomanip>

int main()
{
	int n,aux;
	int nota_1,nota_2,nota_5,nota_10,nota_20,nota_50,nota_100;
	nota_1 = nota_2 = nota_5 = nota_10 = nota_20 =  nota_50 = nota_100 = 0;
	std::cin >> n;
	aux = n;
	if(n>=100)
	{
		while(n >=100)
		{
			nota_100+=1;
			n = n-100;
		}
	}
	if(n>=50)
	{
		while(n>=50)
		{
			nota_50+=1;
			n = n-50;
		}
	}
	if(n>=20)
	{
		while(n>=20)
		{
			nota_20 +=1;
			n = n-20;
		}
	}
	if(n>=10)
	{
		while(n>=10)
		{
			nota_10 +=1;
			n = n-10;
		}
	}
	if(n>=5)
	{
		while(n>=5)
		{
			nota_5 +=1;
			n = n-5;
		}
	}
	if(n>=2)
	{
		while(n>=2)
		{
			nota_2 +=1;
			n = n-2;
		}
	}
	if(n>=1)
	{
		while(n>=1)
		{
			nota_1+=1;
			n = n-1;
		}
	}

	std::cout << aux << std::endl
						<< nota_100 << " nota(s) de R$ 100,00" << std::endl
						<< nota_50 << " nota(s) de R$ 50,00" << std::endl
						<< nota_20 << " nota(s) de R$ 20,00" << std::endl
						<< nota_10 << " nota(s) de R$ 10,00" << std::endl
						<< nota_5 << " nota(s) de R$ 5,00" << std::endl
						<< nota_2 << " nota(s) de R$ 2,00" << std::endl
						<< nota_1 << " nota(s) de R$ 1,00" << std::endl;
	return 0;
}
