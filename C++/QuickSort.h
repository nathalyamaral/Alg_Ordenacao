
/*Algoritmo Quick-sort */

unsigned long int troca = 0, comp = 0; //pro quick

int particiona(int *v, int inicio, int fim){
  int pivo, ultbaixo, temp, i;
  troca ++;
  pivo = v[inicio];
  ultbaixo = inicio;

  for(i=inicio+1; i<=fim; i++){
  comp ++;
  if (v[i] <= pivo)
  {
    ultbaixo++;
    troca += 3;
    temp = v[i];
    v[i] = v[ultbaixo];
    v[ultbaixo] = temp;
   }
 }

troca += 3;
temp = v[inicio];
v[inicio] = v[ultbaixo];
v[ultbaixo] = temp;
return(ultbaixo);
}

void quick(int *v, int inicio, int fim){
 int meio;
 comp ++;
 if (inicio < fim)
 {
   troca ++;
   meio = particiona(v, inicio, fim);
   quick(v, inicio, meio-1);
   quick(v, meio+1, fim);
  }
}

void algoritmo_quick(int *v,int ini,int fim){
    quick(v,ini,fim);
    verifica(v,fim);
    gravadados(fim, troca, comp,5);//5 e a opcao do quick
}
