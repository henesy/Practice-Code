#!/usr/bin/escript
%% -*- erlang -*-
%%! -smp enable -sname fib -mnesia debug verbose
-mode(compile).
main([String]) ->
	try
		N = list_to_integer(String),
		many_n(N)
	catch
		_:_ ->
			usage()
	end;

main(_) ->
	usage().

usage() ->
	io:format("usage: many [uint]~n"),
	halt(1).

many_n(1) ->
	io:format("0");
many_n(T) when T > 1 ->
	io:format("0"),
	many_n(T-1).
