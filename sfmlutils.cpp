#include "sfmlutils.h"

bool sws::loadTexture(sf::Texture *texture, const std::string &path)
{
    sf::Image sourceImage;
    sf::Image alphaChannelImage;

    if (!sourceImage.loadFromFile(path + ".jpg"))
        return false;

    if (!alphaChannelImage.loadFromFile(path + ".jpg"))
        return false;

    const sf::Vector2u size = sourceImage.getSize();
    for (size_t x = 0; x < size.x; ++x)
    {
        for (size_t y = 0; y < size.y; ++y)
        {
            if (alphaChannelImage.getPixel(x, y) == sf::Color::Black)
                sourceImage.setPixel(x, y, sf::Color::Transparent);
        }
    }
    if (!texture->loadFromImage(sourceImage))
        return false;

    return true;
}

sf::Texture *sws::createTexture(const std::string &path)
{
    sf::Texture *texture = new sf::Texture();
    if (!sws::loadTexture(texture, path))
    {
        delete texture;
        texture = nullptr;
    }
    return texture;
}
