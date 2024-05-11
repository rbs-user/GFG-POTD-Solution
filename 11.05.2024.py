# 11.05.2024 gfg potd solution python
class Solution:
    def jugglerSequence(self, n):
        # code here
        ans = []
        ans.append(n)

        while ans[-1] > 1:
            sqrt_n = (ans[-1] ** 0.5)
            next_term = int(sqrt_n) if ans[-1] % 2 == 0 else int(sqrt_n ** 3)
            ans.append(next_term)

        return ans
