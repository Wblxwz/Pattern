package Strategy;

public class Client {
    public static void main(String args[])
    {
        Score score1 = new Score("1","A","1",80,90,85,70);
        Score score2 = new Score("2","B","2",88,50,66,95);
        Score score3 = new Score("3","C","3",76,55,86,63);
        Score score4 = new Score("4","D","4",45,57,89,77);

        Score score[] = {score1,score2,score3,score4};

        Sort sort = new Descending();

        Context context = new Context(sort);

        context.SortAlgorithm(score,4);

        for(Score s:score)
        {
            System.out.println(s.getStudentName() + s.getScore());
        }

    }
}
