package Mediator;

public class Customer {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Customer(String name)
    {
        this.name = name;
    }

    public void Receive(Message message)
    {
        System.out.println(name + "收到" + message.getCustomer().getName() + message.getMessage());
    }
}
