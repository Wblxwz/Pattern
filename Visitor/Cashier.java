package Visitor;

public class Cashier implements Visitor
{
    @Override
    public void Visit(Apple apple) {
        double price = apple.getQuality() * apple.getPrice();
        System.out.println("计算苹果价格" + price);
    }

    @Override
    public void Visit(Book book) {
        System.out.println("计算图书价格" + book.getPrice());
    }
}
