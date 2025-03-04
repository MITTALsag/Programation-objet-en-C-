#include <iostream>

#include "unit_test.hpp"


int main() {
    test_constructeur_par_defaut();
    test_constructeur_cst_int();
    test_constructeur_cst_symb();
    test_constructeur_variable();
    test_constructeur_unaire();
    test_constructeur_binaire();
    test_constructeur_copie();

    test_egalite();

    test_affectation();
    
    test_operateur_unaire();
    test_operateur_binaire();

    test_derive_simple();
    test_derive_unary();
    test_derive_binary();

    test_subs();

    test_eval();

    // adecommenter si vous voulez faire ce tests
    //tester_expressions(); 


    std::cout << std::endl;
    std::cout << "Test du sujet : " << std::endl;
    test_simplifie();

    return 0;
}