package main

import (
	"strconv"
)

func main() {
	max := 10000000
	s1_base := []byte("ABCDEFH")
	s2_base := []byte("123456789")
	for i := 0; i < max; i++ {
		i_str := strconv.Itoa(i)
		s1 := append(s1_base, []byte(i_str)...)
		s2 := append(s2_base, []byte(i_str)...)
		result := make([]byte, 0, 100)
		x := 0
		if len(s1) < len(s2) {
			for x < len(s1) {
				result = append(result, s1[x] + s2[x])
				x++
			}
			result = append(result, s2[x:]...)
		} else {
			for x < len(s2) {
				result = append(result, s1[x] + s2[x])
				x++
			}
			result = append(result, s1[x:]...)
		}
	}
}
