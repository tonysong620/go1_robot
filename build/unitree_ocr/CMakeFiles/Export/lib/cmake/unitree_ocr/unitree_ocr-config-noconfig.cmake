#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "unitree_ocr::unitree_ocr" for configuration ""
set_property(TARGET unitree_ocr::unitree_ocr APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(unitree_ocr::unitree_ocr PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libunitree_ocr.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS unitree_ocr::unitree_ocr )
list(APPEND _IMPORT_CHECK_FILES_FOR_unitree_ocr::unitree_ocr "${_IMPORT_PREFIX}/lib/libunitree_ocr.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
