package main

import (
"fmt"
//"strings"
"os"
//"os/exec"
"syscall"
)

/* 
All basic functions should be hard-coded

Flow: findcmd -> whichcmd -> runcmd -> [cmd]
*/

func findcmd(usrinpt []string)(towhichcmd string, loopalive bool) {
	//var args string
	//plchldr := make([]string, 99)
	//args := make([]string, 99)
	//app := make([]string, 99)
	loopalive = true
	env := os.Environ()

	if usrinpt[0] == "ping" {
		fmt.Println("pong")
		towhichcmd = "ping"
	} else if usrinpt[0] == "exit" {
		loopalive = false
	} else {
		//args := make([]string, 99)
		
		//plchldr := strings.Split(usrinpt, " ")
		app := usrinpt[0]
		//args := plchldr[1]

		//napp := strings.Split(app, "")
		//nargs := strings.Split(args, "")

		
		fmt.Println(app, usrinpt[0:])

		//cmd := exec.Command(app, plchldr[0:])
		cmd := syscall.Exec(app, usrinpt[0:], env)
		//stdout, err := cmd.Output()
		
		/* 
		if err != nil {
			println(err.Error())
			return 
		} */

		
		if cmd != nil {
			panic(cmd)
		} 
		

		print(usrinpt[0], usrinpt[0:])
		
		towhichcmd = usrinpt[0]
	}

	return
}


func main() {
usrin := make([]string, 99)
usrin[0] = "meep"
var whichin string
loopstate := true

for loopstate == true {
prompt := "SVI% "
	
	fmt.Print(prompt)
	for n := 0; (usrin[n]) != ""; n+=1 {
		fmt.Scan(&usrin[n])
	}

	//usrin = strings.ToLower(usrin[0])
	whichin, loopstate = findcmd(usrin)
	fmt.Println(whichin)

} //end "for"
fmt.Println("Bye! :)")
} 
