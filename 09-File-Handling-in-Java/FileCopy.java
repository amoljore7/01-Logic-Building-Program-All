import java.io.*;

class FileCopy
{
    public static void main(String args[]) throws IOException
    {
        FileInputStream in = new FileInputStream("input.txt");
        FileOutputStream out = new FileOutputStream("output.txt");
        int c;
        while ((c = in.read()) != -1)
        {
            out.write(c);
        }
    }
}

/*

 import java.io.*;

 class CopyFile
 {
 public static void main(String args[]) throws IOException 
{
    FileReader in = null;
    FileWriter out = null;
    try{
        in = new FileReader("input.txt");
        out = new FileWriter("output.txt");
 
        int c;
        while ((c = in.read()) != -1)
        {
            out.write(c);
        }
    }
    
    finally
    {
        if (in != null)
        {
            in.close();
        }
        if (out != null)
        {
            out.close();
        }
    }
    }
 }


*/




















