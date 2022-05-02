#include <iostream>
#include "Pokemons.h"

using namespace std;

struct pokemon{
    string nombre;
    int ataque;
    int vida;
    //Valor 1 = a electrico , valor 2 = fuego
};
pokemon elegirCompanieroPokemon(){
        //DECLARAMOS  VARIABLES DE TIPO POKEMON
        pokemon picachu,charmander,pepeGrillo;

        //1111111111
        //222
        //333
        //4444444

        //DAMOS VALOR A LOS ATRIBUTOS (VARIABLES) DE LOS POKEMONS
        picachu.vida = 10;
        picachu.ataque=30;
        picachu.nombre="Picachu";

        charmander.nombre="Charmander";
        charmander.ataque=50;
        charmander.vida=100;
        int opcion;
        cout<<" 1 picachu ---  2 charmander " <<endl;
        cin>>opcion;

        if(opcion == 1){return picachu;}
        else if (opcion == 2){return charmander;}
    }

void crearPokemon(pokemon listaPokemons[],pokemonsCreados){
    pokemon pokemonNuevo;
    cout<<"Ingrese el nombre del pokemons"<<endl;
    string nombre;
    cin>>nombre;
    pokemonNuevo.cambiarNombre(nombre);
    cout<<"Ingrese el ataque del pokemon"<<endl;
    int ataque,vida;
    cin>>ataque;
    pokemonNuevo.ataque=ataque;
    cout<<"Ingrese la vida del pokemon"<<endl;
    cin>>vida;
    pokemonNuevo.vida=vida;

    listaPokemons[pokemonsCreados] = pokemonNuevo;
}

//LLLLLLLLLLLLLLLLLLLLL


int main()
{

    pokemon pokemons[100];
    int opcion=5;
    int pokemonsCreados=0;
    while(opcion =! 0) {
        cout<<"Ingrese 1 para crear pokemon"<<endl
        <<"Ingrese 0 para salir"<<endl;
        cin>>opcion;
        if(opcion == 1){
            crearPokemon(pokemons,pokemonsCreados);
            pokemonsCreados++;
        }
    }





    return 0;
}
