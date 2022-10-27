package Observer;

public class Client {
    public static void main(String args[])
    {
        TrafficLight light = new TrafficLight();
        Observer observer1 = new Walker();
        Observer observer2 = new Ambulance();
        light.Add(observer1);
        light.Add(observer2);
        light.Start();
    }
}
