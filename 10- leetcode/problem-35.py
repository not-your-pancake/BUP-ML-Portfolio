nums = [1,3,5,6]
target = 7

high = len(nums) - 1
low = 0
mid = 0
found = False
# when the target doesn't belong in the nums print the location of the mid
while low <= high:
    mid = (high + low) // 2

    if nums[mid] == target:
        print(mid)
        found = True
        break
    elif target > nums[mid]:
        low = mid + 1
    else:
        high = mid - 1

if not found:
    print(low)
