#include <iostream>
using std::cout;
using std::endl;

int main()
{
  int myArray[4] = {11, 12, 13, 14};
  int *ptr = myArray;

// --------------------------------------------------------------------------------------
  cout << "\n\nArray Conteudo atraves do indice: " << endl;

  for(int i=0; i<4; i++)
    cout << "myArray[" << i << "] = " << myArray[i] << endl;

// --------------------------------------------------------------------------------------
  cout << "\n\nArray Conteudo atraves do nome do array + ponteiro deslocamento: " << endl;

  for(int offset1=0; offset1<4; offset1++)
    cout << "*(myArray + " << offset1 << ") = " << *(myArray+offset1) << endl;

// --------------------------------------------------------------------------------------
  cout << "\n\nArray Conteudo atraves do indice com ponteiro: " << endl;

  for(int j=0; j<4; j++)
    cout << "ptr[" << j << "] = " << ptr[j] << endl;

// --------------------------------------------------------------------------------------
  cout << "\n\nArray Conteudo atraves do ponteiro e deslocamento: " << endl;

  for(int offset2=0; offset2<4; offset2++)
    cout << "*(ptr + " << offset2 << ") = " << *(ptr+offset2) << endl;

// --------------------------------------------------------------------------------------


  cout << "\n\nPrograma encerrado.";
  while(1);
  return 0;

} //end main
