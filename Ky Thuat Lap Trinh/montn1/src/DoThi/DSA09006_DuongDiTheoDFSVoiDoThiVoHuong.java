/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package DoThi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author anhnguyen
 */
public class DSA09006_DuongDiTheoDFSVoiDoThiVoHuong {

    static int V, E, u, v;
    static ArrayList<Integer> dsk[] = new ArrayList[1001];
    static boolean check[] = new boolean[1001];
    static int parent[] = new int[1001];

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("DATA.in"));
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            V = sc.nextInt();
            E = sc.nextInt();
            u = sc.nextInt();
            v = sc.nextInt();

            for (int i = 0; i <= 1000; i++) {
                dsk[i] = new ArrayList<>();
                check[i] = false;
                parent[i] = -1;
            }

            for (int i = 0; i < E; i++) {
                int a = sc.nextInt();
                int b = sc.nextInt();
                dsk[a].add(b);
                dsk[b].add(a);
            }

            dfs(u);
            path(u, v);
        }
    }

    public static void dfs(int u) {
        check[u] = true;

        for (int x : dsk[u]) {
            if (!check[x]) {
                parent[x] = u;
                dfs(x);
            }
        }
    }

    public static void path(int u, int v) {
        if (parent[v] == -1) {
            System.out.println("-1");
            return;
        }

        ArrayList<Integer> res = new ArrayList<>();
        res.add(v);

        while (parent[v] != -1) {
            v = parent[v];
            res.add(v);
        }

        for (int i = res.size() - 1; i >= 0; i--) {
            System.out.print(res.get(i) + " ");
        }
        System.out.println();
    }
}
