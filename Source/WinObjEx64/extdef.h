/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2019
*
*  TITLE:       EXTAPI.H
*
*  VERSION:     1.82
*
*  DATE:        01 Nov 2019
*
*  Windows SDK compatibility header.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

typedef enum _EXT_SID_NAME_USE {
    ExtSidTypeUser = 1,
    ExtSidTypeGroup,
    ExtSidTypeDomain,
    ExtSidTypeAlias,
    ExtSidTypeWellKnownGroup,
    ExtSidTypeDeletedAccount,
    ExtSidTypeInvalid,
    ExtSidTypeUnknown,
    ExtSidTypeComputer,
    ExtSidTypeLabel,
    ExtSidTypeLogonSession
} EXT_SID_NAME_USE, *PEXT_SID_NAME_USE;

//
// These constants are missing in Windows SDK 8.1
//
#ifndef SERVICE_USER_SERVICE
#define SERVICE_USER_SERVICE           0x00000040
#endif

#ifndef SERVICE_USERSERVICE_INSTANCE
#define SERVICE_USERSERVICE_INSTANCE   0x00000080
#endif

#ifndef PF_RDTSCP_INSTRUCTION_AVAILABLE
#define PF_RDTSCP_INSTRUCTION_AVAILABLE             32
#endif

#ifndef PF_RDPID_INSTRUCTION_AVAILABLE
#define PF_RDPID_INSTRUCTION_AVAILABLE              33
#endif

#ifndef PF_ARM_V81_ATOMIC_INSTRUCTIONS_AVAILABLE
#define PF_ARM_V81_ATOMIC_INSTRUCTIONS_AVAILABLE    34
#endif

#ifndef PF_MONITORX_INSTRUCTION_AVAILABLE
#define PF_MONITORX_INSTRUCTION_AVAILABLE           35   
#endif

#ifndef PF_SSSE3_INSTRUCTIONS_AVAILABLE
#define PF_SSSE3_INSTRUCTIONS_AVAILABLE             36
#endif

#ifndef PF_SSE4_1_INSTRUCTIONS_AVAILABLE
#define PF_SSE4_1_INSTRUCTIONS_AVAILABLE            37
#endif

#ifndef PF_SSE4_2_INSTRUCTIONS_AVAILABLE
#define PF_SSE4_2_INSTRUCTIONS_AVAILABLE            38
#endif

#ifndef PF_AVX_INSTRUCTIONS_AVAILABLE
#define PF_AVX_INSTRUCTIONS_AVAILABLE               39
#endif

#ifndef PF_AVX2_INSTRUCTIONS_AVAILABLE
#define PF_AVX2_INSTRUCTIONS_AVAILABLE              40
#endif

#ifndef PF_AVX512F_INSTRUCTIONS_AVAILABLE
#define PF_AVX512F_INSTRUCTIONS_AVAILABLE           41
#endif
