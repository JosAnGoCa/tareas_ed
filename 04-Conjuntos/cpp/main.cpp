#include "conjunto.h"

using namespace std;

int main() {
    // Declaración de conjuntos
    Conjunto<int> conjunto_1;
    Conjunto<int> conjunto_2;

    cout << std::boolalpha;

    // Add method
    conjunto_1.add(0);
    conjunto_1.add(1);
    conjunto_1.add(2);
    conjunto_1.add(3);
    conjunto_1.add(4);
    conjunto_2.add(3);
    conjunto_2.add(4);
    conjunto_2.add(5);
    conjunto_2.add(6);
    conjunto_2.add(7);

    // Length method
    cout << "c1 length " << conjunto_1.length() << "\n";
    cout << "c2 length " << conjunto_2.length() << "\n";

    // Contains method
    cout << "c1 contains 0 " << conjunto_1.contains(0) << "\n";
    cout << "c1 contains 5 " << conjunto_1.contains(5) << "\n";

    // Remove method
    conjunto_1.remove(0);

    // Equals method
    cout << "c1 == c2 " << conjunto_1.equals(&conjunto_2) << "\n";

    // IsSubset method
    cout << "c2 subset c1 " << conjunto_1.isSubset(&conjunto_2) << "\n";

    // Intersection method
    Conjunto<int> conjunto_intersection = conjunto_1.intersection(&conjunto_2);
    cout << "intersection c1 c2 " << conjunto_intersection << "\n";

    // Difference method
    Conjunto<int> conjunto_difference = conjunto_1.difference(&conjunto_2);
    cout << "difference c1 c2 " << conjunto_difference << "\n";

    // Union method
    conjunto_1.union_(&conjunto_2);
    cout << "c1 u c2 " << conjunto_1 << "\n";

    cout << "Done!" << "\n";
    return 0;
}