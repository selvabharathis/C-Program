/*
 * @2020.
 */

package pelatro;

/*
 * @author Selvabharathi S
 */
class BaseFour{
    public void show(){
        System.out.println("Base::show() called");
    }
}
class DerivedFour extends BaseFour{
    public void show(){
        System.out.println("Derived::show() called");
    }
}
public class PelatroFour {
    public static void main(String[] args){
        BaseFour b = new BaseFour();
        b.show();
    }
}
