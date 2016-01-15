-module(tut1).
-export([fac/1, mul/2]).

fac(1) ->
	1;
fac(N) ->
	N * fac(N-1).

mul(X, Y) ->
	X * Y.

