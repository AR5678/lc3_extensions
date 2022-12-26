	.ORIG x3000
	; test that AND and ADD still work with RST8
	ADD R1, R1, #1
	ADD R2, R2, #2

    SUB R3, R2, R1

    ADD R4, R4, #4
    SUB R4, R4, R4
    
    RST R3
    RST R1
    ADD R1, R1, #4
	ADD R3, R3, #6

    SUB R3, R3, R1


	.END