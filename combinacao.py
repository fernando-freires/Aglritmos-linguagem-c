def fatorial(n: int) -> int:
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


def combinacao_simples(n: int, p: int) -> int:
    return fatorial(n) / (fatorial(p) * fatorial(n - p))


def combinacao_composta(n: int, p: int) -> int:
    return fatorial(n + p - 1) / (fatorial(p) * fatorial(n - 1))


# print(combinacao_simples(60, 6))
