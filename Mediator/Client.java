package Mediator;

public class Client {
    public static void main(String args[])
    {
        Customer customer1 = new Customer("Alice");
        Customer customer2 = new Customer("Bob");

        Mediator mediator = new Mediator();

        Message buymessage = new Message(customer1,"买房");
        Message sellmessage = new Message(customer2,"卖房");

        mediator.Register(customer1);
        mediator.Register(customer2);
        mediator.Register(buymessage);
        mediator.Register(sellmessage);

        mediator.Forward();
    }
}
