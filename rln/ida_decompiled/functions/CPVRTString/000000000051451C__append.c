/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051451C
 * Mangled: _ZN11CPVRTString6appendEPKc
 * Demangled: CPVRTString::append(char const*)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *   0x0000000000203230  .strlen
 *
 * Referenced strings: 17
 *   insn=0x000000000051453C string=0x0000000000514540 "<"
 *   insn=0x0000000000514540 string=0x0000000000514544 "w"A"
 *   insn=0x0000000000514548 string=0x000000000051454C "u"
 *   insn=0x0000000000514550 string=0x0000000000514554 "X"
 *   insn=0x0000000000514558 string=0x000000000051455C "B"
 *   insn=0x0000000000514560 string=0x0000000000514564 "C"
 *   insn=0x0000000000514564 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514570 string=0x0000000000514574 "x"
 *   insn=0x0000000000514578 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051457C string=0x0000000000514580 "?k:8"
 *   insn=0x0000000000514590 string=0x0000000000514594 "h\n@"
 *   insn=0x0000000000514594 string=0x0000000000514598 ""
 *   insn=0x0000000000514598 string=0x000000000051459C "h\n"
 *   insn=0x00000000005145A0 string=0x00000000005145A4 "`"
 *   insn=0x00000000005145A8 string=0x00000000005145AC "`"
 *   insn=0x00000000005145B0 string=0x00000000005145B4 "u"
 *   insn=0x00000000005145B0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::append(CPVRTString *this, const char *a2)
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
  v5 = *((_QWORD *)this + 2);
  v6 = v4;
  v7 = (char *)*((_QWORD *)this + 1);
  v8 = v5 + v4;
  v9 = v5 + v4 + 1;
  if ( *((_QWORD *)this + 3) < v9 )
  {
    v10 = (char *)malloc(v5 + v4 + 1);
    *((_QWORD *)this + 3) = v9;
    memmove(v10, v7, v5);
    v7 = v10;
    v10[v8] = 0;
  }
  memmove(&v7[v5], a2, v6);
  v11 = *((_QWORD *)this + 2) + v6;
  *((_QWORD *)this + 2) = v11;
  v7[v11] = 0;
  v12 = (char *)*((_QWORD *)this + 1);
  if ( v7 != v12 )
  {
    free(v12);
    *((_QWORD *)this + 1) = v7;
  }
  return this;
}

