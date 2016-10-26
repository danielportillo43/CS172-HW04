//
//  theRectangle2Dclass.cpp
//  homework04
//
//  Created by Daniel Portillo on 10/25/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "theRectangle2Dclass.h"
//default constuctor
Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    height = 1;
    width = 1;
}
//argument constuctor creates object with passed in values
Rectangle2D::Rectangle2D(double x, double y, double w, double h) {
    x = x;
    y = y;
    width = w;
    height = h;
}
//get functions
double Rectangle2D::getX() const {
    return x;
}
double Rectangle2D::getY() const {
    return y;
}
double Rectangle2D::getHeight() const {
    return height;
}
double Rectangle2D::getWidth() const {
    return width;
}
//set functions
void Rectangle2D::setX(double const hold) {
    x = hold;
}
void Rectangle2D::setY(double const hold) {
    y = hold;
}
void Rectangle2D::setHeight(double const hold) {
    height = hold;
}
void Rectangle2D::setWidth(double const hold) {
    width = hold;
}
//calculate area
double Rectangle2D::getArea() const {
    return (height * width);
}
//calculate perimeter
double Rectangle2D::getPerimeter() const {
    return ((height * 2) + (width * 2));
}
//contains point
bool Rectangle2D::contains(double x, double y) {
    double pointX = x;
    double pointY = y;
    if ((pointX < ((this->x) - (this->width * .5))) && (((pointX < ((this->x) + (this->width * .5))) && (pointY < ((this->y) - (this->height * .5)))) && (pointY < ((this->y) + (this->height * .5))))) {
        return true;
    }
    else {
        return false;
    }
}
//contains rectangle
bool Rectangle2D::contains(const Rectangle2D &r) {
    if (((this->x) - (.5 * this->width)) < (r.x - (.5 * r.width) && ((this->x) +(.5 * this -> width)) > (r.x + (.5 * this -> width)) && ((this -> y) - (.5 * this -> height)) < (r.y - (.5 * r.height)) && ((this -> y) + (.5 * this -> height)) < (r.y + (.5 * r.height)))) {
        return true;
    }
    else {
        return false;
    }
        
}
bool Rectangle2D::overlaps(const Rectangle2D &r) {
    double r1w = this -> width;
    double r1h = this -> height;
    double r1x = this -> x;
    double r1y = this -> y;
    double r2w = r.width;
    double r2h = r.height;
    double r2x = r.x;
    double r2y = r.y;
    
    if (r2w <= 0 || r2h <= 0 || r1w <= 0 || r1h <= 0) {
        return false;
    }
    r2w = r2w + r2x;
    r2h = r2h + r2y;
    r1w = r1w + r1x;
    r1h = r1h + r1y;
    
    if ((r2w < r2x || r2w > r1x) && (r2h < r2y || r2h > r1y) && (r1w < r1x || r1w > r2x) && (r1h < r1y || r1h > r2y)) {
        return true;
    }
    else {
        return false;
    }
}










