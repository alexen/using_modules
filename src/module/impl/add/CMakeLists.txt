set(THIS "add")
add_library(${THIS} MODULE)
target_sources(${THIS}
     PRIVATE
          add.h
          add.cpp
)
