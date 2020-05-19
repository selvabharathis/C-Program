/*
 * @2020.
 */

package pelatro;
import java.util.ArrayList;
import java.util.List;     
/*
 * @author Selvabharathi S
 */
interface chewable{
    
}
class Gum implements chewable{
    
}
class Meat implements chewable{
    
}
public class PelatroThirteen {
    public static void main(String[] args){
        List list1 = new ArrayList();
        list1.add(new Gum());
        list1.add(new Meat());
        list1.add(new Integer(9));
        System.out.println(list1.size());
    }
}
