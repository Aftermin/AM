package utils;

import javafx.scene.image.ImageView;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.scene.text.TextAlignment;
import item.Book;


public class GetDisplay {
    public static Text Description(Book book, int fontSize, int wrappingWidth){
        Text text = new Text(book.getDescription());
        text.setFont(Font.font(fontSize));
        text.setWrappingWidth(wrappingWidth);
        return text;
    }
    public static ImageView image(Book book, int fitHeight){
        ImageView imageView = new ImageView(book.getImage());
        imageView.setPreserveRatio(true);
        imageView.setFitHeight(fitHeight);
        return  imageView;
    }
    public static Text name(Book book, int fontSize, int wrappingWidth, TextAlignment textAlignment){
        Text text = new Text(book.getName());
        text.setFont(Font.font(fontSize));
        text.setWrappingWidth(wrappingWidth);
        text.setTextAlignment(textAlignment);
        return text;
    }
    public static Text author(Book book, int fontSize, int wrappingWidth, TextAlignment textAlignment){
        Text text = new Text(book.getAuthor());
        text.setFill(Color.GRAY);
        text.setFont(Font.font(fontSize));
        text.setWrappingWidth(wrappingWidth);
        text.setTextAlignment(textAlignment);
        return text;
    }
    public static Text stars(Book book, int fontSize){
        Text text = new Text();
        text.setText("\u2605".repeat(book.getStars())+"\u2606".repeat((5-book.getStars())));
        text.setFill(Color.DARKRED);
        text.setFont(Font.font(fontSize));
        return text;
    }
}
