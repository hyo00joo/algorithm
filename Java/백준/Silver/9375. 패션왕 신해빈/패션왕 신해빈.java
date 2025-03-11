import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();



        for(int i = 1; i <= n; i++) {
            int m = scanner.nextInt();

            Map<String, Integer> clothes = new HashMap<>();
            for(int j = 1; j <= m; j++) {
                scanner.next();
                String c = scanner.next();
                clothes.put(c, clothes.getOrDefault(c, 0) + 1);
            }
            int result = 1;
            for (int cnt : clothes.values()) {
                result *= (cnt + 1);
            }
            System.out.println(result - 1);
        }
    }
}