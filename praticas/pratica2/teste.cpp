#include <windows.h>
#include <iostream>

int main() {
    bool clicando = false; // controle do autoclicker
    std::cout << "Pressione F1 para ligar/desligar o autoclicker\n";

    while (true) {
        // Verifica se a tecla F1 foi pressionada (botão down)
        if (GetAsyncKeyState(VK_F1) & 1) { // &1 detecta só o pressionamento, não ficar segurando
            clicando = !clicando; // alterna o estado (liga/desliga)
            if (clicando)
                std::cout << "Autoclicker ligado!\n";
            else
                std::cout << "Autoclicker desligado!\n";

            Sleep(300); // Debounce: evita múltiplas trocas rápidas se tecla ficar pressionada
        }

        if (clicando) {
            // Clica com o botão esquerdo do mouse
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(10); // tempo que o botão fica pressionado
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

            Sleep(10); // espera entre os cliques (ajuste aqui se quiser mais rápido ou lento)
        }
    }
    return 0;
}
