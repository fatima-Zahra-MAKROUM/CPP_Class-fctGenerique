// Template_functions.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Point.h"


/*
*     **************exemple de fonction template 
template <class T> // bonjour  mr compilateur il y a un type T mais c'est au moment d'execution où on va savoir le type.
T max(T a, T b)
{
    return (a > b) ? a : b;
}
*/


int main()
{
 /*
    **************exemple de fonction template 
    int maxA = max(10, 12); //  int maxA = max <int>(10, 12);    => la meme chose
    float maxB = max(12.5, 10.3); //float maxB = max<float>(12.5, 10.3);
    char maxC = max('A','a');   // char maxC = max<char>('A','a');

    std::cout << "maxA :" << maxA << std::endl;
    std::cout << "maxB :" << maxB << std::endl;
    std::cout << "maxC :" << maxC << std::endl;
    */


    Point3D<int,float,double> p1(3,4,5); //une classe template on doit donner nom de classe <type>  // declaration = reservation de place memeoire donc il est obl de donner de type pour qu'on puise reserver de classe meme selon ce type
    Point3D<int, float, double> p3(3, 2, 1);
    Point3D<int, int, int> p2(3, 4, 5);
    Point3D<int, int, int> p4(2, 2, 2);

    p1.afficher();
    std::cout << "distance :" << p1.distance(p3) << std::endl;
    std::cout << "distance :" << p2.distance(p4) << std::endl;
    p1.translate(3);
    p1.afficher();


   







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
