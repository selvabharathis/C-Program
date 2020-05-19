/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class A{
    A(){
        System.out.println("Created A");
    }  
}
class B extends A{
    B(){
        System.out.println("Created B");
    }
}
public class PelatroFive {
    public static void main(String arg[]){
        B b = new B();
    }
}
