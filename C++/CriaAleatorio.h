
int * CriaVetor( int tamanho){
    int i, *v;

    //aloca memoria dinamicamente para o vetor
    v = new int[tamanho];

    //testa a alocacao de memoria
    if (v == NULL) {
        cout<<"Este computador nao tem memoria suficiente...Programa abortado!";
        exit( EXIT_FAILURE ); //finaliza com falha
    };
    /*
    cout<<"Valor de RAND_MAX: "<<RAND_MAX<<endl;
    cout<<"Valor de time(): "<<time(NULL)<<endl;
    */

    /* inicializar o gerador de n�meros aleat�rios */
    /* com time(NULL) */
    srand( time(NULL) );
    for (i=0; i<tamanho; i++){
        /* para gerar n�meros aleat�rios de 0 a RAND_MAX */
        v[i] = rand();
    }
    return v;

}
