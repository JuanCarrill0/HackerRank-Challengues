#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'miniMaxSum' function below.
 *
 */



int main()
{   
    //guardamos las variables necesarias
    long int arr[5], data, minusPos, maxPos, sumMax = 0, sumMin = 0;
    
    //llenamos el array y calculamos la posicion del menor dato
    for(int i=0 ; i<5; i++){
        cin>>data;
        arr[i] = data;   
        
        //Validamos en que posicion se encuentra el elemento maximo o minimo
        if(i == 0){
            minusPos = 0;
            maxPos = 0;
        }else{
            if(arr[i] < arr[minusPos]){
                minusPos = i;
            }
            
            if(arr[i] > arr[maxPos]){
                maxPos = i;
            }
        }  
    }
    
    for(int i =0 ; i<5 ; i++){
        //Hallamos la suma maxima sin sumar el elemento minimo
        if(i != minusPos){
            sumMax += arr[i]; 
        }
        //Hallamos la suma minima sin sumar el elemento maximo
        if(i != maxPos){
            sumMin += arr[i];
        }
    }
    
    cout<<sumMin<<" "<<sumMax<<endl;
}

