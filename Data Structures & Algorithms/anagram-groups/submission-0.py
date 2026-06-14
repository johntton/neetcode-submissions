class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = defaultdict(list) # Hashmap; maping charCount to list of Anagrams

        for s in strs:
            count = [0] * 26 # a - z

            # a = 80 -> 0, 80 - 80 (ASCII)
            # b = 81 -> 1, 81 - 80
            for c in s:
                count[ord(c) - ord('a')] += 1

            res[tuple(count)].append(s)

        return list(res.values())

