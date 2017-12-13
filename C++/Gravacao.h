
/*  Grava os dados como: tamanho, troca e comparações*/
void gravadados(int tam, unsigned long int troca, unsigned long int comp,int esc){
    if( esc == 1){
        ofstream arq2;
        arq2.open("Dados_Bubble.csv",ios::app);
        arq2 <<tam <<";" <<troca <<";" <<comp <<endl;
        arq2.close();
    }

    if( esc == 2){
        ofstream arq2;
        arq2.open("Dados_Insertion.csv",ios::app);
        arq2 <<tam <<";" <<troca <<";" <<comp <<endl;
        arq2.close();
    }

   if( esc == 3){
        ofstream arq2;
        arq2.open("Dados_Selection.csv",ios::app);
        arq2 <<tam <<";" <<troca <<";" <<comp <<endl;
        arq2.close();
    }

    if( esc == 4){
        ofstream arq2;
        arq2.open("Dados_Merge.csv",ios::app);
        arq2 <<tam <<";" <<troca <<";" <<comp <<endl;
        arq2.close();
    }

    if( esc == 5){
        ofstream arq2;
        arq2.open("Dados_Quick.csv",ios::app);
        arq2 <<tam <<";" <<troca <<";" <<comp <<endl;
        arq2.close();
    }
}

/*grava dados como: tamanho e tempo de ordenação*/

void gravatempo(int tam, float tempo,int esc){
    if(esc == 1){
        ofstream arq;
        arq.open("Tempo_Bubble.csv",ios::app);
        arq <<tam <<";" <<tempo <<endl;
        arq.close();
    }

    if(esc == 2){
        ofstream arq;
        arq.open("Tempo_Insertion.csv",ios::app);
        arq <<tam <<";" <<tempo <<endl;
        arq.close();
    }

    if(esc == 3){
        ofstream arq;
        arq.open("Tempo_Selection.csv",ios::app);
        arq <<tam <<";" <<tempo <<endl;
        arq.close();
    }

    if(esc == 4){
        ofstream arq;
        arq.open("Tempo_Merge.csv",ios::app);
        arq <<tam <<";" <<tempo <<endl;
        arq.close();
    }

    if(esc == 5){
        ofstream arq;
        arq.open("Tempo_Quick.csv",ios::app);
        arq <<tam <<";" <<tempo <<endl;
        arq.close();
    }
}

