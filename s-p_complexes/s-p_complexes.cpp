// s-p_complexes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
#include "Cercle.h"


using namespace std;
int main()
{
        
    std::cout << "Hello World!\n";
    // complex 
    Complex Z1(2, 3);
    Complex Y(12, 13);
    Complex Z2(Z1);
    Z1.print();
    Z2.print();
    cout << Z1.module() << endl;
    Complex Z11 = Z1.conjuge();
    Z11.print();
    Complex Z12, Z13, Z14;

    Z12= Z1 + Z2;
    Z12.print();
    Z13 = Z1.operator-(Y);
    Z13.print();
    Z14 = Z1.operator*(Z2);
    Z14.print();

    cout << "you in Cercles @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    //cercle
   Point p= Point::creator(2.5, 2.6);
    Point p11 = Point::creator(2.5, 2.6);
    Point p2 = Point::creator(2.5, 2.6);

    Cercle C1(p, 12.5);
    Cercle C2(p11, 12.5);
    cout << p.print() << endl; cout << p2.print() << endl;
    cout << C1.affiche()<< endl;
    cout << C2.affiche() << endl;
 
    double s1, Per1;
    s1=C1.surface();
    Per1 = C1.perimetre();

    cout << s1 << endl;
    cout << Per1 << endl;
    //compare

    if (C1.operator==(C2)) {

        cout << "c it is equal" << endl;
    }

    else
    {
        cout << "c not the same" << endl;
    }

    if (p.operator==(p11)) {

        cout << "point is equal" << endl;
    }

    else
    {
        cout << "point not the same" << endl;
    }
   
   
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
