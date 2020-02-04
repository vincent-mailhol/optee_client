/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) 2018-2020, Linaro Limited
 */

#ifndef LIBCKTEEC_CK_DEBUG_H
#define LIBCKTEEC_CK_DEBUG_H

#include <pkcs11.h>

/* Return a pointer to a string buffer of "CKR_xxx\0" return value ID */
const char *ckr2str(CK_RV id);

/* ckm2str - Return string buffer of "CKM_xxx\0" for a mechanism ID */
const char *ckm2str(CK_MECHANISM_TYPE id);

/* slot_ckf2str - Return string buffer of "CKF_xxx\0" for a slot flag */
const char *slot_ckf2str(CK_ULONG flag);

/* token_ckf2str - Return string buffer "CKF_xxx\0" for a token flag */
const char *token_ckf2str(CK_ULONG flag);

/* mecha_ckf2str - Return string buffer "CKF_xxx\0" for a mechanism flags */
const char *mecha_ckf2str(CK_ULONG flag);

#endif /*LIBCKTEEC_CK_DEBUG_H*/
