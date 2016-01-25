-module(pi).
-export([pi_n/1]).

% Nilakantha series pi solver, accurate to 13ish decimal places
pi_n(N) ->
	pi(a, 2, 3, 4, 3, 1, N).
pi(S, A, B, C, L, N, T) when S == s, N < T+1 ->
	New = L - (4.0 / (A*B*C)),
	pi(a, A+2, B+2, C+2, New, N+1, T);
pi(S, A, B, C, L, N, T) when S == a, N < T+1 ->
	New = L + (4.0 / (A*B*C)),
	pi(s, A+2, B+2, C+2, New, N+1, T);
pi(S, A, B, C, L, N, T) ->
	L.

