package pane;

import item.Book;
import javafx.geometry.Pos;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.Background;
import javafx.scene.layout.HBox;
import javafx.scene.paint.Color;

import java.util.ArrayList;

public class SearchPane extends HBox {
    public SearchPane(){
        this.setAlignment(Pos.CENTER);
        TextField textField= new TextField();
        textField.setPromptText("Find the book");
        textField.setPrefWidth(250);

        Button button = new Button("Search");
        button.setBackground(Background.fill(Color.DARKCYAN));
        button.setTextFill(Color.WHITE);
        button.setOnMouseClicked(event -> {
            // TODO FILL CODE
            if (textField.getText().isEmpty()) {
                BookListPane.getInstance().setSearchedBooks(BookListPane.getInstance().getBooks());
            } else {
                ArrayList<Book> bookList = new ArrayList<>();

                for (Book book : BookListPane.getInstance().getBooks()) {
                    if (book.getName().contains(textField.getText())) {
                        bookList.add(book);
                    }
                }

                BookListPane.getInstance().setSearchedBooks(bookList);
            }
        });
        this.getChildren().add(textField);
        this.getChildren().add(button);
    }
}
