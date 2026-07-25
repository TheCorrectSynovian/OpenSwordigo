/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514684
 * Mangled: _ZN11CPVRTString6appendERKS_
 * Demangled: CPVRTString::append(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 18
 *   insn=0x000000000051469C string=0x00000000005146A0 "6"
 *   insn=0x00000000005146A0 string=0x00000000005146A4 "w"A"
 *   insn=0x00000000005146A4 string=0x00000000005146A8 "t"
 *   insn=0x00000000005146AC string=0x00000000005146B0 "X"
 *   insn=0x00000000005146B4 string=0x00000000005146B8 "B"
 *   insn=0x00000000005146C0 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005146CC string=0x00000000005146D0 "x"
 *   insn=0x00000000005146D0 string=0x00000000005146D4 "7"
 *   insn=0x00000000005146D4 string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005146D8 string=0x00000000005146DC "?k:8"
 *   insn=0x00000000005146E8 string=0x00000000005146EC "1"
 *   insn=0x00000000005146EC string=0x00000000005146F0 "h\n@"
 *   insn=0x00000000005146F0 string=0x00000000005146F4 ""
 *   insn=0x00000000005146F4 string=0x00000000005146F8 "h\n"
 *   insn=0x00000000005146FC string=0x0000000000514700 "`"
 *   insn=0x0000000000514704 string=0x0000000000514708 "`"
 *   insn=0x000000000051470C string=0x0000000000514710 "t"
 *   insn=0x000000000051470C string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::append(CPVRTString *this, const CPVRTString *a2)
{
  size_t v3; // x21
  const void *v4; // x22
  size_t v5; // x23
  char *v6; // x20
  unsigned __int64 v7; // x24
  char *v8; // x25
  size_t v9; // x8
  char *v10; // x0

  v4 = (const void *)*((_QWORD *)a2 + 1);
  v3 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)this + 2);
  v6 = (char *)*((_QWORD *)this + 1);
  v7 = v5 + v3 + 1;
  if ( *((_QWORD *)this + 3) < v7 )
  {
    v8 = (char *)malloc(v5 + v3 + 1);
    *((_QWORD *)this + 3) = v7;
    memmove(v8, v6, v5);
    v6 = v8;
    v8[v5 + v3] = 0;
  }
  memmove(&v6[v5], v4, v3);
  v9 = *((_QWORD *)this + 2) + v3;
  *((_QWORD *)this + 2) = v9;
  v6[v9] = 0;
  v10 = (char *)*((_QWORD *)this + 1);
  if ( v6 != v10 )
  {
    free(v10);
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}

