# all of them are cmake functions # Cmake 版本
cmake_minimum_required(VERSION 3.10)

# 設定專案名稱
project(CppProject
    VERSION 1.0.0
    DESCRIPTION "Study C++"
    LANGUAGES CXX
)

# 指定 C++ 的版本
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 設定專案的目錄結構
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(EXTERNAL_DIR ${CMAKE_SOURCE_DIR}/external)
set(DATA_DIR ${CMAKE_SOURCE_DIR}/data)
set(BIN_DIR ${CMAKE_SOURCE_DIR}/bin)

# 設定執行檔名稱與原始檔名稱 #################################
# set(SOURCE_FILES ${SRC_DIR}/main.cpp)          #    原始檔名稱
set(EXECUTABLE_NAME MyApp) # 執行檔名稱

# #############################################################

# 使用 GLOB 收集原始檔案
file(GLOB SOURCE_FILES "${SRC_DIR}/*.cpp")

# 設定可執行檔案的輸出目錄
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})

# 設定執行檔名稱和源文件
add_executable(${EXECUTABLE_NAME} ${SOURCE_FILES})

# MyApp 是要創建的執行檔名稱(目標target)，main.cpp 是該執行檔所依賴的源文件。
# 這個指令告訴 CMake 創建一個名為 MyApp 的執行檔，該執行檔的源文件是 main.cpp。

# 將 include 目錄添加到編譯器的包含路徑中
target_include_directories(${EXECUTABLE_NAME} PRIVATE ${INCLUDE_DIR})

message(STATUS "Binary output directory: ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}")

# 最後將測試資料複製一份到輸出目錄(bin資料夾)
file(COPY ${DATA_DIR} DESTINATION ${BIN_DIR})