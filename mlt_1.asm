	.ORIG x3000
    RST R0
    RST R1
    ADD R1, R1, #3
    ADD R0, R0, #0

    MLT R1, R2, R3
	.END