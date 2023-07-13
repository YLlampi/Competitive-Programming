def convertir(n, d):
    a = 10**d
    return int(n* a +0.5) /a

def camp(l, s, p):
    r = p*l/ s
    v = 220
    rt = v/r
    return rt

inp = input().split()
l = float(inp[0])
s = float(inp[1])
p = float(inp[2])

amp = camp(l, s, p)
if amp < 1:
    miliamperios = amp * 1000
    redon = convertir(miliamperios, 3)
    print("{:.3f} miliamperios".format(redon))
else:
    apredo = convertir(amp, 3)
    print("{:.3f} amperios".format(apredo))
