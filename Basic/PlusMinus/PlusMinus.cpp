#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int main()
{	
    //Tamao del array
    int n , data;
    //Variables contadoras
    float positive = 0 ,negative = 0, zero = 0;
    //Recibimos el tamao del arreglo
    cin>>n;
    //Declaramos el arreglo
    int arr[n];
    //Recorremos el arreglo y validamos, sumando uno al valor correspondiente
    for(int i=0; i< n; i++){
    	//Recibimos el dato que vamos a aadir en la posicin del array correspondiente
    	cin>>data;
    	//Asignamos el dato
    	arr[i] = data;
    	if(arr[i]>0){
    		positive++;
		}else{
			if(arr[i]<0){
				negative++;
			}else{
				zero++;
			}
		}	
	}
	
	cout<<positive/n<<endl;
	cout<<negative/n<<endl;
	cout<<zero/n<<endl;

    return 0;
}


