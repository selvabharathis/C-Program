/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class ASeven{
    int i=10;
}
class BSeven extends ASeven{
    int i=20;
}
public class PelatroSeven {
    public static void main(String[] args){
        ASeven a = new BSeven();
        System.out.println(a.i);
    }
}
