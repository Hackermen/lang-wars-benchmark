package main

import (
	"strconv"
)

func main() {
	max := 10000000
	abacate := []byte("abacate")
	palmeiras := []byte("palmeiras")
	for i := 0; i < max; i++ {
		i_str := strconv.Itoa(i)
		s1 := append(abacate, []byte(i_str)...)
		s2 := append(palmeiras, []byte(i_str)...)
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
