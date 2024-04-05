import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.stage.Stage;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class UnoGame extends Application {

	private static final int NUM_CARDS = 7;
	private static final List<String> COLORS = Arrays.asList("Red", "Blue", "Green", "Yellow");
	private static final List<String> VALUES = Arrays.asList("0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "Skip", "Reverse", "Draw Two");

	private List<String> deck;
	private List<String>[] playersCards;
	private int currentPlayerIndex = 0;

	private Label currentPlayerLabel;
	private VBox[] playerCardsPanes;

	@Override
	public void start(Stage primaryStage) {
		// Initialize deck and shuffle it
		initializeDeck();

		// Initialize players' cards
		playersCards = new List[2];
		for (int i = 0; i < 2; i++) {
			playersCards[i] = drawCards(NUM_CARDS);
		}

		// Create UI elements
		BorderPane root = new BorderPane();
		root.setPadding(new Insets(20));
		Scene scene = new Scene(root, 800, 600);

		// Top - Current player label
		currentPlayerLabel = new Label("Current Player: Player 1");
		currentPlayerLabel.setFont(Font.font("Arial", FontWeight.BOLD, 16));
		root.setTop(currentPlayerLabel);
		BorderPane.setAlignment(currentPlayerLabel, Pos.CENTER);

		// Center - Player cards
		playerCardsPanes = new VBox[2];
		for (int i = 0; i < 2; i++) {
			playerCardsPanes[i] = new VBox(10);
			playerCardsPanes[i].setAlignment(Pos.CENTER);
			updatePlayerCards(i);
		}
		HBox centerBox = new HBox(20, playerCardsPanes[0], playerCardsPanes[1]);
		centerBox.setAlignment(Pos.CENTER);
		root.setCenter(centerBox);

		// Bottom - Draw button
		Button drawButton = new Button("Draw Card");
		drawButton.setOnAction(e -> {
			drawCard();
			updatePlayerCards(currentPlayerIndex);
		});
		HBox bottomBox = new HBox(20, drawButton);
		bottomBox.setAlignment(Pos.CENTER);
		root.setBottom(bottomBox);

		// Set up the stage
		primaryStage.setScene(scene);
		primaryStage.setTitle("UNO Game");
		primaryStage.show();
	}

	private void initializeDeck() {
		deck = new ArrayList<>();
		for (String color : COLORS) {
			for (String value : VALUES) {
				deck.add(color + " " + value);
			}
		}
		Collections.shuffle(deck);
	}

	private List<String> drawCards(int numCards) {
		List<String> drawnCards = new ArrayList<>();
		for (int i = 0; i < numCards; i++) {
			drawnCards.add(deck.remove(0));
		}
		return drawnCards;
	}

	private void drawCard() {
		if (!deck.isEmpty()) {
			playersCards[currentPlayerIndex].add(deck.remove(0));
		}
	}

	private void updatePlayerCards(int playerIndex) {
		playerCardsPanes[playerIndex].getChildren().clear();
		for (String card : playersCards[playerIndex]) {
			Label cardLabel = new Label(card);
			cardLabel.setFont(Font.font("Arial", FontWeight.BOLD, 14));
			cardLabel.setPadding(new Insets(5));
			cardLabel.setBorder(new Border(new BorderStroke(Color.BLACK, BorderStrokeStyle.SOLID, CornerRadii.EMPTY, BorderWidths.DEFAULT)));
			playerCardsPanes[playerIndex].getChildren().add(cardLabel);
		}
	}

	public static void main(String[] args) {
		launch(args);
	}
}
