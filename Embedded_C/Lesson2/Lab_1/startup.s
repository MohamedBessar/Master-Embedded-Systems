@@ Eng. Mohamed Bessar
.global reset
reset:
		ldr sp, =stack_top
		bl main
stop:	b stop