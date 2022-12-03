//=========================================================
//--------Desenvolvimento da Classe--------
class SalesScore{
    public: // Public e um especificador de acesso

    SalesScore(string title){
        setStoreTitle(title);
    } // End SalesStore

    void setStoreTitle(string title){ // Funcao-membro que configura o nome da loja
        storeTitle=title;
    }// End setStoreTitle

    void bootSystem(string storeTitle){
        cout<<"Score de vendas!\n"<<storeTitle<<endl;
    } // End bootSystem

    string getStoreTitle(){ // Funcao membro que obtem o nome da loja
        return storeTitle;
    } // End getStoreTitle


    private: // Private e um especificador de acesso onde o usuario final nao usa diretamente os dados

    string storeTitle; // Declaracao para um membro de dados

};  // End da classe SalesStore
    // Toda classe precisa terminar com o ; no final
