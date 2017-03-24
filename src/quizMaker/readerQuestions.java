package quizMaker;

import java.io.*;
import java.util.Scanner;
import java.io.FileNotFoundException;

public class readerQuestions{
	
    public readByLine() throws FileNotFoundException
    {
        Scanner linReader = new Scanner(new File("dataFile.txt"));

        while (linReader.hasNext())
        {
            String line = linReader.nextLine();
            System.out.println(line);
        }
        linReader.close();

    }

    public static void main(String args[])  throws FileNotFoundException
    {
        new readByLine();
    }
}
