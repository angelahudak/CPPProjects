.PHONY: clean All

All:
	@echo "----------Building project:[ Switch - Debug ]----------"
	@cd "Switch" && "$(MAKE)" -f  "Switch.mk"
clean:
	@echo "----------Cleaning project:[ Switch - Debug ]----------"
	@cd "Switch" && "$(MAKE)" -f  "Switch.mk" clean
