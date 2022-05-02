#ifndef POKEMONS_H
#define POKEMONS_H


class Pokemons
{
    public:
        Pokemons();
        virtual ~Pokemons();

        void cambiarNombre(string nombreNuevo){
            nombre = nombreNuevo;
        }
        void cambiarVida(int vidaNueva){
            vida=vidaNueva;
        }
        int obtenerAtaque(){
            return ataque;
        }

    private:
        string nombre;
        int vida;
        int ataque;
};

#endif // POKEMONS_H
