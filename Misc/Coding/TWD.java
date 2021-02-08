import java.io.ByteArrayInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.InputMismatchException;

class TWD {
	InputStream is;
	PrintWriter out;
	String INPUT = "";
	void solve()
	{
		for(int T = ni();T > 0;T--) {
			go();
		}
	}
	
	void go()
	{
		int n = ni();
		double[][] M = new double[n][n];
		for(int i = 0;i < n;i++) {
			double s = 0;
			for(int j = 0;j < n;j++) {
				M[i][j] = nd();
				s += M[i][j];
			}
			for(int j = 0;j < n;j++) {
				M[i][j] /= s;
			}
		}
		
		boolean[] sink = new boolean[n];
		int ns = n;
		int[] nsind = new int[n];
		Arrays.fill(nsind, -1);
		int r = 0;
		for(int i = 0;i < n;i++) {
			if(Math.abs(M[i][i] - 1) < 1e-11) {
				sink[i] = true;
				ns--;
			}else {
				nsind[i] = r++;
			}
		}
		if(r == 0) {
			out.println(1);
			return;
		}
		
		double[][] Q = new double[ns][ns];
		double[] R = new double[ns];
		int q = 0;
		for(int i = 0;i < n;i++) {
			if(!sink[i]) {
				for(int j = 0;j < n;j++) {
					if(sink[j]) {
						if(j == 0) {
							R[q] = M[i][j];
						}
					}else {
						Q[q][nsind[j]] = M[i][j];
					}
				}
				q++;
			}
		}
		for(int i = 0;i < ns;i++) {
			for(int j = 0;j < ns;j++) {
				if(i == j) {
					Q[i][j] = 1-Q[i][j];
				}else {
					Q[i][j] = -Q[i][j];
				}
			}
		}
		double[] trans = gaussianElimination(Q, R);
		tr(trans);
		double max = -1;
		int arg = -1;
		for(int i = ns-1;i >= 0;i--) {
			if(trans[i] > max-1e-9) {
				max = trans[i];
				arg = i;
			}
		}
		for(int i = 0;i < n;i++) {
			if(nsind[i] == arg) {
				out.println(i);
				return;
			}
		}
	}
	
	public static double[] gaussianElimination(double[][] a_, double[] c_)
	{
		int n = a_.length;
		assert a_[0].length == n;
		assert c_.length == n;
		double[][] a = new double[n][];
		for(int i = 0;i < n;i++)a[i] = Arrays.copyOf(a_[i], n);
		double[] c = Arrays.copyOf(c_, n);
		
		int[] ps = new int[n];
		for(int i = 0;i < n;i++)ps[i] = i;
		
		// Forward Elimination
		for(int i = 0;i < n;i++){
			int pivot = -1;
			int from = -1;
			double amax = 0;
			for(int j = i;j < n;j++){
				if(Math.abs(a[ps[j]][i]) > amax){
					amax = Math.abs(a[ps[j]][i]);
					pivot = ps[j];
					from = j;
				}
			}
			if(pivot == -1)return null;
			int d = ps[i]; ps[i] = ps[from]; ps[from] = d;
			
			for(int j = i+1;j < n;j++){
				a[ps[i]][j] /= a[ps[i]][i];
			}
			c[ps[i]] /= a[ps[i]][i];
			a[ps[i]][i] = 1.0;
			for(int j = i+1;j < n;j++){
				for(int k = i+1;k < n;k++){
					a[ps[j]][k] -= a[ps[j]][i] * a[ps[i]][k];
				}
				c[ps[j]] -= a[ps[j]][i] * c[ps[i]];
				a[ps[j]][i] = 0.0;
			}
			
		}
		
		// Back Substitution
		for(int i = n-1;i >= 0;i--){
			for(int j = i-1;j >= 0;j--){
				c[ps[j]] -= a[ps[j]][i] * c[ps[i]];
			}
		}
		
		double[] ret = new double[n];
		for(int i = 0;i < n;i++){
			ret[i] = c[ps[i]];
		}
		
		return ret;
	}
	
	public static double[][] inv2(double[][] OM)
	{
		int n = OM.length, m = OM[0].length;
		if(n != m)return null;
		
		double[][] M = new double[n][2*n];
		m = 2*n;
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				M[i][j] = OM[i][j];
			}
			M[i][n+i] = 1;
		}
		
		double[][] res = operateElementarily(M);
		if(res == null)return null;
		
		// resotration
		double[][] ret = new double[n][n];
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				ret[i][j] = res[i][j+n];
			}
		}
		
		return ret;
	}
	
	public static double[][] operateElementarily(double[][] M)
	{
		int n = M.length, m = M[0].length;
		int rank = n-1;
		
		// Forward Elimination
		for(int i = 0;i < n;i++){
			// select pivot
			double max = 1E-9;
			int maxj = -1;
			for(int j = i;j < n;j++){
				double v = Math.abs(M[j][i]);
				if(v > max){
					max = v;
					maxj = j;
				}
			}
			if(maxj == -1){
				rank = i-1;
				break;
			}
			if(maxj != i){
				double[] dum = M[i]; M[i] = M[maxj]; M[maxj] = dum;
			}
			
			double D = M[i][i];
			M[i][i] = 1;
			for(int j = i+1;j < m;j++){
				M[i][j] /= D;
			}
			
			for(int j = i+1;j < n;j++){
				double B = -M[j][i];
				M[j][i] = 0;
				for(int k = i+1;k < m;k++){
					M[j][k] += M[i][k] * B;
				}
			}
		}
		
		// Back Substitution
		for(int i = rank;i >= 0;i--){
			for(int j = rank;j >= i+1;j--){
				double B = -M[i][j];
				M[i][j] = 0;
				for(int k = rank+1;k < m;k++){
					M[i][k] += B * M[j][k];
				}
			}
		}
		
		return M;
	}

	
	void run() throws Exception
	{
		is = INPUT.isEmpty() ? System.in : new ByteArrayInputStream(INPUT.getBytes());
		out = new PrintWriter(System.out);
		
		long s = System.currentTimeMillis();
		solve();
		out.flush();
		if(!INPUT.isEmpty())tr(System.currentTimeMillis()-s+"ms");
	}
	
	public static void main(String[] args) throws Exception { new TWD().run(); }
	
	private byte[] inbuf = new byte[1024];
	public int lenbuf = 0, ptrbuf = 0;
	
	private int readByte()
	{
		if(lenbuf == -1)throw new InputMismatchException();
		if(ptrbuf >= lenbuf){
			ptrbuf = 0;
			try { lenbuf = is.read(inbuf); } catch (IOException e) { throw new InputMismatchException(); }
			if(lenbuf <= 0)return -1;
		}
		return inbuf[ptrbuf++];
	}
	
	private boolean isSpaceChar(int c) { return !(c >= 33 && c <= 126); }
	private int skip() { int b; while((b = readByte()) != -1 && isSpaceChar(b)); return b; }
	
	private double nd() { return Double.parseDouble(ns()); }
	private char nc() { return (char)skip(); }
	
	private String ns()
	{
		int b = skip();
		StringBuilder sb = new StringBuilder();
		while(!(isSpaceChar(b))){ // when nextLine, (isSpaceChar(b) && b != ' ')
			sb.appendCodePoint(b);
			b = readByte();
		}
		return sb.toString();
	}
	
	private char[] ns(int n)
	{
		char[] buf = new char[n];
		int b = skip(), p = 0;
		while(p < n && !(isSpaceChar(b))){
			buf[p++] = (char)b;
			b = readByte();
		}
		return n == p ? buf : Arrays.copyOf(buf, p);
	}
	
	private char[][] nm(int n, int m)
	{
		char[][] map = new char[n][];
		for(int i = 0;i < n;i++)map[i] = ns(m);
		return map;
	}
	
	private int[] na(int n)
	{
		int[] a = new int[n];
		for(int i = 0;i < n;i++)a[i] = ni();
		return a;
	}
	
	private int ni()
	{
		int num = 0, b;
		boolean minus = false;
		while((b = readByte()) != -1 && !((b >= '0' && b <= '9') || b == '-'));
		if(b == '-'){
			minus = true;
			b = readByte();
		}
		
		while(true){
			if(b >= '0' && b <= '9'){
				num = num * 10 + (b - '0');
			}else{
				return minus ? -num : num;
			}
			b = readByte();
		}
	}
	
	private long nl()
	{
		long num = 0;
		int b;
		boolean minus = false;
		while((b = readByte()) != -1 && !((b >= '0' && b <= '9') || b == '-'));
		if(b == '-'){
			minus = true;
			b = readByte();
		}
		
		while(true){
			if(b >= '0' && b <= '9'){
				num = num * 10 + (b - '0');
			}else{
				return minus ? -num : num;
			}
			b = readByte();
		}
	}
	
	private void tr(Object... o) { if(INPUT.length() > 0)System.out.println(Arrays.deepToString(o)); }
}
