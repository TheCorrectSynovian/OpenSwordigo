/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514730
 * Mangled: _ZN11CPVRTString6appendERKS_mm
 * Demangled: CPVRTString::append(CPVRTString const&,ulong,ulong)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 18
 *   insn=0x0000000000514748 string=0x000000000051474C "u"
 *   insn=0x000000000051474C string=0x0000000000514750 "h"
 *   insn=0x0000000000514750 string=0x0000000000514754 ")"
 *   insn=0x000000000051475C string=0x0000000000514760 "X"
 *   insn=0x0000000000514764 string=0x0000000000514768 "7"
 *   insn=0x0000000000514768 string=0x000000000051476C "B"
 *   insn=0x0000000000514774 string=0x00000000001F5E70 "P'"
 *   insn=0x0000000000514780 string=0x0000000000514784 "x"
 *   insn=0x0000000000514784 string=0x0000000000514788 "\n"
 *   insn=0x0000000000514788 string=0x00000000001FBBB0 "0'"
 *   insn=0x000000000051478C string=0x0000000000514790 "?k:8"
 *   insn=0x00000000005147A0 string=0x00000000005147A4 "h\n@"
 *   insn=0x00000000005147A4 string=0x00000000005147A8 ""
 *   insn=0x00000000005147A8 string=0x00000000005147AC "h\n"
 *   insn=0x00000000005147B0 string=0x00000000005147B4 "`"
 *   insn=0x00000000005147B8 string=0x00000000005147BC "`"
 *   insn=0x00000000005147C0 string=0x00000000005147C4 "u"
 *   insn=0x00000000005147C0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::append(CPVRTString *this, const CPVRTString *a2, __int64 a3, size_t a4)
{
  char *v5; // x21
  size_t v6; // x22
  size_t v8; // x26
  unsigned __int64 v9; // x24
  const void *v10; // x23
  char *v11; // x25
  size_t v12; // x8
  char *v13; // x0

  v5 = (char *)*((_QWORD *)this + 1);
  v6 = *((_QWORD *)this + 2);
  v8 = v6 + a4;
  v9 = v6 + a4 + 1;
  v10 = (const void *)(*((_QWORD *)a2 + 1) + a3);
  if ( *((_QWORD *)this + 3) < v9 )
  {
    v11 = (char *)malloc(v6 + a4 + 1);
    *((_QWORD *)this + 3) = v9;
    memmove(v11, v5, v6);
    v5 = v11;
    v11[v8] = 0;
  }
  memmove(&v5[v6], v10, a4);
  v12 = *((_QWORD *)this + 2) + a4;
  *((_QWORD *)this + 2) = v12;
  v5[v12] = 0;
  v13 = (char *)*((_QWORD *)this + 1);
  if ( v5 != v13 )
  {
    free(v13);
    *((_QWORD *)this + 1) = v5;
  }
  return this;
}

