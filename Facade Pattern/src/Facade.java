public class Facade {
    private AirConditioner airConditioner;
    private DoorLock doorLock;
    private Light light;
    private Music music;
    public Facade()
    {
        airConditioner = new AirConditioner();
        doorLock = new DoorLock();
        light = new Light();
        music = new Music();
    }
    public void GoHome()
    {
        doorLock.Open();
        airConditioner.Open();
        light.Open();
        music.Open();
    }
    public void GoOutside()
    {
        airConditioner.Close();
        light.Close();
        music.Close();
        doorLock.Close();
    }
}
