// © 2021 Dominic Szablewski <https://phoboslab.org>
// SPDX-License-Identifier: MIT
// via https://github.com/phoboslab/qoi

#pragma once

#define QOI_SRGB 0
#define QOI_LINEAR 1

typedef struct {
  unsigned int width;
  unsigned int height;
  unsigned char channels;
  unsigned char colorspace;
} qoi_desc;

int qoi_write(const char *filename, const void *data, const qoi_desc *desc);
void *qoi_read(const char *filename, qoi_desc *desc, int channels);
void *qoi_encode(const void *data, const qoi_desc *desc, int *out_len);
void *qoi_decode(const void *data, int size, qoi_desc *desc, int channels);
