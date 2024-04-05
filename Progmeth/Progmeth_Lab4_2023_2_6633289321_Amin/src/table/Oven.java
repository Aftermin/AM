package table;

import item.base.BaseItem;
import item.usage.CookState;
import item.usage.Cookable;

public class Oven extends BaseTable{

    public Oven() {
        super("Oven");
    }

    @Override
    public String interact(BaseItem item) {
        // FILL CODE
        if(item instanceof Cookable){
            Cookable cookableItem = (Cookable) item;
            CookState cook = cookableItem.getCookState();
            if(cook==CookState.RAW){
                cookableItem.setCookState(CookState.COOKED);
                return "Cooking succeed";
            }
            else if(cook==CookState.COOKED){
                cookableItem.setCookState(CookState.BURNT);
                return  "Your food has been burnt";
            }
            else if(cook==CookState.BURNT){
                return  "Your food is already burnt, cannot be cooked anymore";
            }
        }
        return "This item cannot be cooked";
    }
}
