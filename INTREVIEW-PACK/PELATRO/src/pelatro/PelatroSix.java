/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class BaseFive{
    public void foo(){
        System.out.println("Base");
    }
}
class DerivedFive extends BaseFive{
    private void foo(){
        System.out.println("Derived");
    }
}
public class PelatroSix {
    public static void main(String args[]){
        BaseFive b = new DerivedFive();
        b.foo();
    }
}
