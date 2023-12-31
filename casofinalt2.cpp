#include <iostream>
#include <fstream>
#include <string>

void load_script(const std::string& filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Error: No se pudo abrir el archivo '" << filename << "'" << std::endl;
        return;
    }

    std::string line;
    while (getline(file, line)) {
        if (show_script) {
            std::cout << line << std::endl;
        }
    }

    if (file.bad()) {
        std::cerr << "Error de lectura al leer el archivo '" << filename << "'" << std::endl;
    }

    file.close();
}

void load_script() {
    std::string filename;
    std::cout << "Ingrese el nombre del archivo: ";
    std::getline(std::cin, filename);

    load_script(filename);
}

int main() {
    load_script("programacion.txt", true);

    load_script();

    return 0;
}
