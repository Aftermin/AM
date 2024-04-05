package item.consumption;

import item.base.BaseConsumption;
import item.usage.CookState;
import item.usage.Cookable;
import item.usage.Healable;

import java.util.HashMap;

public class Pork extends BaseConsumption implements Cookable, Healable {
    private CookState cookState;
    private HashMap<CookState,Integer> RECOVER_PT;
    public Pork(){
        super("Pork");
        this.setCookState(CookState.RAW);
        this.RECOVER_PT = new HashMap<>();
        addHashMap();
    }

    private void addHashMap() {
        RECOVER_PT.put(CookState.RAW,1);
        RECOVER_PT.put(CookState.COOKED,2);
        RECOVER_PT.put(CookState.BURNT,0);
    }

    @Override
    public int getRecoverPoint() {
        return RECOVER_PT.get(getCookState());
    }

    @Override
    public String toString() {
        String state = "";
        if(cookState==CookState.RAW) state="Raw";
        else if(cookState==CookState.COOKED) state="Cooked";
        else if(cookState==CookState.BURNT) state="Burnt";
        return state+" "+getName()+" (+" + getRecoverPoint()+" HP)";
    }

    @Override
    public CookState getCookState() {
        return this.cookState;
    }

    @Override
    public void setCookState(CookState cookState) {
        this.cookState=cookState;
    }



}
