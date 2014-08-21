/* 
 * File:   SpriteNode.hpp
 * Author: iMer
 *
 * Created on 3. Juli 2014, 01:51
 */

#ifndef SPRITENODE_HPP
#define	SPRITENODE_HPP

#include "Node.hpp"
#include "SFML/Graphics/Texture.hpp"
namespace engine {

    class SpriteNode : public Node {
    protected:
        const sf::Texture* m_texture;
        sf::Vertex m_vertices[4];
        sf::IntRect m_textureRect;
        
    public:
        SpriteNode(Scene* scene);
        virtual ~SpriteNode();
        void SetTexture(std::string path, const sf::IntRect* rect = nullptr);
        void SetTexture(sf::Texture* texture, const sf::IntRect* rect = nullptr);
        virtual bool initialize(Json::Value& root);
        virtual uint8_t GetType() const;
    protected:
        virtual void OnDraw(sf::RenderTarget& target, sf::RenderStates states);
        void UpdatePosition();
        void UpdateTexCoords();
    };
}
#endif	/* SPRITENODE_HPP */

