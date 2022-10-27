package Observer;

public class Ambulance implements Observer{
    @Override
    public void Response(TrafficState state) {
        System.out.println("救护车需要让路");
    }
}
