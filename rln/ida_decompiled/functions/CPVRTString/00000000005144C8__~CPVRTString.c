/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005144C8
 * Mangled: _ZN11CPVRTStringD2Ev
 * Demangled: CPVRTString::~CPVRTString()
 *
 * Callers: 2
 *   0x00000000001FC7E0  CPVRTString::~CPVRTString()
 *   0x000000000020DE70  sub_20DE70
 *
 * Callees: 1
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 6
 *   insn=0x00000000005144C8 string=0x00000000005144CC ""
 *   insn=0x00000000005144CC string=0x00000000005144D0 ")"
 *   insn=0x00000000005144D0 string=0x00000000005144D4 ")A"
 *   insn=0x00000000005144D4 string=0x00000000005144D8 "\t"
 *   insn=0x00000000005144DC string=0x00000000005144E0 "@"
 *   insn=0x00000000005144E0 string=0x00000000001F89E0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::~CPVRTString(CPVRTString *this)
{
  void *v1; // x8

  v1 = (void *)*((_QWORD *)this + 1);
  *(_QWORD *)this = off_6D8E38;
  free(v1);
}

