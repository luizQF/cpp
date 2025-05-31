#include <iostream>
#include <vector>
using namespace std;
struct Carro{
    string modelo;
    int pot;
    int vel;
    int velMax;
    //Metodos da struct (funções criada que podem sem acessadas na struct)
    void inserir(string modelUndf, int potUndf, int velUndf, int velMaxUndf){
        modelo = modelUndf;
        pot = potUndf;
        velMax = velMaxUndf;
        vel = velUndf;
        if(velUndf > velMaxUndf){
            vel = velMaxUndf;
        }
    }

    void mostrar(){
        cout << "Carro Cadastrado";
        cout << "\n\nModelo do veiculo.............: "<< modelo << endl;
        cout << "Potencia do veiculo...........: "<< pot << endl;
        cout << "Velocidade Atual do veiculo...: "<< vel << endl;
        cout << "Velocidade Maxima do veiculo..: " << velMax << "\n\n\n";
    }
};

int main(){
    Carro *carros = new Carro[3];
    //Outra forma de declarar um vetor (mais recomendada) com a biblioteca <vector>
    //vector<tipo>nome(tamanho) -> vector<Carro> carros(3);
    Carro car1;
    carros[0] = car1;
    carros[0].modelo = "nome";
    carros[0].pot = 100;
    carros[0].vel = 50;
    return 0;
}