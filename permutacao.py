def fatorial(n: int) -> int:
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result


def permutacao_simples(n: int) -> int:
    return fatorial(n)


def permutacao_com_repeticao(n: int, values: list) -> int:
    aux = 1
    for i in range(len(values)):
        aux *= fatorial(values[i])

    return fatorial(n) / aux


def permutacao_circular(n: int) -> int:
    return fatorial(n - 1)
