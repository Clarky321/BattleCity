#include "ResourceManager.h"
#include "../Renderer/ShaderProgram.h"

#include <sstream>
#include <fstream>
#include <iostream>

ResourceManager::ResourceManager(const std::string& executablePath)
{
    size_t found = executablePath.find_last_of("/\\");
    m_path = executablePath.substr(0, found);
}