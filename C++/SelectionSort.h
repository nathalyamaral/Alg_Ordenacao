/*
Trabalho de Estrutura de Dados I (ordenacao de vetores)
Academico:  Jhonathan Banczek
Professor:  Ademir Martinez Sanches
Data:   07/06/2010
*/
void selectionsort(int *v,int tam){
    int j,i,menor,aux;
    unsigned long int troca = 0,comp = 0;

    for(i = 0 ; i < (tam-1) ;i++){
        menor = i;
        //Busca o menor elementao a partir de i
        for(j = (i+1) ; j < tam ;j++){
            comp ++;
            if(v[j] < v[menor]){
                menor=j;
            }
        }
                //Coloca o menor na i-ésima posição
                aux = v[i];
                v[i] = v[menor];
                v[menor] = aux;
                troca += 3;
    }

    verifica(v,tam);
    gravadados(tam, troca, comp,3);//3 e a opcao do Selection
}
