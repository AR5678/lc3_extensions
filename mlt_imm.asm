	.ORIG x3000
    RST R0
	RST R1
	ADD R1, R1, #4

    MLT R0, R1, #5

	.END