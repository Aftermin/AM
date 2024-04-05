package pane;

import item.Book;
import javafx.css.Style;
import javafx.geometry.HPos;
import javafx.geometry.Insets;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.shape.StrokeType;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.scene.shape.StrokeType;
import utils.Goto;

import java.util.ArrayList;

public class NewBookPane extends GridPane {
    public NewBookPane(){
        this.setPadding(new Insets(12));
        this.setVgap(8);

        TextField name = input();
        TextField author = input();
        TextField rating = input();
        TextField image = input();
        TextField description = input();

        ColumnConstraints columnConstraints1 = new ColumnConstraints();
        columnConstraints1.setPercentWidth(25);
        columnConstraints1.setHalignment(HPos.RIGHT);
        ColumnConstraints columnConstraints2 = new ColumnConstraints();
        columnConstraints2.setPercentWidth(75);
        columnConstraints2.setHalignment(HPos.LEFT);

        getColumnConstraints().addAll(columnConstraints1, columnConstraints2);

        Button button = new Button("Add");
        button.setMaxWidth(430);
        button.setPrefHeight(32);
        button.setTextFill(Color.WHITE);
        button.setBackground(Background.fill(Color.DARKCYAN));
        button.setOnMouseClicked(mouseEvent ->{
            handleClick(name.getText(),author.getText(),rating.getText(),image.getText(),description.getText());
        });

        add(label("Title: "),0,0);
        add(label("Author: "),0,1);
        add(label("Rating: "),0,2);
        add(label("Image: "),0,3);
        add(label("Description: "),0,4);

        add(name,1,0);
        add(author,1,1);
        add(rating,1,2);
        add(image,1,3);
        add(description,1,4);

        add(button, 0, 5, 2, 1);

    }
    private Text label(String s){
        Text text = new Text(s);
        text.setFont(Font.font(16));
        return text;
    }
    private TextField input(){
        TextField textField = new TextField();
        textField.setBackground(new Background(new BackgroundFill(Color.WHITE,new CornerRadii(16),null)));
        textField.setBorder(new Border(new BorderStroke(Color.DARKCYAN, BorderStrokeStyle.SOLID, new CornerRadii(16), null)));
        return textField;
    }
    private void handleClick(String name, String author, String rating, String image, String description){
        if(name.isBlank()||author.isBlank()||rating.isBlank()||image.isBlank()||description.isBlank()){
            return;
        }
        Book book = new Book(name,author,rating,image,description);
        ArrayList<Book> booklist = BookListPane.getInstance().getBooks();
        booklist.add(book);
        BookListPane.getInstance().setSearchedBooks(booklist);
        Goto.mainPage();
    }
}
