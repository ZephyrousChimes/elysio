#!/bin/bash
find . -regex '.*\.\(cpp\|h\)' -exec clang-format -i {} +
