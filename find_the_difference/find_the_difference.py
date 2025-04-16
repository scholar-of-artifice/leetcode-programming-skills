class Solution:
    def create_freq_map(self, s: str) -> dict:
        obs_map = {}
        # add values to map
        for c in s:
            if c in obs_map:
                obs_map[c] += 1
            else:
                obs_map.update({c: 1})
        return obs_map

    def findTheDifference(self, s: str, t: str) -> str:
        # create a frequency count map
        s_map, t_map = self.create_freq_map(s), self.create_freq_map(t)
        # use a set to store frequency count items
        s_set, t_set = set(s_map.items()), set(t_map.items())
        # find difference between 2 sets
        # there should only be 1 key remaining
        return (s_set ^ t_set).pop()[0]


class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        obs_map = {}
        # add values to map
        for c in s:
            if c in obs_map:
                obs_map[c] += 1
            else:
                obs_map.update({c: 1})
        # remove values from map
        for c in t:
            if c in obs_map:
                obs_map[c] -= 1
                # remove the entry if count is zero
                if obs_map[c] == 0:
                    del obs_map[c]
            else:
                obs_map.update({c: 1})
        # recast keys to list and grab the first item
        # there should only be 1 key remaining
        return list(obs_map.keys())[0]
