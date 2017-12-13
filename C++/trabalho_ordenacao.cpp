
/*  Bibliotecas
*
*  "Gravacao.h"
*   função : void gravadados(int tam,unsigned int troca,unsigned int comp,int esc)
*   grava os dados de media de tempo,comparações troca e tempo
*   funcao void gravatempo(int tam, float tempo,int esc)
*   grava o tempo e o tamanho
*
*   "TesteVetor.h"
*   testa se o vetor está ordenado
*   função verifica(int *v,int tam)
*
*   "CriaAleatorio.h"
*   cria o vetor e preenche com numeros pseudos-aleatorios
*  função CriaVetor( tam ); inteiro
*
*   "BubbleSort.h"
*   algoritmo de ordenação bubble sort.
*   função void bubblesort(int *v,int tam)
*
*   "InsertionSort.h"
*   algoritmo de ordenação InsertionSort
*   função void insertionsort(int *v,int tam)
*
*   "SelectionSort.h"
*   algoritmo de ordenação Selection Sort
*   função void selectionsort(int *v,int tam)
*
*   "MergeSort.h"
*   algortimo de ordenação  Mege Sort
*   Função: algoritmo_merge(int *vet,int tam);
*
*   "QuickSort.h"
*   algortimo de orndeação quick sort -
*   função: algoritmo_quick(int *v,int inicio,int fim);
*
*   "Menus.h"
*   menus de escolha, meu_tamanho(); e menu_ordenacao();
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <fstream> //para a gravacao

using namespace std;

#include "Menus.h"
#include "Gravacao.h"
#include "TesteVetor.h"
#include "CriaAleatorio.h"
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "MergeSort.h"
#include "QuickSort.h"

int main(){
	
    int *vet = NULL, tam, esc,tamanho,i;

    float inicio = 0,fim = 0,tempof = 0;//recebe o valor do tempo

    menu_tamanho();//chama o meu de escolha do tamanho
    cin>>tamanho;

    //case do tamanho
    switch(tamanho){
        case 1: tam = 150000; cout<<"\nVetor selecionado!" <<endl; break;
        case 2: tam = 200000; cout<<"\nVetor selecionado!" <<endl; break;
        case 3: tam = 250000; cout<<"\nVetor selecionado!" <<endl; break;
        case 4: tam = 300000; cout<<"\nVetor selecionado!" <<endl; break;
        case 5: tam = 350000; cout<<"\nVetor selecionado!" <<endl; break;
        case 6: tam = 400000; cout<<"\nVetor selecionado!" <<endl; break;
        case 0: cout<<"\n Programa Finalizado!"<<endl; exit(1); break;
        default: cout<<"\nOpcao invalida"<<endl; exit(1);break;
    }

        menu_ordenacao();//chama menu de escolha algoritmo

        //valida a opcao
	    do{

	    cin>>esc;
	    if(esc <= 0 || esc > 5)
	    cout<<"\t\tSelecione um numero valido!\n: ";

	    }while(esc <= 0 || esc > 5);

        //msg pro usuario

	    cout<<"Ordenando o vetor...\neste processo pode demorar varios minutos...\n"<<endl;

	    switch(esc){
	        case 1:// Bubble sort

	        for(i = 0; i < 10 ;i++){
				vet = CriaVetor( tam ); //cria o vetor com o valores aleatorios
	            cout<<i+1<<" de 10"<<endl;

                //inicia a contagem do tempo
                inicio = (double)clock()/CLOCKS_PER_SEC;
                bubblesort(vet,tam); //chama o algoritmo
                fim = (double)clock()/CLOCKS_PER_SEC;

                tempof = fim - inicio; //  calcula o tempo de execução

                gravatempo(tam,tempof,1); //1 é o bubble
				delete [] vet; //deleta o vetor criado dinamicamente

            }
            cout<<"\a\a\a\a\a"<<endl;//bip de aviso do termino da ordenação
            break;

	        case 2: //Insertion Sort

	        for(i = 0; i < 10 ;i++){
				vet = CriaVetor( tam ); //cria o vetor com o valores aleatorios
	            cout<<i+1<<" de 10"<<endl;

                inicio = (double)clock()/CLOCKS_PER_SEC;
                insertionsort(vet,tam);
                fim = (double)clock()/CLOCKS_PER_SEC;

                tempof = fim - inicio;

                gravatempo(tam,tempof,2);
				delete [] vet;
	        }
            cout<<"\a\a\a\a\a"<<endl;

            break;

	        case 3: //Selection Sort

	        for(i = 0; i < 10 ;i++){
				vet = CriaVetor( tam ); //cria o vetor com o valores aleatorios

	            cout<<i+1<<" de 10"<<endl;

                inicio = (double)clock()/CLOCKS_PER_SEC;
                selectionsort(vet,tam);
                fim = (double)clock()/CLOCKS_PER_SEC;

                tempof = fim - inicio;

                gravatempo(tam,tempof,3);
				delete [] vet;
	        }
	        cout<<"\a\a\a\a\a"<<endl;
	        break;

	        case 4: //Merge Sort

	        for(i = 0; i < 10 ;i++){

				vet = CriaVetor( tam ); //cria o vetor com o valores aleatorios

	            cout<<i+1<<" de 10"<<endl;

                inicio = (double)clock()/CLOCKS_PER_SEC;
                algoritmo_merge(vet,tam);
                fim = (double)clock()/CLOCKS_PER_SEC;
                tempof = fim - inicio;

                gravatempo(tam,tempof,4);
				delete [] vet;
	        }
	        cout<<"\a\a\a\a\a"<<endl;
	        break;

	        case 5: //Quick Sort

	        for(i = 0; i < 10 ;i++){
				vet = CriaVetor( tam ); //cria o vetor com o valores aleatorios

	            cout<<i+1<<" de 10"<<endl;

                inicio = (double)clock()/CLOCKS_PER_SEC;

                algoritmo_quick(vet,0,tam);

                fim = (double)clock()/CLOCKS_PER_SEC;

                tempof = (fim - inicio);
                gravatempo(tam,tempof,5);
				delete [] vet;
	        }
	        cout<<"\a\a\a\a\a"<<endl;
            break;

            default:
            cout<<"Opcao invalida!\n"<<endl;
            break;
	    }//fim do swtich

		delete [] vet;

    return 0;
}
