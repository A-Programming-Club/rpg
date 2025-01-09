
public class DialogueSystem {
    public DialogueSystem(Dialogue rootDialouge) {
        root = rootDialouge;
    }

    // returns the Dialogue that the player exits on
    public Dialogue runDialogue() {
        // check if d is not a dead end
        while(root.hasNextOption() == false) {
            // print d
            for ( Dialogue d : root.getNextOptionsArray()) {
                System.out.println(d);
            }

            // wait for response to d
            
            // change root
        }
    }

    Dialogue root;

    public static void main(String[] args) {
        Dialogue r("welcome to the dialouge system",
            new ArrayList<>(Arrays.asList(
                Dialogue("Shut up"), 
                Dialogue("kys"),
                Dialogue("good god"))
            ));

        DialogueSystem s(r);
        s.runDialogue();
    }
}
