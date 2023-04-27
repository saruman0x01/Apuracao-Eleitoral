#include <iostream>

using namespace std;

int main()
{
    float voto_branco, voto_nulo, candidato_um, candidato_dois, candidato_tres, soma, pc1, pc2, pc3, pn, pb;

    cout << "Votos totais no LORIVAL: ";
    cin >> candidato_um;
    cout << "Votos totais no SERJAO: ";
    cin >> candidato_dois;
    cout << "Votos totais na FILOMENA: ";
    cin >> candidato_tres;
    cout << "Votos totais NULOS: ";
    cin >> voto_nulo;
    cout << "Votos totais em BRANCO: ";
    cin >> voto_branco;

    soma = candidato_um + candidato_dois + candidato_tres + voto_nulo + voto_branco;

    pc1 = candidato_um / soma * 100;
    pc2 = candidato_dois / soma * 100;
    pc3 = candidato_tres / soma * 100;
    pn = voto_nulo / soma * 100;
    pb = voto_branco / soma * 100;

    cout << "O candidato Lorival teve " << pc1 << "% dos votos!" << endl;
    cout << "O candidato Serjao teve " << pc2 << "% dos votos!" << endl;
    cout << "A candidata Filomena teve " << pc3 << "% dos votos!" << endl;
    cout << "Os votos nulos tiveram " << pn << "% dos votos!" << endl;
    cout << "Os votos brancos tiveram " << pb << "% dos votos!" << endl;

    return 0;
}
