clean:
	@find . -type f -executable ! -name "*.cpp" ! -name "*.h" ! -name "Makefile" -delete
	@echo "Cleaned all compiled files."

.PHONY: clean