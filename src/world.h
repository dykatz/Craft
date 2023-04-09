// © 2013 Michael Fogleman
// SPDX-License-Identifier: MIT

#pragma once

typedef void (*world_func)(int, int, int, int, void *);

void create_world(int p, int q, world_func func, void *arg);
