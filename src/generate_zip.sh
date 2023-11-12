#!/usr/bin/env bash

project_name='prog3_pc2_v2023_2_addon'
source_code='
  find_max_product.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}