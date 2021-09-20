#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    vector<int> restantes, descartadas, cartas;

    while (1) {
        int cartas = 0, i = 0;
        cin >> cartas;
        
        /*Parar o programa quando o número de cartas for menor que ou igual a 0, já que não existe 
        cartas e também não existe número negativo de cartas.*/
        if (cartas <= 0){
            break;
        }
        
        //Inserir todas as cartas no vetor restantes.
        while (cartas > 0){
            restantes.insert(restantes.begin(), cartas--);
        }

        //Quando o número de cartas for maior que 1, iniciar o descarte.
        while (restantes.size() > 1) {
            //Fazendo o descarte.
            descartadas.push_back(restantes.at(i));
            //Removendo a carta anterior das restantes.
            restantes.erase(restantes.begin() + i);
            //Alterando o primeiro valor para a úlima posição e colocando o próximo como primeiro valor.
            rotate(restantes.begin() + i, restantes.begin() + i + 1, restantes.end());
        }
        
        //Imprimindo as cartas descartadas.

        cout << "Discarded cards: ";

        if (descartadas.size() > 1){
            cout<< descartadas.at(0);
        }

        while (++i < descartadas.size()){
            cout << ", " << descartadas.at(i);
        }
        
        i = 0;

        //imprimindo as cartas restantes.

        cout << endl << "Remaining card: ";

        while (i < restantes.size()){
            cout << restantes.at(i++);
        }

        cout << endl;

        //Limpando as cartas descartadas e as restantes para executar o programa novamente.
        descartadas.clear();
        restantes.clear();

    }

    return 0;
}