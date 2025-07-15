
.PHONY: build

build:
	@echo "[MAKEFILE] Start project..."
	chmod +x ./bin/start.sh
	./bin/start.sh src/main.cpp || exit 1
	@echo "[MAKEFILE] Finsh project"

