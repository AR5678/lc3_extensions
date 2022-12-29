	.ORIG x3000
    RST R0
    RST R1
    ADD R1, R1, #2

    ADD R0, R0, #2

    MLT R0, R1, R1
	.END