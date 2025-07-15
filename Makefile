
.PHONY: start lint format

start:
	@echo "[MAKEFILE] Start project..."
	chmod +x ./bin/start.sh
	./bin/start.sh src/main.cpp || exit 1
	@echo "[MAKEFILE] Finsh project"

lint:
	@echo "[MAKEFILE] Start Lint code..."
	find src -name "*.cpp" -o -name "*.h" | xargs clang-format -i
	@echo "[MAKEFILE] Finish Lint code"

format:
	@echo "[MAKEFILE] Start Format code"
	find src -name "*.cpp" -o -name "*.h" | xargs clang-format --dry-run --Werror
	@echo "[MAKEFILE] Finish Format code"

