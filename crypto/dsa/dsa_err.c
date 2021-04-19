/*
 * Generated by util/mkerr.pl DO NOT EDIT
 * Copyright 1995-2021 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */

#include <openssl/err.h>
#include <openssl/dsaerr.h>
#include "crypto/dsaerr.h"

#ifndef OPENSSL_NO_DSA

# ifndef OPENSSL_NO_ERR

static const ERR_STRING_DATA DSA_str_reasons[] = {
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_BAD_FFC_PARAMETERS), "bad ffc parameters"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_BAD_Q_VALUE), "bad q value"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_BN_DECODE_ERROR), "bn decode error"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_BN_ERROR), "bn error"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_DECODE_ERROR), "decode error"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_INVALID_DIGEST_TYPE),
    "invalid digest type"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_INVALID_PARAMETERS), "invalid parameters"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_MISSING_PARAMETERS), "missing parameters"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_MISSING_PRIVATE_KEY),
    "missing private key"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_MODULUS_TOO_LARGE), "modulus too large"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_NO_PARAMETERS_SET), "no parameters set"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_PARAMETER_ENCODING_ERROR),
    "parameter encoding error"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_P_NOT_PRIME), "p not prime"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_Q_NOT_PRIME), "q not prime"},
    {ERR_PACK(ERR_LIB_DSA, 0, DSA_R_SEED_LEN_SMALL),
    "seed_len is less than the length of q"},
    {0, NULL}
};

# endif

int err_load_DSA_strings_int(void)
{
# ifndef OPENSSL_NO_ERR
    if (ERR_reason_error_string(DSA_str_reasons[0].error) == NULL)
        ERR_load_strings_const(DSA_str_reasons);
# endif
    return 1;
}
#else
NON_EMPTY_TRANSLATION_UNIT
#endif
