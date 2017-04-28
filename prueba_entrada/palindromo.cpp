#include<iostream>
#include<string>

using namespace std;

bool is_palindrome(string pal){
  bool encontrado = true;
  int tam = pal.length();
  for (int i=0; i< tam / 2; i++)
  {
    if (pal[i] != pal[tam - 1 - i])
    {
      encontrado = false;
      break;
    }
  }
  return encontrado;
}



int main()
{
  string palabra;
  cin >> palabra;
  if (is_palindrome(palabra)){
    cout << "La palabra " << palabra << " es palindroma" << endl;
  }else
  {
    cout << "La palabra " << palabra << " NO es palindroma" << endl;
  }
}
