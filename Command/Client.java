package Command;

public class Client {
    public static void main(String args[])
    {
        Waiter waiter = new Waitress();
        Customer customer = new Customer(waiter);
        customer.Order();
    }
}
