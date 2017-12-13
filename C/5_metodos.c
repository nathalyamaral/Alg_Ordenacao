#include <stdio.h>
#include <stdlib.h>
 
void merge(int vetor[], int tamanho){ //passa vetor e tamanho nos parametros para a funcao

	int meio = tamanho / 2; //divide o tamanho do vetor por duas partes
	int i = 0, j = meio, k = 0;
	
	int aux[tamanho]; //declara um vetor aux
		
		while( i < meio && j < tamanho ){ //enquanto contador forem menores que o meio e o tamanho faca comparacao
    		
			if( vetor[i] <= vetor[j] ){ //comparando posicao i com posicao j que é igual ao meio do vetor
      		aux[k] = vetor[i++]; // se for entao aux recebe a posicao, incrimento para prox pos nao ser a mesma e ir indo ao prox
      		
    		}else{
      		aux[k] = vetor[j++]; // se nao a aux vai receber a posicao j que e meio do vetor
			}
			
	    	k++; //incrimento
  		}
 
	if( i == meio ){ //se indicador for igual ao meio 
    	while( j < tamanho ){ //percorre o j que e meio comparando com taamnho
      		aux[k++] = vetor[j++]; // se for troca aux recebe apartir do meio e incremento
  		}
  		
  	}else{
    	while( i < meio ){//se nao testa posicao i com o meio
      		aux[k++] = vetor[i++]; //se for troca aux recebe vetor os dois sendo incrementados
 		}
	 }
	 
	for( i = 0; i < tamanho; i++ ){ //vetor recebe o valores do vetor aux que foi trocados
    	vetor[i] = aux[i];
	}
}

int mergeSort(int vetor[], int tamanho){
	
	int i, j;
	
	for(i = 0; i < tamanho; i++){
		printf("[%d]", vetor[i]);
	}
		printf("\n");
		
	int meio = tamanho / 2; //meio recebe o tamanho do vetor divido
	
	if( tamanho > 1 ){ //enquanto tamanho for maior que 1, tipo nao chega ao final entao
	
		mergeSort(vetor, meio); //faz funcao que divide
		for(i = 0; i < tamanho; i++){
			printf("[%d]", vetor[i]);
		}
		printf("\n");
		
		mergeSort(vetor + meio, tamanho - meio); //parametro que intercala

		merge(vetor, tamanho);//funcao que chama funcao novamente
			for(i = 0; i < tamanho; i++){
			printf("[%d]", vetor[i]);
		}
		printf("\n");
	}
}

void quicksort(int vetor[], int tamanho){//funcao recebe vetor e tamanho nos parametros
	
	int i = 1, j = (tamanho - 1), aux, aux2 = vetor[0];

	if (tamanho <= 1){ //se tamanho for menor que 1 retorna funcao, parar preencher novamente vetor com taamnho maior que 1
		return;
	}

	while(1){ //while para fazer a troca ate que i seja maior que j
		while ((i < tamanho) && (vetor[i] <= aux2)){
			i++;
		}

		while (vetor[j] > aux2){ //se vetor posicao j for maior que aux2 vai liberando posicao
			j--;
		}

		if (i < j) { //se i for menor que j faz troca e libera posicao de j
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}

		if (i >= j) { //quando i fica maior que j para loop do while e chama funcao novamente no final
			break;
		}
	}

	vetor[0] = vetor[j]; 
	vetor[j] = aux2;
	
	quicksort(vetor, j);
	quicksort(&vetor[i], (tamanho - i));

}


int main(int argc, char *argv[]){

	int pos = 0, j = 0, i = 0, posatual = 0, aux = 0, chave = 0, opcao = -1;
 	
	int vetorcopia[pos], vetororig[pos], copia2[pos];
    printf("\nQuantos numeros tera o vetor? ");
    scanf("%d", &pos);

  	//preenchendo os dados do vetor
	for(j = 0; j < pos; j++){
		
		printf("\nDigite o numero %d: ", j+1);
		scanf("%d", &vetorcopia[j]);
		vetororig[j] = vetorcopia[j];
		copia2[j] = vetorcopia[j];
  	}
 	
 
do{
	
				  
 	system ("cls");
 	
   	printf(" ############## ORDENACAO ############## \n");
	printf(".........................................\n");
	printf("[1] - Select.............................\n");
	printf(".........................................\n");
	printf("[2] - Insert.............................\n");
	printf(".........................................\n");
	printf("[3] - Bubble.............................\n");
	printf(".........................................\n");
	printf("[4] - Merge..............................\n");
	printf(".........................................\n");
	printf("[5] - Quick..............................\n");
	printf(".........................................\n");
	printf("[0] - Sair...............................\n");	
	printf(".........................................\n");
	printf("\n");
    scanf("%d",&opcao);
 
 	system("cls");
 	 
 
 	switch(opcao){
		
		
		case 1:
			
			for(j = 0; j <= pos-1; j++){
			      	vetorcopia[j] = copia2[j];
			}
			      
			for(i = 0; i <= pos-1; i++){
			      
				  for(j = 0; j <= pos-1; j++){
			        printf("[%d]", vetorcopia[j]);
			      }
			 
			      chave = i; //chave recebe o menor valor
			      
			      for(posatual = i+1; posatual<= pos-1; posatual++){ //for percorrer vetor e testar cada posicao
			        
					if(vetorcopia[posatual] < vetorcopia[chave]){ //testa se a posicao atual e menor que a chave 
			          chave = posatual; //entao cahve recebe essa posicao que for numero menor, assima cahve continua sendo um num menor
			      	}
				  }
				  
			      aux = vetorcopia[chave]; //variavel aux recebe a chave menor numero
			      vetorcopia[chave] = vetorcopia[i]; //chave pode receber o inidicador da pos atual 
			      vetorcopia[i] = aux; //o i recebe a aux que contem o valor da chave realizandoa  aux 
			      printf("\n[%d] trocou com [%d]\n", vetorcopia[chave], vetorcopia[i]);
			      printf("\n");
			    }
			      //Resultado - Vetor Original
				  printf("\nComo era: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", copia2[j]);//imprime o vetor original de como era
				  }
				 
				  //Resultado - Vetor Ordenado
				  printf("\nOrdenado: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", vetorcopia[j]);//imprime a copia que foi ordenada
				  }
	
		break;
		
  		case 2:
			    //inserção
			     for(j = 0; j <= pos-1; j++){
			      	vetorcopia[j] = copia2[j]; //retorna valores original do vetor para o vetor de teste o vetorcopia
			      }
			      
			    for ( i = 1; i <= pos-1; i++){
			    	
			      for(j = 0; j <= pos-1; j++){
			        printf("[%d]", vetorcopia[j]);
			      }
			      
			      chave = vetorcopia[i];
			      posatual = i-1;
			 
			      while( posatual >=0 && vetorcopia[posatual] > chave){
			      	
			        vetorcopia[posatual+1] = vetorcopia[posatual];
			        posatual -= 1;
			        vetorcopia[posatual+1] = chave;
			        
			      }
			      printf("\n");
			    }
			    
			    //Resultado - Vetor Original
				  printf("\nComo era: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", copia2[j]);//imprime o vetor original de como era
				  }
				 
				  //Resultado - Vetor Ordenado
				  printf("\nOrdenado: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", vetorcopia[j]);//imprime a copia que foi ordenada
				  }
			     
		break;
 
  		case 3:
			  
			  	for(j = 0; j <= pos-1; j++){
			    	vetorcopia[j] = copia2[j]; //retorna valores original do vetor para o vetor de teste o vetorcopia
			    }
			      
			    aux = pos - 1 ;
			    for(i = 0; i <= pos-1; i++){
			    	
			      for(j = 0; j<= pos-1; j++){
					printf("[%d]", vetorcopia[j]);
			      }
			 
			      for(posatual = 0; posatual < aux; posatual++){
			      	
			        if(vetorcopia[posatual] > vetorcopia[posatual+1]){
			        	
			          j = vetorcopia[posatual];
			          vetorcopia[posatual] = vetorcopia[posatual+1];
			          vetorcopia[posatual+1] = j;
			          printf("\n[%d] trocou com [%d]\n", vetorcopia[posatual], j);
			        }
			      }
			      aux--;
			      printf("\n");
			    }
			    
				 //Resultado - Vetor Original
				  printf("\nComo era: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", copia2[j]);//imprime o vetor original de como era
				  }
				 
				  //Resultado - Vetor Ordenado
				  printf("\nOrdenado: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", vetorcopia[j]);//imprime a copia que foi ordenada
				  }
		break;
		
		case 4:
			
			
			for(j = 0; j <= pos-1; j++){
			    vetorcopia[j] = copia2[j]; //retorna valores original do vetor para o vetor de teste o vetorcopia
			}
			
			mergeSort(vetorcopia, pos);
			
			
				  printf("\nComo era: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", copia2[j]);//imprime o vetor original de como era
				  }
				 
				  //Resultado - Vetor Ordenado
				  printf("\nOrdenado: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", vetorcopia[j]);//imprime a copia que foi ordenada
				  }
		break;
			
		case 5: 
		
			quicksort(vetorcopia, pos);
			//Resultado - Vetor Original
				  printf("\nComo era: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", copia2[j]);//imprime o vetor original de como era
				  }
				 
				  //Resultado - Vetor Ordenado
				  printf("\nOrdenado: ");
				  for(j = 0; j <= pos-1; j++){
				  	
				    printf("[%d]", vetorcopia[j]);//imprime a copia que foi ordenada
				  }
		break;
		
 	};
	
	  getchar();
	  printf("\n\nPressione qualquer tecla para continuar!\n\n");
	  getchar();
	  system("cls");
	  
}while(opcao != 0);

	return 0;
}
