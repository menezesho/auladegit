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
		cout << "Qual o nome da " << i << "� pessoa? ";
		cin >> nome;
		cout << "Qual sal�rio atual dela? ";
		cin >> sa;
		cout << "1 - Escritu�rio" << endl;
		cout << "2 - Secret�rio" << endl;
		cout << "3 - Caixa" << endl;
		cout << "4 - Gerente" << endl;
		cout << "5 - Diretor" << endl;
		cout << "6 - S�cio" << endl;
		cout << "Qual o seu cargo atual? ";
		cin >> codigo;
		while (codigo>6)
		{
			cout << "Op��o inexistente! Digite uma op��o v�lida: ";
			cin >> codigo;
		}
		switch (codigo)
		{
			case 1:
			cargo = "Escritu�rio";
			aumento = sa * 50/100;
			novo = aumento + sa;
			break;
			case 2:
			cargo = "Secret�rio";
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
			cargo = "S�cio";
			aumento = sa * 5/100;
			novo = aumento + sa;
			break;		
		}
		cout << nome << ", o seu aumento, no cargo de " << cargo << ", � de R$" << aumento << ", portanto seu novo sal�rio � de R$" << novo << endl;
	} 	
}