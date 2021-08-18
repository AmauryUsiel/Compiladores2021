#include<iostream>
#include<tuple>

using namespace std;

class AFD
{
public:
    int numero_estados;
    char alfabeto[100];
    int estadoinicial;
    int estadofinal;
    

public:
    AFD(int numerodeestados, string cadena, int estadodeaceptacion, int comienzo )
    {
        numero_estados = numerodeestados;
        for(int i = 0; i < cadena.length(); i++)
        {
            alfabeto[i] = cadena[i];
        }
        estadofinal = estadodeaceptacion;
        estadoinicial = comienzo;
    }

};

class Estado{
private:
    int indicador;
    int transiciones[50];
    int destinos[50];
    
public:
    Estado(int indice, int caminos[], int estadosfinales[])
    {
       indicador = indice;
       for(int i = 0; i < 50; i++)
       {
           transiciones[i] = caminos[i];
       }
       for(int i = 0; i < 50; i++)
       {
           destinos[i] = estadosfinales[i];
       }
       
    }

    int getindex()
    {
        return indicador;
    }

};


int main()
{
    AFD numero1 = AFD(10,"holaAdamSandler",7,3);
    cout << numero1.numero_estados << " - " << numero1.estadofinal << " - " << numero1.estadoinicial << endl;
    return 0;
}
