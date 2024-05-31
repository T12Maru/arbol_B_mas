#ifndef ARBOLB+_HPP_INCLUDED
#define ARBOLB+_HPP_INCLUDED

class ArbolBPlus{

public:
    ArbolBPlus(int orden);
    ~ArbolBPlus();
    ArbolBPlus(const ArbolBPlus & a);
    ArbolBPlus& operator=(const ArbolBPlus &a);

    void Agregar(int dato);

    void Eliminar(int dato);

    bool Buscar(int dato);

    void Imprimir();

private:
    int numNodos;
    int orden;

    struct Nodo{
        int numDatos;
        int *datos;//grado-1
        Nodo *hijos;//grado
        Nodo *siguienteHoja;

        Nodo(Nodo *hijos = nullptr);
        bool EsHoja();
    }*raiz;
    void Agregar(T nom,Nodo * &subRaiz);//referencia a puntero a nodo
    void Eliminar(const T &datos, Nodo *& subRaiz);
    void MeterNodo();
    void DividirNodo();

    bool Empujar()//Si el nodo esta lleno, determina si hay espacio en la hoja.


    Nodo* Buscar();
    Nodo* Buscar(Nodo);

};


#endif // ARBOLB+_HPP_INCLUDED
