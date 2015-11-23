p,b = (1,1)
while b < 100:
	print 'this generation has {0} babies'.format(b)
	p,b = (b,p+b)

