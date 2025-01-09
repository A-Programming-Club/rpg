
import java.util.ArrayList;

public class Dialogue {
    public Dialogue(String _text) {
        text = _text;
    }

    public Dialogue(String _text, ArrayList<Dialogue> next) {
        text = _text;
        nextOptions = d;
    }

    public bool hasNextOption() { return nextOptions.empty(); }
    public Dialogue getNextOption(int i) { return nextOptions.get(i); }
    public int optionsCount() { return nextOptions.size(); }
    public ArrayList<Dialogue> getNextOptionsArray() { return nextOptions; }

    public String toString() { return text; }

    private String text;
    private ArrayList<Dialogue> nextOptions;
}
