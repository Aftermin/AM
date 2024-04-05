package item.consumption;

import item.base.BaseConsumption;
import item.usage.CookState;
import item.usage.Cookable;
import item.usage.Healable;

import java.util.HashMap;

public class GoldenApple extends BaseConsumption implements Cookable, Healable {

    private CookState cookState;
    private final HashMap<CookState, Integer> RECOVER_PT;

    public GoldenApple() {
        super("GoldenApple");
        setCookState(CookState.RAW);
        RECOVER_PT = new HashMap<>();
        RECOVER_PT.put(CookState.RAW, 2);
        RECOVER_PT.put(CookState.COOKED, 5);
        RECOVER_PT.put(CookState.BURNT, 0);

    }

    @Override
    public CookState getCookState() {
        return cookState;
    }

    @Override
    public void setCookState(CookState cookState) {
        this.cookState = cookState;
    }

    @Override
    public int getRecoverPoint() {
        return RECOVER_PT.get(getCookState());
    }

    @Override
    public String toString() {
        String state = "";
        if(cookState==CookState.RAW) state="RAW";
        else if(cookState==CookState.COOKED) state="Cooked";
        else if(cookState==CookState.BURNT) state="Burnt";
        return state + " " + getName() + " (+" + getRecoverPoint() + " HP)";
    }
}
