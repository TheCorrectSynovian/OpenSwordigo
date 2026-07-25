/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514480
 * Mangled: _ZN11CPVRTStringC2Ev
 * Demangled: CPVRTString::CPVRTString(void)
 *
 * Callers: 1
 *   0x00000000001F7E90  CPVRTString::CPVRTString(void)
 *
 * Callees: 1
 *   0x00000000001F6770  .calloc
 *
 * Referenced strings: 6
 *   insn=0x0000000000514494 string=0x0000000000514498 ""
 *   insn=0x00000000005144A4 string=0x00000000005144A8 "A"
 *   insn=0x00000000005144A8 string=0x00000000005144AC "h"
 *   insn=0x00000000005144AC string=0x00000000005144B0 "`"
 *   insn=0x00000000005144B4 string=0x00000000005144B8 "`"
 *   insn=0x00000000005144B4 string=0x00000000001F6770 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::CPVRTString(CPVRTString *this)
{
  *(_QWORD *)this = off_6D8E38;
  *((_OWORD *)this + 1) = xmmword_58B480;
  *((_QWORD *)this + 1) = calloc(1u, 1u);
}

