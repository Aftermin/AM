public class Circle extends Shape{
    double radius;
    public Circle(double radius){
        this.radius=radius;
    }
    @Override
    double getArea() {
        return Math.PI*this.radius*this.radius;
    }

    @Override
    double getPerimeter() {
        return 2*Math.PI*this.radius;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
}
