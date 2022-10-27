package Strategy;

public class Descending implements Sort{
    @Override
    public void Sort(Score score[],int n) {
        for(int i = 0;i < n - 1;++i)
        {
            for(int j = 0;j < n - 1 - i;++j)
            {
                if(score[j].getScore() < score[j+1].getScore())
                {
                    Score temp = score[j];
                    score[j] = score[j + 1];
                    score[j + 1] = temp;
                }
            }
        }
    }
}
