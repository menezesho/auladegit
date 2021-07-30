#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "portuguese");
	int codigo;
	float sa, aumento, novo;
	string cargo, nome;
	cout << "Seja muito bem vinda(o)!" << endl;
	for (int i=1; i<=3; i=i+1)
	{
		cout << "Qual o nome da " << i << "ª pessoa? ";
		cin >> nome;
		cout << "Qual salário atual dela? ";
		cin >> sa;
		cout << "1 - Escrituário" << endl;
		cout << "2 - Secretário" << endl;
		cout << "3 - Caixa" << endl;
		cout << "4 - Gerente" << endl;
		cout << "5 - Diretor" << endl;
		cout << "6 - Sócio" << endl;
		cout << "Qual o seu cargo atual? ";
		cin >> codigo;
		while (codigo>6)
		{
			cout << "Opção inexistente! Digite uma opção válida: ";
			cin >> codigo;
		}
		switch (codigo)
		{
			case 1:
			cargo = "Escrituário";
			aumento = sa * 50/100;
			novo = aumento + sa;
			break;
			case 2:
			cargo = "Secretário";
			aumento = sa * 35/100;
			novo = aumento + sa;
			break;
			case 3:
			cargo = "Caixa";
			aumento = sa * 20/100;
			novo = aumento + sa;
			break;
			case 4:
			cargo = "Gerente";
			aumento = sa * 10/100;
			novo = aumento + sa;
			break;
			case 5:
			cargo = "Diretor";
			aumento = 0;
			novo = aumento + sa;
			break;
			case 6:
			cargo = "Sócio";
			aumento = sa * 5/100;
			novo = aumento + sa;
			break;		
		}
		cout << nome << ", o seu aumento, no cargo de " << cargo << ", é de R$" << aumento << ", portanto seu novo salário é de R$" << novo << endl;
	} 	
}