/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003120A4
 * Mangled: _ZNK5Caver5Proto27CharAnimControllerComponent3NewEv
 * Demangled: Caver::Proto::CharAnimControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003120AC string=0x00000000003120B0 "L"
 *   insn=0x00000000003120B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003120B4 string=0x00000000003120B8 ""
 *   insn=0x00000000003120C0 string=0x00000000003120C4 "A"
 *   insn=0x00000000003120C4 string=0x00000000003120C8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::CharAnimControllerComponent::New(Caver::Proto::CharAnimControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x28u);
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C7EC0;
  return result;
}

