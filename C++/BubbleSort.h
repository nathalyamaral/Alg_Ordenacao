
/*bubble sort */
void bubblesort(int *v,int tam){
    int i, j,aux ;
    unsigned long int comp = 0,troca = 0;

    for (i = 0; i < tam; i++){
        for( j = 0; j < tam; j++){
            comp ++;
            if(v[j] > v[j +1]){
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                troca += 3;
            }
        }
    }
    verifica(v,tam);
    gravadados(tam, troca, comp,1);//1 e a opcao do bubble
}
