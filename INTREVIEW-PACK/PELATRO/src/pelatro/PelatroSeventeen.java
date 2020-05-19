/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class ASeventeen{
    ASeventeen(){
        System.out.println("Created A");
    }
}
class BSeventeen extends ASeventeen{
    BSeventeen(){
        System.out.println("Created B");
    }
}
public class PelatroSeventeen {
    public static void main(String arg[]){
        BSeventeen b = new BSeventeen();
    }
}
