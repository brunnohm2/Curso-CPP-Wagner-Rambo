//
// Curso: C++, Curso Completo
// Professor: Wagner Rambo
// Aluno: Brunno Hiroshy Murai
// Modulo: 3
// Aula: 4
// Data: 2022-12-07
// IDE Code::Blocks
// Arquivo SalesScore.cpp que contem as implementacoes da funcao-membro

//==========================================================
//------------Desenvolvimento das Funcoes-membro------------
#include "SalesScore.hpp"

SalesScore::SalesScore(string title, const int salesArray[]){   // Funcao-membro construtora que obtem o nome da loja
    setStoreTitle(title);

    prodA=0;
    prodB=0;
    prodC=0;

    for(int i=0;i<products;i++) sales[i]=salesArray[i];

} // End SalesStore
void    SalesScore::setStoreTitle(string title){                // Funcao-membro que configura o nome da loja
    if(title.length()<=20) storeTitle=title;  //Se title for menor ou igual a 20 caracteres, storeTitle recebe o valor

    if(title.length()>20){
        storeTitle=title.substr(0,20);
        cout<<"O Titulo "<<title<<" excedeu a largura maxima!"<<endl;
    }
}// End setStoreTitle
string  SalesScore::getStoreTitle(){                            // Funcao membro que obtem o nome da loja
    return storeTitle;
}// End getStoreTitle
void    SalesScore::bootSystem(){                               // Funcao-membro para inicializacao que retorna [Score de vendas! e nome da loja]
    cout<<"Score de vendas! "<<getStoreTitle()<<endl;
}// End bootSystem
void    SalesScore::calcSalesAverage(){                         // Funcao-membro pra calcular o total e a media de n vendas
    int acc     =0; // Acumula valores inseridos pelo usuario
    int counter =0; // Numero de vendas inserido pelo usuario
    int value;      // Armazena o valor de cada venda
    double avg;     // Armazena a media das vendas

    cout<<"Digite o valor da venda ou -1 para sair: ";
    cin>>value;

    while(value!=-1){
        acc+=value;
        counter++;

        cout<<"Digite o valor da venda ou -1 para sair: ";
        cin>>value;

    } // End while

    if(counter!=0){
        avg=static_cast<double>(acc)/counter; // Calcula a media
        cout<<"\nTotal "<<counter<<" vendas "<<acc<<endl;
        cout<<"Media em vendas: "<<setprecision(2)<<fixed<<avg<<endl;

    } // End if
    else cout<<"Nenhum valor de venda foi inserido";
} // End calcSalesAverage
void    SalesScore::enterProducts(){                            // Funcao-membro para inserir o tipo de produto vendido
    int product;

    cout<<"Insira o produto vendido: "<<endl
        <<"Ou tecle ctrl+z (Windows) ctrl+d (Linux) para finalizar."<<endl;
    while((product=cin.get())!=EOF){
        switch(product){
            case 'a':
            case 'A':
                prodA++;
                break;

            case 'b':
            case 'B':
                prodB++;
                break;

            case 'c':
            case 'C':
                prodC++;
                break;

            case '\n': // Ignora novas linhas
            case '\t': // Ignora tabulacoes
            case ' ':  // Ignora espacos em branco
                break;

            default:
                cout<<"Produto nao cadastrado, insira um produto valido\n";

        } // End switch
    } // End while

} // End enterProducts
void    SalesScore::productsReport(){                           // Funcao-membro para imprimir o relatorio da quantidade de produtos vendido
    cout<<"\n============================"
        <<"\nProduto A:"<<setw(15)<<prodA
        <<"\nProduto B:"<<setw(15)<<prodB
        <<"\nProduto C:"<<setw(15)<<prodC
        <<endl;
} // End productsReport
void    SalesScore::processSales(){                             // Funcao-membro Processa operacoes com os dados
    // Apresenta os resultados
    dispSales();

    // Media de vendas
    cout<<"\nMedia de vendas= "<<setprecision(2)
        <<fixed<<getAvg()<<endl;

    // Valor minimo e maximo
    cout<<"Valor minimo= "<<getMin()
        <<"\nValor maximo= "<<getMax()<<endl;

    // Grafico de vendas
    genGraph();

} // End processSales()
void    SalesScore::dispSales(){                                // Funcao-membro Apresenta resultados
    cout<<"Relatorio de vendas"<<endl;

    for(int i=0;i<products;i++)
        cout<<"\nProduto "<<setw(2)<<i+1<<":"
            <<setw(3)<<sales[i];
} // End dispSales()
int     SalesScore::getMin(){                                   // Funcao-membro Localiza o valor minimo
    int min_val=1000;

    for(int i=0;i<products;i++)
        if(sales[i]<min_val) min_val=sales[i];

    return min_val;
} // End getMin()
int     SalesScore::getMax(){                                   // Funcao-membro Localiza o valor maximo
    int max_val=0;

    for(int i=0;i<products;i++)
        if(sales[i]>max_val) max_val=sales[i];

    return max_val;
} // End getMax()
double  SalesScore::getAvg(){                                   // Funcao-membro Determina a media de vendas
    int acc=0;

    for(int i=0;i<products;i++)
        acc+=sales[i];

    return static_cast<double>(acc)/products;
} // End getAvg()
void    SalesScore::genGraph(){                                 // Funcao-membro Grafico de barras para distribuicao de vendas
    cout << "\nGrafico: \n" << endl;

    //armazena a ocorrência em vendas em cada intervalo
    const int occSales = 11;
    int occ[occSales] = {0};

    //para cada venda, incrementa a respectiva ocorrência
    for(int i=0; i<products; i++)
        occ[sales[i]/100]++;
    //imprime a barra de gráficos para cada ocorrência de vendas
    for(int i=0; i<occSales; i++)  {
        if(i == 0)
            cout << "   0-99: ";
        else if(i == 10)
            cout << "   1000: ";
        else
            cout << i * 100 << "-" << (i * 100) + 99 << ": ";

        //imprime a barra
        for(int j=0; j<occ[i]; j++)
            cout << '#';

        cout << endl;
    }
} // End genGraph()
