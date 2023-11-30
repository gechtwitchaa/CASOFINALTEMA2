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


