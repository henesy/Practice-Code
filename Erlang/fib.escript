#!/usr/bin/escript
%% -*- erlang -*-
%%! -smp enable -sname fib -mnesia debug verbose
-mode(compile).
main([String]) ->
	try
		N = list_to_integer(String),
		R = fib_n(N),
		io:format("~w~n", [R])
	catch
		_:_ ->
			usage()
	end;
main(_) ->
	usage().

usage() ->
	io:format("usage: fib [integer]~n"),
	halt(1).
fib_n(1) -> 
	0;
fib_n(2) ->
	1;
fib_n(X) ->
	fibonacci(1, 1, 3, X).
fibonacci(A, B, N, T) when N < T+1 ->
	fibonacci(B, A+B, N+1, T);
fibonacci(A, B, N, T) ->
	A.
	
