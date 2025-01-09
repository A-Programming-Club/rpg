import java.util.ArrayList;
import java.util.Map;

public abstract class Systems {
    abstract void update();
}

public abstract class Regions {
    ArrayList<Euclidian> boundaryPoints;
}

class World extends Systems {

}

public abstract class Entities {
    Race race;
    double maxHealth;
    double health;
    double maxAgility;
    double agility;
    double maxStrength;
    double strength;
    ArrayList<Entities> hostileTo;
    ArrayList<Entities> aggressionPriority;
    Map<Entities, Double> reputation;
    Map<Race, Double> bias; 
}

abstract class Enemy extends Entities {

}

abstract class NPC extends Entities {

}

class Player extends Entities {

}

interface Race {

}

/*
 * Utility Classes
 */
class Pair<K,V> {
    public K a;
    public V b;
}

class Triplet<K,V,T> {
    public K a;
    public V b;
    public T c;
}

class Cartesian {
    public int x;
    public int y;
    public double distanceTo(int a, int b) {
        return Math.sqrt((x-a)*(x-a)+(y-b)*(y-b));
    }
    public double distanceTo(Cartesian a) {
        return Math.sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
    }
    public double distanceTo(Euclidian a) {
        return Math.sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
    }
}

class Euclidian {
    public int x;
    public int y;
    public int z;
    public double distanceTo(int a, int b, int c) {

    }
    public double distanceTo(Cartesian a) {
        return Math.sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y));
    }
    public double distanceTo(Euclidian a) {
        return Math.sqrt((x-a.x)*(x-a.x)+(y-a.y)*(y-a.y)+);
    }
}