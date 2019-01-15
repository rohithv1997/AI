import java.util.Scanner;
public class predicatelogic {
public static void main(String args[])
{
Scanner scanner=new Scanner(System.in);
String string =scanner.nextLine();
String words[]=string.split(" ");
int flag=0,none=0;
Boolean all=false;
for(int i=0;i<words.length;i++)
{
if(words[i].equalsIgnoreCase("all"))
{
System.out.print("for all x("+words[++i].charAt(0)+"(x)");
all=true;
none=1;
}
else if(words[i].equalsIgnoreCase("some"))
{
System.out.print("There exists some x("+words[++i].charAt(0)+"(x)");
all=false;
none=1;
}
if(words[i].equalsIgnoreCase("not")&& all)
{
System.out.print("->not "+words[++i].charAt(0)+"(x))");
flag=1;
}
if(words[i].equalsIgnoreCase("not") && !all)
{
System.out.print("^not "+words[++i].charAt(0)+"(x))");
flag=1;
}
}
if(flag==0 && none==1)
{
System.out.print("->"+words[words.length-1]+"(x))");
}
Boolean isNot=true;
if(none==0)
{
for(int i=0;i<words.length;i++)
{
if(words[i].equalsIgnoreCase("not"))
isNot=true;
}
if(!isNot)
System.out.print(" "+words[words.length-1]+"("+words[0]+")");
else{System.out.print(" "+words[words.length-1]+"("+words[0]+")");
}
}
}
}