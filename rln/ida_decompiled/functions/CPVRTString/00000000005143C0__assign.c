/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005143C0
 * Mangled: _ZN11CPVRTString6assignEmc
 * Demangled: CPVRTString::assign(ulong,char)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F5E70  .malloc
 *   0x00000000001F89E0  .free
 *   0x00000000001FBC40  .memset
 *
 * Referenced strings: 10
 *   insn=0x00000000005143D0 string=0x00000000005143D4 "h"
 *   insn=0x00000000005143D4 string=0x00000000005143D8 "`"
 *   insn=0x00000000005143E8 string=0x00000000005143EC "}"
 *   insn=0x00000000005143EC string=0x00000000001F89E0 "0'"
 *   insn=0x00000000005143F8 string=0x00000000005143FC "`"
 *   insn=0x00000000005143F8 string=0x00000000001F5E70 "P'"
 *   insn=0x00000000005143FC string=0x0000000000514400 "v"
 *   insn=0x0000000000514408 string=0x000000000051440C "t\n"
 *   insn=0x0000000000514410 string=0x0000000000514414 "h"
 *   insn=0x0000000000514410 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

CPVRTString *__fastcall CPVRTString::assign(CPVRTString *this, size_t a2, int a3)
{
  size_t v4; // x8
  void *v5; // x0
  CPVRTString *result; // x0

  v4 = *((_QWORD *)this + 3);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v4 <= a2 )
  {
    free(v5);
    v5 = malloc(a2 + 1);
    *((_QWORD *)this + 1) = v5;
    *((_QWORD *)this + 3) = a2 + 1;
  }
  *((_QWORD *)this + 2) = a2;
  memset(v5, a3, a2);
  result = this;
  *(_BYTE *)(*((_QWORD *)this + 1) + *((_QWORD *)this + 2)) = 0;
  return result;
}

