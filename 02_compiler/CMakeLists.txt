cmake_minimum_required(VERSION 2.8)	 # Проверка версии CMake.
										# Если версия установленой программы
										# старее указаной, произайдёт аварийный выход.

project(hello_world)			# Название проекта

set(SOURCE_EXE hello_world.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB func.cpp)			# Тоже самое, но для библиотеки

add_library(func STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

add_executable(hello_world ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(hello_world func)		# Линковка программы с библиотекой
