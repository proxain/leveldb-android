cmake_minimum_required(VERSION 3.9)

set(levelDB_src_DIR "src/main/cpp/leveldb")

set(levelDB_build_DIR "src/main/cpp/leveldb/outputs")
file(MAKE_DIRECTORY ${levelDB_build_DIR})

add_subdirectory(
        ${levelDB_src_DIR}
        ${levelDB_build_DIR}
)

add_library( leveldb STATIC IMPORTED )

set_target_properties( leveldb PROPERTIES IMPORTED_LOCATION
        ${levelDB_build_DIR}/${ANDROID_ABI}/lib_leveldb.a )

include_directories( ${levelDB_src_DIR}/include )
include_directories(src/main/cpp)

target_link_libraries(leveldb-android
        leveldb
        android
        log)