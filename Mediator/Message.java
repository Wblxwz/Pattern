package Mediator;

public class Message {
    private String message;
    private Customer customer;
    public Message(Customer customer,String message)
    {
        this.customer = customer;
        this.message = message;
    }

    public Customer getCustomer() {
        return customer;
    }

    public String getMessage() {
        return message;
    }
}
