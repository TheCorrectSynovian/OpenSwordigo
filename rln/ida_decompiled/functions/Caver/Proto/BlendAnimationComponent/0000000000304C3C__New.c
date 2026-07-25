/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000304C3C
 * Mangled: _ZNK5Caver5Proto23BlendAnimationComponent3NewEv
 * Demangled: Caver::Proto::BlendAnimationComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000304C44 string=0x0000000000304C48 "f"
 *   insn=0x0000000000304C48 string=0x0000000000304C4C ""
 *   insn=0x0000000000304C48 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000304C4C string=0x0000000000304C50 ""
 *   insn=0x0000000000304C54 string=0x0000000000304C58 "A"
 *   insn=0x0000000000304C58 string=0x0000000000304C5C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::BlendAnimationComponent::New(Caver::Proto::BlendAnimationComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C76C8;
  result[1] = 0;
  return result;
}

