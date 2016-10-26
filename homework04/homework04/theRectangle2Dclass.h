//
//  theRectangle2Dclass.h
//  homework04
//
//  Created by Daniel Portillo on 10/23/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef theRectangle2Dclass_h
#define theRectangle2Dclass_h

class Rectangle2D {
private:
    double x;
    double y;
    double height;
    double width;
public:
    //default constuctor
    Rectangle2D();
    Rectangle2D(double, double, double, double);
    //get functions
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;
    //set functions
    void setX(double const);
    void setY(double const);
    void setWidth(double const);
    void setHeight(double const);
    //calculate area
    double getArea() const;
    //calculate perimeter
    double getPerimeter() const;
    //contains point
    bool contains(double, double);
    bool contains(const Rectangle2D &r);
    bool overlaps(const Rectangle2D &r);
};
#endif /* theRectangle2Dclass_h */