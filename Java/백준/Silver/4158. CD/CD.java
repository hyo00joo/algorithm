import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // StringTokenizer tk = new StringTokenizer(br.readLine());
        int st, ed, mid;
        String input;
        
        while ((input = br.readLine() )!= null) {
            
            String[] counts = input.split(" ");
            int n = Integer.parseInt(counts[0]);
            int m = Integer.parseInt(counts[1]);
            if (n + m == 0)
                break;

            int[] sang = new int[n];
            int[] sun = new int[m];

            for (int i = 0; i < n; ++i) {
                sang[i] = Integer.parseInt(br.readLine());
            }
            for (int i = 0; i < m; ++i) {
                sun[i] = Integer.parseInt(br.readLine());
            }

            int res = 0;
            st = 0;

            for (int i = 0; i < m; ++i) {
                ed = sang.length - 1;
                mid = (st + ed) / 2;
                while (st <= ed) {
                    if (sang[mid] > sun[i]) {
                        ed = mid - 1;
                    } else if (sang[mid] < sun[i]) {
                        st = mid + 1;
                    } else {
                        res++;
                        break;
                    }
                    mid = (st + ed) / 2;

                }

            }
            System.out.println(res);
            
        }
    }
}