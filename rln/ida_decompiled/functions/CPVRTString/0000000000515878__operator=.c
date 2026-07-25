/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515878
 * Mangled: _ZN11CPVRTStringaSEc
 * Demangled: CPVRTString::operator=(char)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 12
 *   insn=0x0000000000515888 string=0x000000000051588C "h"
 *   insn=0x000000000051588C string=0x0000000000515890 "`"
 *   insn=0x0000000000515890 string=0x0000000000515894 "4"
 *   insn=0x000000000051589C string=0x00000000005158A0 "P"
 *   insn=0x00000000005158A0 string=0x00000000001F89E0 "0'"
 *   insn=0x00000000005158A8 string=0x00000000005158AC "q"
 *   insn=0x00000000005158AC string=0x00000000005158B0 "`"
 *   insn=0x00000000005158AC string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005158B0 string=0x00000000005158B4 "u"
 *   insn=0x00000000005158BC string=0x00000000005158C0 "t\n"
 *   insn=0x00000000005158C4 string=0x00000000005158C8 "h"
 *   insn=0x00000000005158C4 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator=(_QWORD *a1, char a2)
{
  unsigned __int64 v3; // x8
  void *v4; // x0
  size_t v5; // x20
  _QWORD *result; // x0

  v3 = a1[3];
  v4 = (void *)a1[1];
  v5 = a2;
  if ( v3 <= a2 )
  {
    free(v4);
    v4 = malloc(v5 + 1);
    a1[1] = v4;
    a1[3] = v5 + 1;
  }
  a1[2] = v5;
  memset(v4, 1, v5);
  result = a1;
  *(_BYTE *)(a1[1] + a1[2]) = 0;
  return result;
}

