#ifndef SFML_UTILS_H
#define SFML_UTILS_H

#include "SFML/Graphics.hpp"

namespace sws {

bool loadTexture(sf::Texture *texture, const std::string &path);
sf::Texture *createTexture(const std::string &path);

}

#endif // SFML_UTILS_H
