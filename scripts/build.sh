#!/usr/bin/env bash
set -euo pipefail

NUM_CPUS=${NUM_CPUS:-$(nproc)}
PROJECT_DIR=$(cd "$(dirname "$0")/.."; pwd)

cmake \
  -DCMAKE_MODULE_PATH:FILEPATH="$(pwd)" \
  -B"${PROJECT_DIR}/build" \
  "$@" \
  "${PROJECT_DIR}"

cmake \
  --build "${PROJECT_DIR}/build" \
  -- -j"${NUM_CPUS}"

"${PROJECT_DIR}/build/card_game"