int main(){
    int const tamanho_array = 10;
    int array1[tamanho_array] = {5,15,44,22,99,77,65,54,63,25};
    int array2[tamanho_array] = {0};

    int *ponteiro1 = array1;
    int *ponteiro2 = array2;

    ponteiro2 = ponteiro1;

    for(int i=0; i<tamanho_array; i++)
        array2[i]=*(ponteiro2+i);
}
