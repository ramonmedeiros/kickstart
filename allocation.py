
def process_dataset():
    tests = {}
    t = int(input())
    result = []
    for i in range(1, t + 1):
        houses, amount = [int(s) for s in input().split(" ")]
        prices = [int(s) for s in input().split(" ")]
        prices.sort()
        solution, maxScore = process(prices, amount, houses)
        result.append(f"Case #{i}: {len(solution)}")
    print("\n".join(result))


def process(inputList, target, length):
    current = []
    maxScore = 0
    sum = 0
    solution = []

    while((len(current) > 0 and current[0] != 0) or len(current) == 0):

        length = length - 1 

        for i in range(length):

            currentValue = inputList[i]

            tempSum = sum + currentValue

            if tempSum <= target:
                sum = tempSum
                current.append(i)

                if (tempSum == target):
                    return current, sum

        if (maxScore < sum):
            maxScore = sum
            solution = current.copy()

        if(len(current) != 0):
            lastIndex = current.pop()
            sum = sum - inputList[lastIndex]
            length = lastIndex

        if(len(current) == 0 and (length == 0)):
            break
    return solution, maxScore


process_dataset()
