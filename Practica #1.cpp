
#include <iostream>
#include <string.h>
using namespace std;

class Date{
    private:
        string Fecha, fechaa;
        int Dia, Mes, Anio, bis;

    public:
        Date(string);

        void dia(){

            cout<<endl<<"Dia: ";

            while ((Dia<1 || Dia>31) && (Mes==1 || Mes==3 || Mes==5 || Mes==7 || Mes==8 || Mes==10 || Mes==12))
            {
                cout<<endl<<"No es valido, intente de nuevo: ";
                cin>>Dia;
                //Dia=28;
            }
            while ((Dia<1 || Dia>30) && (Mes==4 || Mes==6 || Mes==9 || Mes==11))
            {
                cout<<endl<<"No es valido, intente de nuevo: ";
                cin>>Dia;
                //Dia=28;
            }
            while ((Dia<1 || Dia>29) && (Mes==2 && bis==1))
            {
                cout<<endl<<"No es valido, intente de nuevo: ";
                cin>>Dia;
                //Dia=29;
            }
            while ((Dia<1 || Dia>28) && (Mes==2 && bis==0))
            {
                cout<<endl<<"No es valido, intente de nuevo: ";
                cin>>Dia;
                //Dia=28;
            }
            cout<<Dia<<endl<<endl;
            //return Dia;
        }
        void mes(){
            cout<<"Mes: ";

            while (Mes<1 || Mes>12){
                cout<<"No es valido, intente de nuevo: ";
                cin>>Mes;
            }
            cout<<Mes<<endl<<endl;
            //return Mes;
        }
        void anio(){
            
             cout<<endl<<"Año: ";

            if (Anio%4==0 && Anio%100 !=0 || Anio%400==0){
                cout<<Anio<<endl<<" Es año bisiesto "<<endl<<endl;
                bis=1;
            }

            else
            {
                cout<<Anio<<endl<<" No es año bisiesto "<<endl<<endl;
                bis=0;
            }
            //return Anio;   
         }
};

Date::Date(string _Fecha){
    Fecha=_Fecha;

    fechaa=Fecha.substr(8,10);
    Dia=stoi(fechaa);
    

    fechaa=Fecha.substr(5,7);
    Mes=stoi(fechaa);


    fechaa=Fecha.substr(0,4);
    Anio=stoi(fechaa);

}

int main(){ 
    string _date;
    cout<<endl<<"Ingrese la fecha: ";
    getline(cin, _date);
    Date oFecha(_date);


    oFecha.anio();
    oFecha.mes();
    oFecha.dia();

}









