class Solution{ 
   public long destroyTheGarden(int n, int m, int[] arr, int[][] overlapped) { 
        // code here 
        int[] parent = new int[n]; 
        int[] rank = new int[n]; 
        for (int i = 0; i < n; i++) { 
            parent[i] = i; 
        } 
        for (int[] overlap : overlapped) { 
            union(parent, rank, overlap[0]-1, overlap[1]-1); 
        } 
         
        Map<Integer, List<Integer>> sets = new HashMap<>(); 
        for (int i = 0; i < n; i++) { 
            int p = arr[i]; 
            int s = find(parent, i); 
            sets.computeIfAbsent(s, k -> new ArrayList<>()).add(p); 
        } 
         
        long totalPoison = 0; 
        for (List<Integer> s : sets.values()) { 
            s.sort(Collections.reverseOrder()); 
            int requiredPoison = s.get(0); 
            for (int p : s) { 
                if (requiredPoison < p) { 
                    break; 
                } 
                requiredPoison = Math.max(requiredPoison, p); 
            } 
            totalPoison += requiredPoison; 
        } 
         
        return totalPoison; 
    } 
     
    private int find(int[] parent, int i) { 
        if (parent[i] != i) { 
            parent[i] = find(parent, parent[i]); 
        } 
        return parent[i]; 
    } 
     
    private void union(int[] parent, int[] rank, int i, int j) { 
        int pi = find(parent, i); 
        int pj = find(parent, j); 
        if (pi == pj) { 
            return; 
        } 
        if (rank[pi] < rank[pj]) { 
            pi ^= pj; 
            pj ^= pi; 
            pi ^= pj; 
        } 
        parent[pj] = pi; 
        if (rank[pi] == rank[pj]) { 
            rank[pi]++; 
        } 
    } 
}
