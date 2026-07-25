/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005145D4
 * Mangled: _ZN11CPVRTString6appendEPKcm
 * Demangled: CPVRTString::append(char const*,ulong)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 17
 *   insn=0x00000000005145EC string=0x00000000005145F0 "v"A"
 *   insn=0x00000000005145F4 string=0x00000000005145F8 "u"
 *   insn=0x0000000000514600 string=0x0000000000514604 "X"
 *   insn=0x0000000000514608 string=0x000000000051460C "B"
 *   insn=0x0000000000514614 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514620 string=0x0000000000514624 "x"
 *   insn=0x0000000000514624 string=0x0000000000514628 "b"
 *   insn=0x0000000000514628 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051462C string=0x0000000000514630 "?k:8"
 *   insn=0x000000000051463C string=0x0000000000514640 "\"
 *   insn=0x0000000000514640 string=0x0000000000514644 "h\n@"
 *   insn=0x0000000000514644 string=0x0000000000514648 ""
 *   insn=0x0000000000514648 string=0x000000000051464C "h\n"
 *   insn=0x0000000000514650 string=0x0000000000514654 "`"
 *   insn=0x0000000000514658 string=0x000000000051465C "`"
 *   insn=0x0000000000514660 string=0x0000000000514664 "u"
 *   insn=0x0000000000514660 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::append(CPVRTString *this, const char *a2, size_t a3)
{
  size_t v4; // x22
  char *v6; // x21
  size_t v8; // x26
  unsigned __int64 v9; // x24
  char *v10; // x25
  size_t v11; // x8
  char *v12; // x0

  v4 = *((_QWORD *)this + 2);
  v6 = (char *)*((_QWORD *)this + 1);
  v8 = v4 + a3;
  v9 = v4 + a3 + 1;
  if ( *((_QWORD *)this + 3) < v9 )
  {
    v10 = (char *)malloc(v4 + a3 + 1);
    *((_QWORD *)this + 3) = v9;
    memmove(v10, v6, v4);
    v6 = v10;
    v10[v8] = 0;
  }
  memmove(&v6[v4], a2, a3);
  v11 = *((_QWORD *)this + 2) + a3;
  *((_QWORD *)this + 2) = v11;
  v6[v11] = 0;
  v12 = (char *)*((_QWORD *)this + 1);
  if ( v6 != v12 )
  {
    free(v12);
    *((_QWORD *)this + 1) = v6;
  }
  return this;
}

