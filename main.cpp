#include <QCoreApplication>
#include <iostream>
#include <string>
#include "Nodo.h"
//#include "listaSimple.h"
#include "listaed.h"
#include "listaed.cpp"
#include "expresionpostfijas.h"
#include <zlib.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int f, b, c;

    f = 5;
    b = 50;
    c = 20;
    /*
    Node<string> *p = new Node<string>(f);
    p->next = new Node<string>(b);
    p->next->next = new Node<string>(c);

    cout << p->info <<endl;
    cout << p->next->info << endl;
    cout << p->next->next->info << endl;*/

    /*ListaSimple <int>lista;
    lista.addToHead(f);
    lista.addToTail(b);
    lista.addToTail(c);
    lista.addToHead(10);
    lista.addToTail(100);*/
/*
    cout << "agregando 10 y 100" << endl;
    lista.setHoja();

    cout << "---------------" << endl;
    cout << "eliminar cabeza" << endl;
    cout << "---------------" << endl;

    cout << "eliminado: " <<  lista.deleteFromHead() <<endl;
    lista.setHoja();
    cout << "---------------" << endl;
    cout << "eliminar cola" << endl;
    cout << "---------------" << endl;


    cout << "eliminado: " << lista.deleteFromTail() << endl;
    lista.setHoja();

    cout << "---------------" << endl;
    cout << "eliminar nodo" << endl;
    cout << "---------------" << endl;
    lista.deleteNode(50);


    lista.setHoja();

*/
    bool salir = true;

    while(salir)
    {

    string g;
    cout << "ingresar expresion: " << endl;
    cin >> g;
    string exp(g), newcade;
    ExpresionPostFijas expre(exp);
    cout << exp << endl;
    //expre.operadores.setHoja();
    expre.operacion.setHoja();
    cout << endl;
    expre.evaluar();

    expre.numeros.setHoja();

    cout << "salir? 0 = si, 1 = no"<< endl;
    cin >> salir;

    }


    return a.exec();
}
