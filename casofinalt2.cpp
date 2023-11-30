#include <iostream>
#include <fstream>
#include <string>

void load_script(const std::string& filename, bool show_script = false) {
    std::ifstream file(filename);


