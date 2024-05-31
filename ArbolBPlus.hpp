#ifndef ARBOLB+_HPP_INCLUDED
#define ARBOLB+_HPP_INCLUDED

class ArbolBPlus{

public:
    ArbolBPlus(int grado = 5);
    ~ArbolBPlus();
    ArbolBPlus(const ArbolBPlus & arbol);
    ArbolBPlus& operator=(const ArbolBPlus &arbol);

    void Agregar(int dato);

    void Eliminar(int dato);

    void Vaciar();

    bool Buscar(int dato);

private:
    int numNodos;
    int orden;

    struct Nodo{
        int numDatos;
        int *datos;//orden-1
        Nodo *hijos;//orden
        Nodo *siguienteHoja;

        Nodo(Nodo *hijos = nullptr);
        bool EsHoja();
    }*raiz;

    void Agregar(int dato,Nodo * &subRaiz);//referencia a puntero a nodo
    void Eliminar(const int &nom, Nodo *& subRaiz);

};


#endif // ARBOLB+_HPP_INCLUDED
