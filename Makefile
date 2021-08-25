.PHONY: clean All

All:
	@echo "----------Building project:[ ooop - Debug ]----------"
	@cd "ooop" && "$(MAKE)" -f  "ooop.mk"
clean:
	@echo "----------Cleaning project:[ ooop - Debug ]----------"
	@cd "ooop" && "$(MAKE)" -f  "ooop.mk" clean
