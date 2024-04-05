package gui;

import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.layout.Border;
import javafx.scene.layout.BorderStroke;
import javafx.scene.layout.BorderStrokeStyle;
import javafx.scene.layout.BorderWidths;
import javafx.scene.layout.CornerRadii;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import logic.GameLogic;

public class ControlPane extends VBox{
	
	private Text gameText;
	private Button newGameButton;
	private TicTacToePane ticTacToePane;
	
	public ControlPane(TicTacToePane ticTacToePane) {
		super();
		this.ticTacToePane = ticTacToePane;
		//To be implemented
		setAlignment(Pos.CENTER);
		setPrefWidth(300);
		setSpacing(20);
		initializeGameText();
		initializeNewGameButton();

		
	}
	
	private void initializeGameText() {
		//To be implemented
		Text text=new Text("O Turn");
		text.setFont(Font.font(35));
		getChildren().add(text);
	}
	
	public void updateGameText(String text) {
		//To be implemented
		setAccessibleText(text);
	}
	
	private void initializeNewGameButton() {
		//To be implemented
		Button button = new Button("New Game");
		button.setPrefWidth(100);
		button.setOnAction(event ->{
			newGameButtonHandler();
		});
		getChildren().add(button);
		
	}
	
	private void newGameButtonHandler() {
		//To be implemented
		GameLogic.getInstance().newGame();
		updateGameText("O Turn");

		
	}
}
