//Zachary Palmer

#ifndef __MYSHAPE_HPP_INCLUDED
#define __MYSHAPE_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class recDiamond : public sf::Drawable
{
public:
  recDiamond(int depth, double x, double y, double s); //constructor which takes the depth, two vertexes and side length
  virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
private:
  double x, y ,s; //Vertexes (x and y) and side length (s)
  int depth; //depth of recursion of this triangle
  double S2; //height of this triangle (computed with this formula: ((side length * sqrt/3) * .5)
  sf::ConvexShape diamond; //this triangle
};

sf::ConvexShape initialTriangle(int i); //creates initial triangle with side length i

#endif // __MYSHAPE_HPP_INCLUDED
