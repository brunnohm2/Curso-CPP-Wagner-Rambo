#include <iostream>
using std::cout;
using std::endl;
using std::cin;

//========================================
//----  Function Prototype
template  <typename newType>
void descriptografia (newType *myArray, int arraySize);

//========================================



//========================================
//----  Main Function
int main()
{
  int     arraySize = 5;
  char    tipo;

  int     typeInt[arraySize];
  double  typeDouble[arraySize];
  char    typeChar[arraySize];

  cout<<"Entre com o tipo do array:"<<"\n"
      <<"- (i)nt"   <<"\n"
      <<"- (d)ouble"<<"\n"
      <<"- (c)har"  <<"\n"
      <<">>>";
  cin>>tipo;

  if(tipo=='i')
  {
    for(int i=0; i<arraySize; i++)
    {
      cout<<"Entre com o Inteiro array["<<i<<"]: ";
      cin>>typeInt[i];
    }
    descriptografia(typeInt, arraySize);
  }

  if(tipo=='d')
  {
    for(int i=0; i<arraySize; i++)
    {
      cout<<"Entre com o Double array["<<i<<"]: ";
      cin>>typeDouble[i];
    }
    descriptografia(typeDouble, arraySize);
  }

  if(tipo=='c')
  {
    for(int i=0; i<arraySize; i++)
    {
      cout<<"Entre com o Char array["<<i<<"]: ";
      cin>>typeChar[i];
    }
    descriptografia(typeChar, arraySize);
  }



  return 0;
}//end Main Function
//========================================



//========================================
//----  Function Development

//----  Descriptografia Function
template  <typename newType>
void descriptografia(newType *myArray, int arraySize)
{
  for(int i=0; i<arraySize; i++)
  {
    if(i%2) myArray[i] = myArray[i]-5;
    else    myArray[i] = myArray[i]-3;
  }

  for(int i=0; i<arraySize; i++) cout<<myArray[i]<<' ';
  cout<<endl;
}
//========================================















