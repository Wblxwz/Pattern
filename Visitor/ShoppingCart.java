package Visitor;

import java.util.ArrayList;

public class ShoppingCart {
    private ArrayList<Elements> list = new ArrayList<Elements>();
    public void Accept(Visitor visitor)
    {
        for(Elements i:list)
        {
            i.Accept(visitor);
        }
    }
    public void Add(Elements element)
    {
        list.add(element);
    }
    public void Remove(Elements element)
    {
        list.remove(element);
    }
}
