.PHONY: all test clean

create-c-compile:
	@gcc ./c/$(name).c -o $(name)
	@mv $(name) ./c/compiled/

c-run:
	@./c/compiled/$(name)