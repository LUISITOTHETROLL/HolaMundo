
//g++ -o hola holamundo.cpp

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
        cout<<"2: Francés"<<endl;
        cout<<"3: Alemán"<<endl;
        cout<<"4: Inglés"<<endl;
        cout<<"5: Ruso"<<endl;
        cout<<"6: Sueco"<<endl;
        cin>>deseo;
        if(deseo=="1"){
            idioma='e';
            existe=true;
        }
        else if(deseo=="2"){
            idioma='f';
            existe=true;
        }
        else if(deseo=="3"){
            idioma='a';
            existe=true;
        }
        else if(deseo=="4"){
            idioma='i';
            existe=true;
        }
        else if(deseo=="5"){
            idioma='r';
            existe=true;
        }
        else if(deseo=="6"){
            idioma='s';
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
    else if(idioma=='f'){
        palabra="Salut au Monde";
        cout<<palabra<<endl;
    }
    else if(idioma=='a'){
        palabra="Hallo Welt";
        cout<<palabra<<endl;
    }
    else if(idioma=='i'){
        palabra="Hello World";
        cout<<palabra<<endl;
    }
    else if(idioma=='r'){
        palabra="Privet Mir";
        cout<<palabra<<endl;
    }
    else if(idioma=='s'){
        palabra="Hej Världen";
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
