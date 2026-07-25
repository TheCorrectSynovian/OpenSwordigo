/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515714
 * Mangled: _ZN11CPVRTStringpLEPKc
 * Demangled: CPVRTString::operator+=(char const*)
 *
 * Callers: 1
 *   0x00000000001FF7D0  CPVRTString::operator+=(char const*)
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 16
 *   insn=0x0000000000515738 string=0x000000000051573C "w"A"
 *   insn=0x0000000000515740 string=0x0000000000515744 "u"
 *   insn=0x0000000000515748 string=0x000000000051574C "X"
 *   insn=0x0000000000515750 string=0x0000000000515754 "B"
 *   insn=0x000000000051575C string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000515768 string=0x000000000051576C "x"
 *   insn=0x0000000000515770 string=0x00000000001FBBB0 "0'"
 *   insn=0x0000000000515774 string=0x0000000000515778 "?k:8"
 *   insn=0x0000000000515784 string=0x0000000000515788 "\n"
 *   insn=0x0000000000515788 string=0x000000000051578C "h\n@"
 *   insn=0x000000000051578C string=0x0000000000515790 ""
 *   insn=0x0000000000515790 string=0x0000000000515794 "h\n"
 *   insn=0x0000000000515798 string=0x000000000051579C "`"
 *   insn=0x00000000005157A0 string=0x00000000005157A4 "`"
 *   insn=0x00000000005157A8 string=0x00000000005157AC "u"
 *   insn=0x00000000005157A8 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall CPVRTString::operator+=(_QWORD *a1, char *a2)
{
  size_t v4; // x0
  size_t v5; // x23
  size_t v6; // x22
  char *v7; // x21
  size_t v8; // x26
  unsigned __int64 v9; // x24
  char *v10; // x25
  size_t v11; // x8
  char *v12; // x0

  v4 = strlen(a2);
  v5 = a1[2];
  v6 = v4;
  v7 = (char *)a1[1];
  v8 = v5 + v4;
  v9 = v5 + v4 + 1;
  if ( a1[3] < v9 )
  {
    v10 = (char *)malloc(v5 + v4 + 1);
    a1[3] = v9;
    memmove(v10, v7, v5);
    v7 = v10;
    v10[v8] = 0;
  }
  memmove(&v7[v5], a2, v6);
  v11 = a1[2] + v6;
  a1[2] = v11;
  v7[v11] = 0;
  v12 = (char *)a1[1];
  if ( v7 != v12 )
  {
    free(v12);
    a1[1] = v7;
  }
  return a1;
}

