/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053F5C0
 * Mangled: sub_53F5C0
 * Demangled: sub_53F5C0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005210E8  sub_5210E8
 *
 * Referenced strings: 3
 *   insn=0x000000000053F5CC string=0x000000000053F5D0 "`"
 *   insn=0x000000000053F5D8 string=0x000000000053F5DC "`"
 *   insn=0x000000000053F5DC string=0x000000000053F5E0 "dh""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_53F5C0(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // x0
  _QWORD *v5; // x0

  v4 = *a2;
  *a1 = *a2;
  v5 = (__int64 *)((char *)a1 + *(_QWORD *)(v4 - 24));
  *v5 = a2[1];
  return sub_5210E8((__int64)v5, a3);
}

