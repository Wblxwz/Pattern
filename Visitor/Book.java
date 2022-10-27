package Visitor;

public class Book implements Elements{
    @Override
    public void Accept(Visitor visitor)
    {
        visitor.Visit(this);
    }

    private double price;

    public double getPrice() {
        return price;
    }

    public Book(double p)
    {
        this.price = p;
    }
}
