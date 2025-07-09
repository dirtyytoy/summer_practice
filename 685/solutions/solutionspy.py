def solve():
    a1, a2, a3, b1, b2, b3 = map(int, input().split())
    prices = [a1, a2, a3]
    capacities = [b1, b2, b3]
    prices_sorted = sorted(prices, reverse=True)
    capacities_sorted = sorted(capacities, reverse=True)
    total = sum(p * c for p, c in zip(prices_sorted, capacities_sorted))
    print(total)

if __name__ == "__main__":
    solve()