//========================================
//---- Class Function Development

#ifdef MEMORIA

//----  Funcao Construtora
template <typename myType, unsigned short N>
Memoria <myType,N>::Memoria()
{
  for(unsigned short i=0; i<N; i++)   memoArray[i] = 0; //inicializa todo o vetor com 0
}

//---- Funcao GravaDados
template <typename myType, unsigned short N>
void Memoria <myType,N>::gravaDados()
{
  for(unsigned short i=0; i<N; i++)
  {
    cout  << "Insira o novo dado " << i+1 << '/' << N << ": ";
    cin   >> memoArray[i];
  }//end for
}//end gravaDados

//---- Funcao ImprimeDados
template <typename myType, unsigned short N>
void Memoria <myType,N>::imprimeDados   ()
{
  for(unsigned short i=0; i<N; i++) cout<<memoArray[i]<<' ';

  cout<<endl;
}//end imprimeDados

#endif
