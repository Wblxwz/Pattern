package Visitor;

public class Customer implements Visitor
{
    @Override
    public void Visit(Apple apple)
    {
        System.out.println("确认苹果质量" + apple.getQuality());
    }

    @Override
    public void Visit(Book book)
    {
        System.out.println("确认图书价格" + book.getPrice());
    }
}
