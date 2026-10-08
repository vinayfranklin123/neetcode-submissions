class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res = defaultdict(int)

        for n in nums:
            res[n] += 1

        sorted_nums = sorted(res, key=res.get, reverse=True)
        return sorted_nums[:k]