package Observer;


public interface Observable
{
    void Notify();
    void Add(Observer observer);
    void Remove(Observer observer);
}
