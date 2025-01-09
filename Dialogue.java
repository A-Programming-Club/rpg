
import java.util.ArrayList;

public class Dialogue {
    public Dialogue(String _text) {
        text = _text;
    }

    public bool hasNextOption() { return nextOptions.empty(); }
    public Dialogue getNextOption(int i) { return nextOptions.get(i); }
    public int optionsCount() { return nextOptions.size(); }

    public String toString() { return text; }

    private String text;
    private ArrayList<Dialogue> nextOptions;
}
