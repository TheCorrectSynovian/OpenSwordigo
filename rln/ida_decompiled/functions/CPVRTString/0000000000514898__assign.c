/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514898
 * Mangled: _ZN11CPVRTString6assignERKS_
 * Demangled: CPVRTString::assign(CPVRTString const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBBB0  .memmove
 *
 * Referenced strings: 15
 *   insn=0x00000000005148AC string=0x00000000005148B0 "6"
 *   insn=0x00000000005148B0 string=0x00000000005148B4 "h"
 *   insn=0x00000000005148B8 string=0x00000000005148BC "i"
 *   insn=0x00000000005148BC string=0x00000000005148C0 "t"
 *   insn=0x00000000005148CC string=0x00000000005148D0 "h"
 *   insn=0x00000000005148D0 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005148D4 string=0x00000000005148D8 "w"
 *   insn=0x00000000005148E4 string=0x00000000005148E8 "u\n"
 *   insn=0x00000000005148EC string=0x00000000005148F0 "h\n@"
 *   insn=0x00000000005148EC string=0x00000000001FBBB0 "0'"
 *   insn=0x00000000005148F4 string=0x00000000005148F8 "`"
 *   insn=0x00000000005148FC string=0x0000000000514900 "`"
 *   insn=0x0000000000514900 string=0x0000000000514904 "7"
 *   insn=0x0000000000514904 string=0x0000000000514908 "t"
 *   insn=0x0000000000514904 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::assign(CPVRTString *this, const CPVRTString *a2)
{
  size_t v3; // x21
  const void *v4; // x22
  void *v5; // x20
  void *v6; // x0

  v4 = (const void *)*((_QWORD *)a2 + 1);
  v3 = *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)this + 3) <= v3 )
  {
    v5 = malloc(v3 + 1);
    *((_QWORD *)this + 3) = v3 + 1;
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 1);
  }
  *((_QWORD *)this + 2) = v3;
  memmove(v5, v4, v3);
  *((_BYTE *)v5 + *((_QWORD *)this + 2)) = 0;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v5 != v6 )
  {
    free(v6);
    *((_QWORD *)this + 1) = v5;
  }
  return this;
}

