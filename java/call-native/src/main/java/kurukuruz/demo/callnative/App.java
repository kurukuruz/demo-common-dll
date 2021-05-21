package kurukuruz.demo.callnative;

import com.sun.jna.Library;
import com.sun.jna.Native;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
    	byte[] buf = new byte[256];
    	boolean result = NativeMethods.INSTANCE.my_func_a("kurukuruz", buf);
    	System.out.println("result: " + result);
    	System.out.println("out_str: " + Native.toString(buf));
    }

    public interface NativeMethods extends Library {
    	NativeMethods INSTANCE = Native.load("..\\..\\common-dll\\dest\\my_common_lib.dll", NativeMethods.class);
    	public boolean my_func_a( String in_str, byte[] out_str );
    }
}
