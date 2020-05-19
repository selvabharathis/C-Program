/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class Super{
    public int i=0;
    public Super(String text){
        i = 1;
    }
}
class Sub extends Super{
    public Sub(String text){
        i = 2;
    }
}
public class PelatroEleven {
    public static void main(String args[]){
        Super sub = new Super("Hello");
        System.out.println("i = "+sub.i);
    }
}
