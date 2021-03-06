<?php
/*
 * Copyright 2020 New Relic Corporation. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

if (!extension_loaded("sqlite")) {
  die("skip: sqlite extension required");
}

if (!class_exists('SQLiteDatabase')) {
  die("skip: SQLiteDatabase class must exist");
}
