	.ORIG x3000
    ; somthing2
    RST R3
    RST R1
    
    ADD R1, R1, #7
	ADD R3, R3, #10

    SUB R3, R3, R1

	.END