#ifndef ARBOLBPLUS_HPP_INCLUDED
#define ARBOLBPLUS_HPP_INCLUDED

class ArbolBPlus{

public:
    ArbolBPlus(int orden = 5);
    ~ArbolBPlus();
    ArbolBPlus(const ArbolBPlus & arbol);
    ArbolBPlus& operator=(const ArbolBPlus &arbol);

    void Agregar(int dato);

    void Eliminar(int dato);

    void Vaciar();

    bool Buscar(int dato);
    bool EstaVacio();

private:
    int numNodos;
    int orden;

    struct Nodo{
        int numDatos;
        int numHijos;
        int orden;
        int *datos;//orden-1
        Nodo* *hijos;//orden
        Nodo *siguienteHoja;

        Nodo(Nodo *hijos = nullptr, int orden = 5);
        bool EsHoja(); //pendiente
        bool HayEspacio();
        bool EstaLleno();
    }*raiz;

    void Agregar(int dato,Nodo * &subRaiz);//referencia a puntero a nodo
    void Eliminar(const int &nom, Nodo *& subRaiz);

};


#endif // ARBOLBPLUS_HPP_INCLUDED
