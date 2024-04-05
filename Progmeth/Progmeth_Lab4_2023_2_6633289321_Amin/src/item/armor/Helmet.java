package item.armor;

import item.base.BaseArmor;

public class Helmet extends BaseArmor {
    private int def;
    public Helmet(){
        super("Helmet",5);
        setDef(1);
    }

    public void setDef(int def) {
        this.def = def;
    }

    @Override
    public int getDef() {
        return this.def;
    }
}
