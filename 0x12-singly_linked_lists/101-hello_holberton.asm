global	main
extern	printf

main:
	mov	edi, msg
	call 	printf
	mov	eax, 0
	ret
msg: db `Hello, Holberton\n`0
