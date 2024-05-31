set(THIS "sub")
add_library(${THIS} MODULE)
target_sources(${THIS}
     PRIVATE
          sub.h
          sub.cpp
)
