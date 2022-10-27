package Visitor;

public class Apple implements Elements{

    public Apple(double q,double p)
    {
        this.quality = q;
        this.price = p;
    }

    public double getQuality() {
        return quality;
    }

    public double getPrice() {
        return price;
    }

    @Override
    public void Accept(Visitor visitor)
    {
        visitor.Visit(this);
    }

    private double quality;

    private double price;
    public void Weigh()
    {
        System.out.println("过秤");
    }
}
