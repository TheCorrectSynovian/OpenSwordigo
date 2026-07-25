/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005158E4
 * Mangled: _ZN11CPVRTStringaSEPKc
 * Demangled: CPVRTString::operator=(char const*)
 *
 * Callers: 1
 *   0x00000000001F79E0  CPVRTString::operator=(char const*)
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 15
 *   insn=0x0000000000515900 string=0x0000000000515904 "K"
 *   insn=0x0000000000515904 string=0x0000000000515908 "h"
 *   insn=0x0000000000515910 string=0x0000000000515914 "i"
 *   insn=0x0000000000515914 string=0x0000000000515918 "u"
 *   insn=0x0000000000515924 string=0x0000000000515928 "R"
 *   insn=0x0000000000515928 string=0x00000000001F5E70 "P'"
 *   insn=0x000000000051592C string=0x0000000000515930 "w"
 *   insn=0x000000000051593C string=0x0000000000515940 "v\n"
 *   insn=0x0000000000515944 string=0x0000000000515948 "h\n@"
 *   insn=0x0000000000515944 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051594C string=0x0000000000515950 "`"
 *   insn=0x0000000000515954 string=0x0000000000515958 "`"
 *   insn=0x0000000000515958 string=0x000000000051595C "!"
 *   insn=0x000000000051595C string=0x0000000000515960 "u"
 *   insn=0x000000000051595C string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator=(_QWORD *a1, char *a2)
{
  size_t v4; // x0
  size_t v5; // x22
  void *v6; // x21
  void *v7; // x0

  v4 = strlen(a2);
  v5 = v4;
  if ( a1[3] <= v4 )
  {
    v6 = malloc(v4 + 1);
    a1[3] = v5 + 1;
  }
  else
  {
    v6 = (void *)a1[1];
  }
  a1[2] = v5;
  memmove(v6, a2, v5);
  *((_BYTE *)v6 + a1[2]) = 0;
  v7 = (void *)a1[1];
  if ( v6 != v7 )
  {
    free(v7);
    a1[1] = v6;
  }
  return a1;
}

