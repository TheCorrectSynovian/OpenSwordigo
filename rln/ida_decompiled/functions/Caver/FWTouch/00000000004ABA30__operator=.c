/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABA30
 * Mangled: _ZN5Caver7FWTouchaSERKS0_
 * Demangled: Caver::FWTouch::operator=(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001F6C60  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004ABA30 string=0x00000000004ABA34 ""
 *   insn=0x00000000004ABA34 string=0x00000000004ABA38 "("
 *   insn=0x00000000004ABA38 string=0x00000000004ABA3C ""
 *   insn=0x00000000004ABA3C string=0x00000000004ABA40 "(@"
 *   insn=0x00000000004ABA40 string=0x00000000004ABA44 ""
 *   insn=0x00000000004ABA44 string=0x00000000004ABA48 "("
 *   insn=0x00000000004ABA48 string=0x00000000004ABA4C ""
 *   insn=0x00000000004ABA4C string=0x00000000004ABA50 "("
 *   insn=0x00000000004ABA50 string=0x00000000004ABA54 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::FWTouch::operator=(_QWORD *result, _QWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  return result;
}

