#include <iostream>
using namespace std;

void depositar(){
    int saldo_inicial = 5000;
    float extra , saldo = 0;
    cout<<"Ingrese la Cantidad que Desea Depositar: "<<endl;
    cin>>extra;
    saldo = saldo_inicial + extra;
    cout<<"Dinero de Cuenta: "<<saldo<<endl;
}

void retirar(){
    int saldo_inicial = 5000;
    int retiro;
    float saldo=0;

    cout<<"Que Cantidad desea Retirar?: "<<endl;
    cin>>retiro;

    if(retiro>saldo_inicial){
        cout<<"Usted no puede retirar dicha cantidad";
    } else{
        saldo=saldo_inicial-retiro;
        cout<<"Dinero de Cuenta: "<<saldo;
    }

}

int saldo_inicial = 5000;

void menu_principal(){
    char dato;

    cout<<"\t Bienvenido al Cajero Automatico"<<endl<<endl;
    cout<<" > Saldo Atual del Cajero: "<< "Q"<< saldo_inicial << ".00" <<endl;
    cout<<"Que Desea Hacer: "<<endl;
    cout<<"1. Depositar Dinero"<<endl;
    cout<<"2. Retirar Dinero"<<endl;
    cout<<"3. Salir"<<endl;
    cin>> dato;

    switch (dato) {
        case '1':
            depositar();
            break;
        case '2':
            retirar();
            break;
        case '3':
            cout<<"Usted a decidido finalizar el proceso"<<endl;
            break;
        default:
            menu_principal();
    }
}

int main() {
    menu_principal();
    return 0;
}