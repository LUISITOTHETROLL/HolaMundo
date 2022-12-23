
#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribirPalabra(string palabra){
     
     
    string filename("base_de_datos.txt");
    fstream file;

    

    file.open(filename, std::ios_base::app);
    if (file.is_open()){
        file.write("\n",1);
        file.write(palabra.data(), palabra.size());
        
        
        //file.write("\n",1);
        }
    cout << "¡ Su saludo se ha añadido a la base de datos con éxito !" << endl;
    //system("pause");
    //return EXIT_SUCCESS;
}

int main(){
    bool repite=true;
    bool existe = true;
    bool anyadir = false;
    char idioma = 'n';
    string deseo = "";
    string repetir = "";
    string palabra = "";
    while(repite){

        cout<<"Salude en el idioma que desee:"<<endl;
        cout<<"1: Español"<<endl;
        cin>>deseo;
        if(deseo=="1"){
            idioma='e';
            existe=true;
        }
        else{
            cout<<"opción incorrecta"<<endl;
            existe=false;
        }
    if(existe==true){

    if(idioma=='e'){
        
        palabra="Hola Mundo";
        cout<<palabra<<endl;
    }
    
    cout<<endl;
    
    
    
        escribirPalabra(palabra);
        }
    
    cout<<"¿Desea volver a saludar? (S/N)"<<endl;
    cin>> repetir ;
    if(repetir!="S"&&repetir!="s"){
        break;
    }

    }
    

    //system("pause");
    return 0;
} 
