def count_elements_less_than_equal(arr, target):
    left, right = 0, len(arr) - 1
    result = -1  # Initialize result to an invalid value
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if arr[mid] <= target:
            result = mid  # Update result and continue searching on the right side
            left = mid + 1
        else:
            right = mid - 1  # Search on the left side
    
    return result + 1  # Add 1 to the result as the index is 0-based

# Example usage
arr = [1, 2, 4, 5, 8, 10]
target = 9
result = count_elements_less_than_equal(arr, target)
print(result)  # Output: 5
