package Mediator;

import java.util.ArrayList;

public class Mediator {
    private ArrayList<Customer> clients = new ArrayList<Customer>();
    private ArrayList<Message> messages = new ArrayList<Message>();


    public void Register(Customer customer)
    {
        clients.add(customer);
    }
    public void Register(Message message)
    {
        messages.add(message);
    }
    public void Forward()
    {
        for(Customer customer:clients)
        {
            for(Message message:messages)
            {
                customer.Receive(message);
            }
        }
    }
}
