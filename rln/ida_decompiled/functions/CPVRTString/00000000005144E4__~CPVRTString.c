/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005144E4
 * Mangled: _ZN11CPVRTStringD0Ev
 * Demangled: CPVRTString::~CPVRTString()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 8
 *   insn=0x00000000005144F4 string=0x00000000005144F8 "`"
 *   insn=0x00000000005144F8 string=0x00000000005144FC ""
 *   insn=0x00000000005144FC string=0x0000000000514500 "A"
 *   insn=0x0000000000514500 string=0x0000000000514504 "h"
 *   insn=0x0000000000514504 string=0x0000000000514508 "6"
 *   insn=0x0000000000514508 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000514514 string=0x0000000000514518 "f"
 *   insn=0x0000000000514518 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::~CPVRTString(CPVRTString *this)
{
  void *v2; // x0

  v2 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = off_6D8E38;
  free(v2);
  operator delete(this);
}

