package Visitor;

public class Client {
    public static void main(String args[])
    {
        ShoppingCart shoppingCart = new ShoppingCart();
        Elements e1,e2,e3,e4;
        e1 = new Apple(2.5,3.0);
        e2 = new Book(50.0);
        e3 = new Apple(3.5,1.5);
        e4 = new Book(35.5);
        shoppingCart.Add(e1);
        shoppingCart.Add(e2);
        shoppingCart.Add(e3);
        shoppingCart.Add(e4);
        Visitor v1,v2;
        v1 = new Customer();
        v2 = new Cashier();
        shoppingCart.Accept(v1);
        shoppingCart.Accept(v2);
    }
}
