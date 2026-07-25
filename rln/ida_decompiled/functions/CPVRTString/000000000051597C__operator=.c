/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051597C
 * Mangled: _ZN11CPVRTStringaSERKS_
 * Demangled: CPVRTString::operator=(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 15
 *   insn=0x0000000000515990 string=0x0000000000515994 "6"
 *   insn=0x0000000000515994 string=0x0000000000515998 "h"
 *   insn=0x000000000051599C string=0x00000000005159A0 "i"
 *   insn=0x00000000005159A0 string=0x00000000005159A4 "t"
 *   insn=0x00000000005159B0 string=0x00000000005159B4 "/"
 *   insn=0x00000000005159B4 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005159B8 string=0x00000000005159BC "w"
 *   insn=0x00000000005159C8 string=0x00000000005159CC "u\n"
 *   insn=0x00000000005159CC string=0x00000000005159D0 "x"
 *   insn=0x00000000005159D0 string=0x00000000005159D4 "h\n@"
 *   insn=0x00000000005159D0 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005159D8 string=0x00000000005159DC "`"
 *   insn=0x00000000005159E0 string=0x00000000005159E4 "`"
 *   insn=0x00000000005159E8 string=0x00000000005159EC "t"
 *   insn=0x00000000005159E8 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator=(_QWORD *a1, __int64 a2)
{
  size_t v3; // x21
  const void *v4; // x22
  void *v5; // x20
  void *v6; // x0

  v4 = *(const void **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( a1[3] <= v3 )
  {
    v5 = malloc(v3 + 1);
    a1[3] = v3 + 1;
  }
  else
  {
    v5 = (void *)a1[1];
  }
  a1[2] = v3;
  memmove(v5, v4, v3);
  *((_BYTE *)v5 + a1[2]) = 0;
  v6 = (void *)a1[1];
  if ( v5 != v6 )
  {
    free(v6);
    a1[1] = v5;
  }
  return a1;
}

