/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABA04
 * Mangled: _ZN5Caver7FWTouchC2ERKS0_
 * Demangled: Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *
 * Callers: 1
 *   0x00000000001FD9E0  Caver::FWTouch::FWTouch(Caver::FWTouch const&)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004ABA04 string=0x00000000004ABA08 ""
 *   insn=0x00000000004ABA08 string=0x00000000004ABA0C "("
 *   insn=0x00000000004ABA0C string=0x00000000004ABA10 ""
 *   insn=0x00000000004ABA10 string=0x00000000004ABA14 "(@"
 *   insn=0x00000000004ABA14 string=0x00000000004ABA18 ""
 *   insn=0x00000000004ABA18 string=0x00000000004ABA1C "("
 *   insn=0x00000000004ABA1C string=0x00000000004ABA20 ""
 *   insn=0x00000000004ABA20 string=0x00000000004ABA24 "("
 *   insn=0x00000000004ABA24 string=0x00000000004ABA28 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::FWTouch::FWTouch(_QWORD *result, _QWORD *a2)
{
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  result[4] = a2[4];
  return result;
}

