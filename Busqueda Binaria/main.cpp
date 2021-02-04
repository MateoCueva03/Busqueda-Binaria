#include <iostream>
#include <fstream>


using namespace std;

#define tamanio(a) (sizeof(a)/sizeof(a[0]));

void busquedaBinaria (int arr[], int t, int dato);

void algoritmoBurbuja (int arr[], int t);

void ingresarElementos(int arr[], int t);

void imprimirElementos(int arr[], int t);

int main()
{
  int dato1;
  int arreglo1[10]={1,3,5,4,6,8,7,9,2};

  int t = tamanio(arreglo1);


  algoritmoBurbuja(arreglo1, t);

  busquedaBinaria(arreglo1,t,90);



}

void busquedaBinaria (int arr[], int t, int dato)
{
  ofstream binario;
  binario.open("binario.txt",ios::app);
  int b,i,j,k;
  i=0;
  j= t - 1;

  b= dato;
  do
  {
    k=(i+j)/2;

    if(arr[k]<=b)
    {
      i=k+1;
    }
    if(arr[k]>=b)
    {
      j=k-1;
    }

  }
  while(i<=j);
  binario<<"arreglo1[10]={1,3,5,4,6,8,7,9,2};"<<endl;
  if(arr[k]>=dato){
  cout <<"Elemento buscado: "<<dato<<endl;
  cout<<"EL ELEMENTO A BUSCAR SI ESTA EN EL ARREGLO ";
  binario<<"Elemento buscado: "<<dato<<endl;
  binario<<"SI ESTA EN EL ARREGLO EN LA POSICION "<<arr[k]<<endl;
  }
  else{
    cout <<"Elemento buscado: "<<dato<<endl;
    cout<<"EL ELEMENTO A BUSCAR NO ESTA EN EL ARREGLO ";
    binario<<"Elemento buscado: "<<dato<<endl;
    binario<<"NO ESTA EN EL ARREGLO"<<endl;
  }
  binario.close();
}

void algoritmoBurbuja (int arr[], int t)
{
  int aux;

    for (int i=0 ; i<t ; i++)
    {
        for(int j=i+1 ; j<t ; j++)
        {
            if(arr[j]<arr[i])
            {
                aux=arr[i];

                arr[i]=arr[j];

                arr[j]=aux;

            }

        }
    }
}
