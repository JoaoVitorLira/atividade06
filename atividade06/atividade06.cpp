#include <iostream>
#include <vector>

using namespace std;

int main() {

//1 – Peça para o usuário inserir dados em um vetor de 10 posições e depois, 
// mostre os elementos(um em cada linha)

//    vector<int> numeros(10); 
//
//    cout << "Digite 10 números para o vetor:\n";
//
//    for (int i = 0; i < 10; i++) {
//        cout << " Numero " + i + 1;
//        cin >> numeros[i]; 
//    }
//
//    cout << "\nOs números inseridos sao:\n";
//    for (int i = 0; i < 10; i++) {
//        cout << numeros[i] << "\n"; 
//    }
//
//    return 0;
//}

//2 – Peça para o usuário inserir dados em um vetor de 7
//posições e depois, mostre o resultado da soma dos elementos

/*int main() {
    const int tamanho = 7;
    int vetor[tamanho];
    int soma = 0;

    cout << "Insira os elementos do vetor: " << std::endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i + 1 << ":";
        cin >> vetor[i];
        soma += vetor[i];
    }

    cout << "Valor da soma dos elementos do vetor: " << soma << endl;

    return 0;
}
*/

// 3 – Uma sala tem alunos com diferentes idades, existe nessa
//	sala, três alunos com 18 anos, 2 alunos com 17 anos e 12
//		alunos com 16 anos.Qual a média das idades ?
/*
int main() {
	int alunos18 = 3;
	int alunos17 = 2;
	int alunos16 = 12;

	int idadeSoma = (18 * alunos_18) + (17 * alunos_17) + (16 * alunos_16);
	int totalALunos = alunos_18 + alunos_17 + alunos_16;

	double mediaIdades = static_cast<double>(idadeSoma) / totalALunos;


	cout << "A média das idades dos alunos é: " << mediaIdades << std::endl;
}
*/

// 4 – Um homem resolveu fazer diversos pequenos depósitos
//	no banco, ele depositou os seguintes valores : 5, 9, 7, 10, 15, 23
//		e depois colocou mais alguns valores, 20, 30. Quanto ele
//		tem ?
/*
int main() {
	int valores[] = { 5,9,7,10,15,23,20,30 };
	int total = 0;

	for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
		total += valores[i];
	}

	cout << "O Homem tem um total de " << valores << " em depósitos. " << std::endl;

	return 0;
}
*/



//5 – Peça para o usuário preencher um vetor com 10
//	posições, e depois de uma opção a ele
//	- Se ele escolha a opção 1, faça a soma de todos os
//	elementos do vetor.
//	- Se ele escolher a opção 2, faça a subtração de todos os
//	elementos do vetor
//	- Se ele escolher a opção 3, faça a multiplicação de todos os
//	elementos do vetor
/*
int main() {
	locale::global(locale("pt_BR.UTF-8"));

	int vetor[10];
	cout << "Preencha o vetor com 10 Numeros: " << std::endl;

	for (int i = 0; i < 10; i++) {
		cout << "Elemento " << i + 1 << " : ";
		cin >> vetor[i];
	}

	cout << "Escolhe uma dessas opções: " << std::endl;
	cout << "Opção 1: Soma de todos os elementos do vetor." << std::endl;
	cout << "Opção 2: Subtração de todos os elementos do vetor." << std::endl;
	cout << "Opção 3: Faça a multiplicação de todos os elementos do vetor." << std::endl;

	int opcao;
	cout << "Opção:";
	cin >> opcao;


	int resultado;
	switch (opcao)
	{
	case 1:
		resultado = 0;
		for (int i = 0; i < 10; i++) {
			resultado += vetor[i];
		}
		cout << "A soma dos elementos é: " << resultado << std::endl;
		break;

	case 2:
		resultado = vetor[0];
		for (int i = 0; i < 10; i++) {
			resultado -= vetor[i];
		}

		cout << "A subtração dos elementos é: " << resultado << std::endl;
		break;

	case 3:
		resultado = 1;
		for (int i = 0; i < 10; i++) {
			resultado *= vetor[i];
		}
		cout << "A multiplicação dos elementos é: " << resultado << std::endl;
		break;

	default:
		cout << "Opção inválida!";
		break;
	}
	return 0;
}
*/
