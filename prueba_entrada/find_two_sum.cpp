#include<stdio.h>

int*  find_two_sum(int* p, int suma, int tam)
{
  static int arr[2];
  for (int i=0; i<tam; i++)
  {
    for (int j=0; j<tam; j++)
    {
      if ( (i != j ) && ((p[i] + p[j]) == suma))
      {
        arr[0] = i;
        arr[1] = j;
        break;
      }
    }
  }
  return arr;

}

void print_arr(int* p, int tam)
{
  int cont = 0;
  for (int i=0 ; i<tam; i++)
  {
    printf("%i (%i) ", p[i], cont++);
  }
}

int main()
{
  int tam, suma;
  puts("Ingrese cantidad de numeros y suma objetivo:");
  scanf("%i %i", &tam, &suma);
  int numeros[(tam)];
  printf("Ingrese %i numeros:\n", tam);
  for (int i=0; i<tam; i++)
  {
    scanf("%i", &numeros[i] );
  }

  //print_arr(numeros, tam);
  int* arr_resp = find_two_sum(numeros, suma, tam);
  printf("%i , %i\n", arr_resp[0], arr_resp[1]);
  return 0;
}
