// © 2008 Casey Duncan
// SPDX-License-Identifier: MIT
// via https://github.com/caseman/noise

#pragma once

void seed(unsigned int x);
float simplex2(float x, float y, int octaves, float persistence, float lacunarity);
float simplex3(float x, float y, float z, int octaves, float persistence, float lacunarity);
