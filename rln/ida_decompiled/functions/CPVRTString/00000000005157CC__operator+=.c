/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005157CC
 * Mangled: _ZN11CPVRTStringpLERKS_
 * Demangled: CPVRTString::operator+=(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 17
 *   insn=0x00000000005157E4 string=0x00000000005157E8 "6"
 *   insn=0x00000000005157E8 string=0x00000000005157EC "w"A"
 *   insn=0x00000000005157EC string=0x00000000005157F0 "t"
 *   insn=0x00000000005157F4 string=0x00000000005157F8 "X"
 *   insn=0x00000000005157FC string=0x0000000000515800 "B"
 *   insn=0x0000000000515808 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515814 string=0x0000000000515818 "x"
 *   insn=0x000000000051581C string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515820 string=0x0000000000515824 "?k:8"
 *   insn=0x0000000000515834 string=0x0000000000515838 "h\n@"
 *   insn=0x0000000000515838 string=0x000000000051583C ""
 *   insn=0x000000000051583C string=0x0000000000515840 "h\n"
 *   insn=0x0000000000515844 string=0x0000000000515848 "`"
 *   insn=0x000000000051584C string=0x0000000000515850 "`"
 *   insn=0x0000000000515850 string=0x0000000000515854 "c"
 *   insn=0x0000000000515854 string=0x0000000000515858 "t"
 *   insn=0x0000000000515854 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator+=(_QWORD *a1, __int64 a2)
{
  size_t v3; // x21
  const void *v4; // x22
  size_t v5; // x23
  char *v6; // x20
  unsigned __int64 v7; // x24
  char *v8; // x25
  size_t v9; // x8
  char *v10; // x0

  v4 = *(const void **)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  v5 = a1[2];
  v6 = (char *)a1[1];
  v7 = v5 + v3 + 1;
  if ( a1[3] < v7 )
  {
    v8 = (char *)malloc(v5 + v3 + 1);
    a1[3] = v7;
    memmove(v8, v6, v5);
    v6 = v8;
    v8[v5 + v3] = 0;
  }
  memmove(&v6[v5], v4, v3);
  v9 = a1[2] + v3;
  a1[2] = v9;
  v6[v9] = 0;
  v10 = (char *)a1[1];
  if ( v6 != v10 )
  {
    free(v10);
    a1[1] = v6;
  }
  return a1;
}

