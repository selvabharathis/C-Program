/*
 * @2020.
 */

package pelatro;
import java.util.TreeMap;
import java.util.NavigableMap;
/*
 * @author Selvabharathi S
 */
public class PelatroTwo {
    public static void main(String args[]){
        TreeMap tree = new TreeMap();
        tree.put("aa",1);
        tree.put("cc", 2);
        tree.put("ee",3);
        tree.put("gg", 4);
        NavigableMap nvMap = tree.headMap("ee",false);
        System.out.println(nvMap);
    }
}
