package main

import (
"fmt"
"strings"
"os"
"os/exec"
"bufio"
//"syscall"
)

/*
All basic functions should be hard-coded

Flow: findcmd -> whichcmd -> runcmd -> [cmd]
*/

func findcmd(usrinpt []string)(towhichcmd string, loopalive bool) {
	loopalive = true
	//env := os.Environ()

	if usrinpt[0] == "ping" {
		fmt.Println("pong")
		towhichcmd = "ping"
	} else if usrinpt[0] == "exit" {
		loopalive = false
	} else {
		app := usrinpt[0]

		fmt.Println(app, usrinpt[0:])

		cmd := exec.Command(app, usrinpt...)
		//cmd := syscall.Exec(app, usrinpt[0:], env)
		//stdout, err := cmd.Output()

		/*
		if err != nil {
			println(err.Error())
			return
		} */


		if cmd != nil {
			panic(cmd)
		}


		//print(usrinpt[0], usrinpt[0:])

		towhichcmd = usrinpt[0]
	}

	return
}


func main() {
reader := os.Stdin
scanner := bufio.NewScanner(reader)
//usrin := make([]string, 99)
//usrin[0] = "meep"
var whichin string
loopstate := true

for loopstate == true {
	prompt := "SVI% "

	fmt.Print(prompt)
	scanerr := scanner.Scan()
	if scanerr == false {
	fmt.Println("Whoops! Scanner broke!")
	}
	usrin := scanner.Text()
	newstringz := strings.SplitN(usrin, " ", 2)

	//usrin = strings.ToLower(usrin)
	whichin, loopstate = findcmd(newstringz)
	fmt.Println(whichin)

} //end "for"
fmt.Println("Bye! :)")
}
