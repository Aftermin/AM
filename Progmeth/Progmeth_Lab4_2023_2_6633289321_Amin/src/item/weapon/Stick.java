package item.weapon;

import item.base.BaseWeapon;

public class Stick extends BaseWeapon {
    private int att;
    public Stick(){
        super("Stick",3,0);
        setAtt(1);
    }
    public void setAtt(int att) {
        this.att = att;
    }

    @Override
    public int getAtt() {
        return this.att;
    }
}
