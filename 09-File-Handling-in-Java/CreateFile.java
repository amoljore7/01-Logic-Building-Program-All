import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.file.StandardOpenOption;
import java.util.Arrays;
import java.util.List;

class CreateFile
{
    public static void main(String[] args) throws IOException
    {
        createFileUsingFileClass();
        createFileUsingFileOutputStreamClass();
    }
    
    private static void createFileUsingFileClass() throws IOException
    {
        File file = new File("/Users/marvellous/Desktop");
        
        //Create the file
        if (file.createNewFile())
        {
            System.out.println("File is created!");
        }
        else
        {
            System.out.println("File already exists.");
        }
        
        //Write Content
        FileWriter writer = new FileWriter(file);
        writer.write("Test data");
        writer.close();
    }
    
    private static void createFileUsingFileOutputStreamClass() throws IOException
    {
        String data = "Test data";
        FileOutputStream out = new FileOutputStream("c://temp//testFile2.txt");
        out.write(data.getBytes());
        out.close();
    }
}
