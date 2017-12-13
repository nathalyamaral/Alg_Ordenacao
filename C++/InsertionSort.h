
void insertionsort(int *v,int tam){
    int i,j,aux;
    unsigned long int troca = 0,comp = 0;

    for(i = 1; i < tam;i++){
        aux = v[i];
        j = i-1;
        troca ++;

        while(j >= 0 && v[j] > aux){
            comp ++;
            v[j+1] = v[j];
            j--;
            v[j+1]= aux;
            troca +=2;
        }
    }
    verifica(v,tam);
    gravadados(tam, troca, comp,2);//2 e a opcao do insertion
}
