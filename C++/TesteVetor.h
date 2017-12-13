
void verifica(int *v,int tam){
    int i,teste;
    for(i = tam ;i > 0; i--){
        //cout<<i<<endl;
        if(v[i] >= v[i-1])
            teste = 1;
        else
            teste = 0;
    }
    if(teste == 0){
        cout<<"erro"<<endl;
        exit(1);
    }
}
