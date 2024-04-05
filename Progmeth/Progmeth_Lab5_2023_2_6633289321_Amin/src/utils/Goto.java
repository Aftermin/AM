package utils;

import item.Book;
import javafx.scene.Node;
import javafx.scene.control.ScrollPane;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.paint.Paint;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.scene.text.TextAlignment;
import pane.*;
import javafx.scene.control.Button;
import utils.GetDisplay;
import javafx.scene.layout.BorderWidths;

import javax.swing.text.StyleConstants;
import java.awt.*;

public class Goto {
    private static RootPane rootPane;
    public static void clear(){
        if(getRootPane().getChildren().size()>1){
            Node first = getRootPane().getChildren().getFirst();
            getRootPane().getChildren().clear();
            getRootPane().getChildren().add(first);
        }
    }
    public static void mainPage(){
        clear();
        ScrollPane scrollPane = new ScrollPane(BookListPane.getInstance());
        scrollPane.setHbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);
        scrollPane.setVbarPolicy(ScrollPane.ScrollBarPolicy.NEVER);

        getRootPane().getChildren().add(new SearchPane());
        getRootPane().getChildren().add(scrollPane);
    }
    public static Button backToMainPageButton(){
        Button buttonBack = new Button("Back");
        buttonBack.setBorder(new Border(new BorderStroke(Color.DARKCYAN, BorderStrokeStyle.SOLID, null, new BorderWidths(2))));
        buttonBack.setBackground(Background.fill(Color.WHITE));
        buttonBack.setTextFill(Color.DARKCYAN);
        buttonBack.setPrefWidth(300);
        buttonBack.setOnMouseClicked(event -> {
            mainPage();
        });
        return buttonBack;
    }
    public static void bookPage(Book book){
        clear();
        Text name = GetDisplay.name(book,28,336,TextAlignment.CENTER);

        Text author = GetDisplay.author(book,24,336,TextAlignment.CENTER);
        author.setText("By "+book.getAuthor());

        ImageView imageView= GetDisplay.image(book,320);

        Text stars = GetDisplay.stars(book,24);

        Text description = GetDisplay.Description(book,16,336);

        getRootPane().getChildren().add(backToMainPageButton());
        getRootPane().getChildren().add(name);
        getRootPane().getChildren().add(author);
        getRootPane().getChildren().add(imageView);
        getRootPane().getChildren().add(stars);
        getRootPane().getChildren().add(description);
    }
    public static void addNewBookPage(){
        clear();
        getRootPane().getChildren().add(backToMainPageButton());

        NewBookPane newBookPane = new NewBookPane();
        getRootPane().getChildren().add(newBookPane);
    }
    public static RootPane getRootPane() {
        return rootPane;
    }

    public static void setRootPane(RootPane rootPane) {
        Goto.rootPane=rootPane;
    }
}
