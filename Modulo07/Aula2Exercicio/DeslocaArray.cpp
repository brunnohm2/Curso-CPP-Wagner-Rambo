//========================================
//---- Class Development (Member-Function)

#ifdef DESLOCAARRAY

//---- Construtor
template <typename myType, unsigned short varSize>
DeslocaArray    <myType,varSize>   ::   DeslocaArray()  :
_varSize (varSize)
{
  for(unsigned short i = 0; i<varSize; i++) _myArray[i] = 0;
}//end construtor

//---- shiftArray
template <typename myType, unsigned short varSize>
void DeslocaArray<myType, varSize>::shiftArray(myType *newArray)
{
  myType temp0 = 0;
  for(unsigned short i = 0; i < _varSize; i++)
  {
    if      (i == 0)            {temp0 = newArray[i]; _myArray[i] = newArray[i+1];}
    else if (i <  _varSize-1)   _myArray[i] = newArray[i+1];
    else if (i == _varSize-1)   _myArray[_varSize-1] = temp0;
  }//end for
}

//---- printArray
template <typename myType, unsigned short varSize>
void DeslocaArray<myType, varSize>::printArray() const
{
  cout<<"==============="<<endl;
  for(unsigned short i=0; i < _varSize; i++) cout<<"myArray["<<i<<"] = "<<_myArray[i]<<endl;
}

#endif
