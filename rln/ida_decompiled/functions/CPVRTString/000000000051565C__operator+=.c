/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051565C
 * Mangled: _ZN11CPVRTStringpLEc
 * Demangled: CPVRTString::operator+=(char)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 18
 *   insn=0x0000000000515674 string=0x0000000000515678 "t"
 *   insn=0x000000000051567C string=0x0000000000515680 "h"
 *   insn=0x0000000000515688 string=0x000000000051568C "7"
 *   insn=0x0000000000515690 string=0x0000000000515694 """
 *   insn=0x000000000051569C string=0x00000000005156A0 """
 *   insn=0x000000000051569C string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005156A8 string=0x00000000005156AC "w"
 *   insn=0x00000000005156AC string=0x00000000005156B0 "@"
 *   insn=0x00000000005156B0 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005156C8 string=0x00000000005156CC "6"
 *   insn=0x00000000005156CC string=0x00000000005156D0 "\"
 *   insn=0x00000000005156D0 string=0x00000000001FBC40 "0'"
 *   insn=0x00000000005156D8 string=0x00000000005156DC "`"
 *   insn=0x00000000005156DC string=0x00000000005156E0 ""
 *   insn=0x00000000005156E4 string=0x00000000005156E8 "h\n"
 *   insn=0x00000000005156E8 string=0x00000000005156EC "`"
 *   insn=0x00000000005156F0 string=0x00000000005156F4 "t"
 *   insn=0x00000000005156F0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator+=(_QWORD *a1, char a2)
{
  char *v3; // x20
  __int64 v4; // x25
  size_t v6; // x21
  unsigned __int64 v7; // x23
  char *v8; // x24
  char *v9; // x0
  char *v10; // x0

  v3 = (char *)a1[1];
  v4 = a1[2];
  v6 = a2;
  v7 = a2 + v4 + 1;
  if ( a1[3] < v7 )
  {
    v8 = (char *)malloc(a2 + v4 + 1);
    a1[3] = v7;
    memmove(v8, v3, v4 + 1);
    v3 = v8;
  }
  v9 = &v3[v4];
  if ( a2 )
  {
    memset(v9, 1, v6);
    v9 = &v3[v4 + v6];
  }
  *v9 = 0;
  v10 = (char *)a1[1];
  a1[2] += v6;
  if ( v3 != v10 )
  {
    free(v10);
    a1[1] = v3;
  }
  return a1;
}

