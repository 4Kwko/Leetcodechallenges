# Leetcode challenges (C)

**Português** · [English](#english)

Soluções em C para problemas do LeetCode, escritas enquanto estudo algoritmos e estruturas de dados. É um repositório de estudo, com problemas introdutórios; algumas soluções usam a abordagem mais direta, e não a mais eficiente. As versões em C++ de alguns problemas estão em [cpp](https://github.com/4Kwko/cpp).

| Problema | Arquivo | Abordagem | Complexidade |
| --- | --- | --- | --- |
| [1. Two Sum](https://leetcode.com/problems/two-sum/) | [twosum.c](twosum.c) | Força bruta: testa todos os pares | O(n²) tempo, O(1) espaço |
| [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/) | [palindromenumber.c](palindromenumber.c) | Separa os dígitos, monta o número invertido e compara | O(d), d = número de dígitos |
| [69. Sqrt(x)](https://leetcode.com/problems/sqrtx/) | [sqrtx.c](sqrtx.c) | Soma números ímpares consecutivos (1 + 3 + 5 + … = k²) até passar de x | O(√x) |
| [392. Is Subsequence](https://leetcode.com/problems/is-subsequence/) | [IsSubsequence.c](IsSubsequence.c) | Dois ponteiros: avança em `s` a cada caractere igual encontrado em `t` | O(n + m) |
| [1768. Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | [MergeStringsAlternately.c](MergeStringsAlternately.c) | Intercala até o tamanho da menor string e copia o restante da maior | O(n + m) |
| [2239. Find Closest Number to Zero](https://leetcode.com/problems/find-closest-number-to-zero/) | [FindClosestNumbertoZero.c](FindClosestNumbertoZero.c) | Uma passada guardando a menor distância até zero | O(n) |

Fora do LeetCode, [cypher.c](cypher.c) é um programa de terminal com a cifra de César para letras minúsculas.

Os arquivos de problemas seguem o formato do LeetCode: só a função pedida, sem `main` nem `#include`.

## English

C solutions to LeetCode problems, written while I study algorithms and data structures. This is a study repository with introductory problems; some solutions take the most direct route rather than the most efficient one. C++ versions of some problems live in [cpp](https://github.com/4Kwko/cpp).

| Problem | Approach | Complexity |
| --- | --- | --- |
| Two Sum | Brute force over every pair | O(n²) time, O(1) space |
| Palindrome Number | Split the digits, rebuild the number reversed and compare | O(d), d = number of digits |
| Sqrt(x) | Add consecutive odd numbers (1 + 3 + 5 + … = k²) until the sum passes x | O(√x) |
| Is Subsequence | Two pointers: advance in `s` on every matching character of `t` | O(n + m) |
| Merge Strings Alternately | Interleave up to the shorter length, then copy the rest of the longer string | O(n + m) |
| Find Closest Number to Zero | Single pass keeping the smallest distance to zero | O(n) |

Outside LeetCode, [cypher.c](cypher.c) is a terminal program implementing the Caesar cipher for lowercase letters.

Problem files follow the LeetCode format: only the requested function, without `main` or `#include`.
