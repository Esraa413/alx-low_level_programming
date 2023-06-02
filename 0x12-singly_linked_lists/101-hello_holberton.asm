global	main
extern	printf

main:
	mov	edi, ms
	call 	printf
	mov	eax, 0
	ret
ms: db `Hello, Holberton\n`0
