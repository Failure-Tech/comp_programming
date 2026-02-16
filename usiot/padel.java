package org.example;
import java.util.Scanner;

public class padel {
    public static int countgamesfrom(int[] p, int s, int n) {
        int games = 0;
        int score1 = 0;
        int score2 = 0;
        for (int i = s; i < n; i++) {
            if (p[i] == 1) {
                score1++;
            }
            else {
                score2++;
            }
            if (((score1 >= 4) || (score2 >= 4)) && (Math.abs(score1 - score2) >= 2)) {
                games++;
                score1 = 0;
                score2 = 0;
            }
        }
        return games;
    }
    public static void main(String[] args) {
        Scanner hello = new Scanner(System.in);
        int t = hello.nextInt();
        for (int i = 0; i < t; i++) {
            int n = hello.nextInt();
            hello.nextLine();
            String line = hello.nextLine().trim();
            String[] thefakeList = line.split("\\s+");
            int[] therealList = new int[thefakeList.length];
            for (int pp = 0; pp < therealList.length; pp++) {
                therealList[pp] = Integer.parseInt(thefakeList[pp]);
            }
            int bestgames = 0;

            for (int j = 0; j < n; j++) {
                int games = countgamesfrom(therealList, j, n);
                if (games > bestgames) {
                    bestgames = games;
                }
            }
            System.out.println(bestgames);
        }
    }
}
/*
3
5
1 1 1 1 1
13
2 2 1 2 1 2 2 2 1 1 2 2 2
8
1 2 1 2 1 2 1 2
 */
