//========================================
//---- Class Development (Member-Function)
#include "Components.hpp"

int Components::_componentCount = 0; // Static variable [initial value = 0]

Components::Components(const char * const typeComponent, const char * const modelComponent)
{
    _typeComponent  = new char [strlen(typeComponent)+1];   strcpy(_typeComponent,  typeComponent);
    _modelComponent = new char [strlen(modelComponent)+1];  strcpy(_modelComponent, modelComponent);

    _componentCount++;

    cout<<"Criado:          "<<_typeComponent<<' '<<_modelComponent<<endl;
}
Components::~Components()
{
    cout<<"Removido:        "<<_typeComponent<<' '<<_modelComponent<<endl;
    delete [] _typeComponent;
    delete [] _modelComponent;
    _componentCount--;
}
const char *Components::getTypeComponent()  const   {   return _typeComponent;}
const char *Components::getModelComponent() const   {   return _modelComponent;}
int Components::getComponentCount()                 {   return _componentCount;}
