package application;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.ScrollPane;
import javafx.stage.Stage;
import pane.RootPane;
import utils.Goto;

import javax.swing.*;


public class Main extends Application {

    public static void main(String[] args) {
        launch();
    }

    @Override
    public void start(Stage stage) {
        // TODO: FILL CODE HERE
        Scene scene = new Scene(RootPane.getRootPane(), 430, 932);
        stage.setScene(scene);
        stage.setTitle("Let’s Read");
        stage.setResizable(false);
        stage.show();
    }
}