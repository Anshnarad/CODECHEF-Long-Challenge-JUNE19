"""100 % AC Solution"""
def answer(P, Q, R):

	if (P == 0):
		return 0
	
	if (Q == 0):
		return 1

	Z = 0
	
	if (Q % 2 == 0):
		
		Z = answer(P, Q / 2, R)
		Z = (Z * Z) % R

	else:
		
		Z = P % R
		Z = (Z * answer(P, Q - 1,
							R) % R) % R
	
	return ((Z + R) % R)

t=int(input())

for i in range(t):
	
	Ansh = 2
	Bash = int(input())
	Cash = 1000000007
	
	print((answer(Ansh, Bash, Cash)*5)%Cash)
