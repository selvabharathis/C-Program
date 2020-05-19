/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class ASixteen{
    String s= "Class A";
}
class BSixteen extends ASixteen{
    String s= "Class B";
    {
        System.out.println(super.s);
    }
}
public class PelatroSixteen {
    public static void main(String[] args){
        ASixteen c = new ASixteen();
        System.out.println(c.s);
    }
}
