	.ORIG x3000
    RST R1
    RST R2
    RST R3


    ADD R1, R1, #5
	ADD R2, R2, #2

    MLT R1, R1, R2

	.END