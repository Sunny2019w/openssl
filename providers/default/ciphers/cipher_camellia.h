/*
 * Copyright 2019 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include "openssl/camellia.h"
#include "internal/ciphers/ciphercommon.h"

typedef struct prov_camellia_ctx_st {
    PROV_CIPHER_CTX base;      /* Must be first */
    union {
        OSSL_UNION_ALIGN;
        CAMELLIA_KEY ks;
    } ks;
} PROV_CAMELLIA_CTX;

#define PROV_CIPHER_HW_camellia_ofb PROV_CIPHER_HW_camellia_ofb128
#define PROV_CIPHER_HW_camellia_cfb PROV_CIPHER_HW_camellia_cfb128
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_ecb(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_cbc(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_ofb128(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_cfb128(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_cfb1(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_cfb8(size_t keybits);
const PROV_CIPHER_HW *PROV_CIPHER_HW_camellia_ctr(size_t keybits);
