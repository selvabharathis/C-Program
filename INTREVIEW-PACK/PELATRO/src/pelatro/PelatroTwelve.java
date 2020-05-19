/*
 * @2020.
 */

package pelatro;
import java.util.Arrays;
import java.util.Set;
import java.util.TreeSet;
/*
 * @author Selvabharathi S
 */
public class PelatroTwelve extends Thread {
    public static void main(String[] args){
        Integer[] arr = {7,5,7,3};
        Set set = new TreeSet(Arrays.asList(arr));
        set.add(4);
        for(Integer value:set){// it is an object
            System.out.print(value);
        }
    }
}
