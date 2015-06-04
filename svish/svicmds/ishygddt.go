package main

// This program does not open castanza.txt when run due to a change in scope
// this error is known and a solution should be made where castanza.txt is in a known location (i.e. on SVIOS)

// no time because not in the main code...for obvious reasons
//import "time"
import "fmt"
import "svi"

func main() {
	fmt.Println("Running 'rm -rf /' for you...I'm so sorry...")
	//time.Sleep(5 * time.Second)
	fmt.Println(">implinko")
	//time.Sleep(2 * time.Second)
	fmt.Println("I shiggy diggy")
	//time.Sleep(2 * time.Second)
	castanza, _ := svi.Filereader("castanza.txt")
	for n := 0; n < len(castanza)-1; n +=1 {
		fmt.Println(castanza[n])
	}
}
