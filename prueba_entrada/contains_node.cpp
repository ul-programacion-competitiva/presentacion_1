#include<stdio.h>

struct Node {
  int valor;
  Node* node_izq;
  Node* node_der;
};

bool contains(Node* arbol, int valor_verificar)
{
  if (valor_verificar < arbol->valor)
  {
    if (arbol->node_izq == NULL)
    {
      return false;
    }else
      return contains(arbol->node_izq, valor_verificar);
  }else if (valor_verificar > arbol->valor)
  {
    if (arbol->node_der == NULL)
    {
      return false;
    }else
      return contains(arbol->node_der, valor_verificar);
  }else
  {
    return true;
  }
}

int main()
{
  struct Node nodo1;
  struct Node nodo1_1;
  struct Node nodo1_2;

  nodo1_1.valor = 1;
  nodo1_1.node_izq = NULL;
  nodo1_1.node_der = NULL;

  nodo1_2.valor = 3;
  nodo1_2.node_izq = NULL;
  nodo1_2.node_der = NULL;

  nodo1.valor = 2;
  nodo1.node_izq = &nodo1_1;
  nodo1.node_der = &nodo1_2;

  int valor;
  puts("Ingrese valor a buscar:");
  scanf("%i", &valor);

  printf("Contiene?: %i\n", contains(&nodo1,valor));

}
