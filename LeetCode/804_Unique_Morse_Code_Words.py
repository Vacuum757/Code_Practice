class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        code = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        size = len(words)
        output = []
        for i in words:
            word = ""
            for j in i:
                word += code[ord(j)-ord('a')]
            add = 1
            for j in output:
                if word == j:
                    add = 0
            if add == 1:
                output.append(word)
        return len(output)
