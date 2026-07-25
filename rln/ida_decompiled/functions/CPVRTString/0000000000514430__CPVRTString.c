/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514430
 * Mangled: _ZN11CPVRTStringC2Ec
 * Demangled: CPVRTString::CPVRTString(char)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5E70  .malloc
 *
 * Referenced strings: 4
 *   insn=0x000000000051443C string=0x0000000000514440 ""
 *   insn=0x000000000051444C string=0x0000000000514450 "A"
 *   insn=0x0000000000514458 string=0x000000000051445C ""
 *   insn=0x0000000000514458 string=0x00000000001F5E70 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall CPVRTString::CPVRTString(CPVRTString *this, char a2)
{
  _BYTE *v4; // x0

  *(_QWORD *)this = off_6D8E38;
  v4 = malloc(2u);
  *((_QWORD *)this + 1) = v4;
  *((_OWORD *)this + 1) = xmmword_594F40;
  *v4 = a2;
  v4[1] = 0;
}

