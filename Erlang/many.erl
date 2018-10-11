-module(many).
-export([many_n/1]).

many_n(1) ->
	io:format("0");
many_n(T) when T > 1 ->
	io:format("0"),
	many_n(T-1).
