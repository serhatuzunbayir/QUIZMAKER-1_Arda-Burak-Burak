package quizMaker;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

public class insertQuestions {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Enter Text: ");
        Scanner scan = new Scanner(System.in);
        String text = scan.nextLine();
        FileWriter fWriter = null;
        FileReader fReader = null;
        BufferedWriter writer = null;
        BufferedReader reader = null;
        try {
          fReader = new FileReader("questions.txt");
          reader = new BufferedReader(fReader);
          String readQuestions = reader.read();
          fWriter = new FileWriter("questions.txt");
          writer = new BufferedWriter(fWriter);
          writer.write(readQuestions); 
          writer.write("\n"); 
          writer.write(text);
          writer.close();
          System.err.println("Your questions was saved.");
        } catch (Exception e) {
            System.out.println("Error!");
        }
	}

}
