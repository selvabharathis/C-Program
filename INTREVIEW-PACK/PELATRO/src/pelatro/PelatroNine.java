/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class BaseNine{
    final public void show(){
        System.out.println("Base::show() called");
    }
}
class DerivedNine extends BaseNine{
    public void show(){
        System.out.println("Derived::show() called");
    }
}
public class PelatroNine {
    public static void main(String[] args){
        BaseNine b = new DerivedNine();
        b.show();
    }
}
