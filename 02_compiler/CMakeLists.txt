cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.
project(hello_world)			# Название проекта
add_executable(hello_world func.cpp hello_world.cpp)	# Создает исполняемый файл с именем main
