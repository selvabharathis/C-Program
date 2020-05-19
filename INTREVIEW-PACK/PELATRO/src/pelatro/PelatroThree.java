/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class BaseThree{
    public void show(){
        System.out.println("Base::show() called");
    }
}

class DerivedThree extends BaseThree{
    public void show(){
        System.out.println("Derived::show() called");
    }
}
public class PelatroThree {
    public static void main(String[] args){
        BaseThree b = new DerivedThree();
        b.show();
    }
}
