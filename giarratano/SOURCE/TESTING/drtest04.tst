(unwatch all)(clear)(set-strategy depth)(open "drtest04.rsl" drtest04 "w")(dribble-on "drtest04.out")(batch "drtest04.bat")(dribble-off)(load "compline.clp")(printout drtest04 "drtest04.bat differences are as follows:" crlf)(compare-files drtest04.exp drtest04.out drtest04); close result file(close drtest04)