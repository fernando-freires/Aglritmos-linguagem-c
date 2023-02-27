def fatorial(n: int) -> int:
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


def arranjo_simples(n: int, p: int) -> int:
    return fatorial(n) / fatorial(n - p)


def arranjo_com_repeticao(n: int, p: int) -> int:
    return n**p

