
/*Algoritmo Merge-sort */
unsigned long int trocas = 0, comps = 0;

void merge(int *v, int tam){
    int mid;
    int i, j, k;
    int* tmp;

    tmp = (int*) malloc(tam * sizeof(int));

    if (tmp == NULL){
        cout<<"legal";
        exit(1);
    }

    mid = tam / 2;
    i = 0;
    j = mid;
    k = 0;

    while (i < mid && j < tam){
        comps ++;

        if (v[i] < v[j]){
            trocas ++;
            tmp[k] = v[i];
            ++i;
        }

        else{
            trocas ++;
            tmp[k] = v[j];
            ++j;
        }
        ++k;
    }

    comps ++;

    if (i == mid){
        while (j < tam)
        {
            trocas ++;
            tmp[k] = v[j];
            ++j;
            ++k;
        }
    }

    else{
        while (i < mid){
            trocas ++;
            tmp[k] = v[i];
            ++i;
            ++k;
        }
    }

    for (i = 0; i < tam; ++i){
        v[i] = tmp[i];
    }

    free(tmp);
}

void mergeSort(int *v, int tam){

  int mid;

  comps ++;
  if (tam > 1) {
    mid = tam / 2;
    mergeSort(v, mid);
    mergeSort(v + mid, tam - mid);
    merge(v, tam);
  }
}

void algoritmo_merge(int *v,int tam){
    mergeSort(v,tam);
    verifica(v,tam);
    gravadados(tam, trocas, comps,4);//4 e a opcao do Merge
}
