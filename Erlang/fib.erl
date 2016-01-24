-module(fib).
-export([fib_n/1]).

fib_n(1) -> 
	0;
fib_n(2) ->
	1;
fib_n(X) ->
	fibonacci(1, 1, 3, X).
fibonacci(A, B, N, T) when N < T+1 ->
	fibonacci(B, A+B, N+1, T);
fibonacci(A, B, N, T) ->
	io:format("~w~n", [A]).
	
