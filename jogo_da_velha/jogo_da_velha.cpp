#include <iostream>
#include <vector>
#include <string>

// Função para exibir o tabuleiro
void exibirTabuleiro(const std::vector<std::vector<char>> &tabuleiro) {
    for (const auto &linha : tabuleiro) {
        for (const auto &celula : linha) {
            std::cout << celula << " ";
        }
        std::cout << std::endl;
    }
}

// Função para verificar se há um vencedor
bool verificarVencedor(const std::vector<std::vector<char>> &tabuleiro, char jogador) {
    // Verificar linhas e colunas
    for (int i = 0; i < 3; ++i) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return true;
        }
    }

    // Verificar diagonais
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return true;
    }

    return false;
}

int main() {
    std::vector<std::vector<char>> tabuleiro(3, std::vector<char>(3, '-'));
    int x, y;
    bool jogadorX = true;
    int jogadas = 0;

    while (jogadas < 9) {
        exibirTabuleiro(tabuleiro);
        
        if (jogadorX) {
            std::cout << "Jogador X, insira as coordenadas (x, y): ";
        } else {
            std::cout << "Jogador O, insira as coordenadas (x, y): ";
        }

        std::cin >> x >> y;

        if (tabuleiro[x][y] == '-') {
            tabuleiro[x][y] = jogadorX ? 'X' : 'O';
            jogadas++;

            if (verificarVencedor(tabuleiro, jogadorX ? 'X' : 'O')) {
                exibirTabuleiro(tabuleiro);
                std::cout << "Jogador " << (jogadorX ? 'X' : 'O') << " venceu!" << std::endl;
                break;
            }

            jogadorX = !jogadorX;
        } else {
            std::cout << "Posição já ocupada. Tente novamente." << std::endl;
        }
    }

    if (jogadas == 9) {
        exibirTabuleiro(tabuleiro);
        std::cout << "Empate!" << std::endl;
    }

    return 0;
}
