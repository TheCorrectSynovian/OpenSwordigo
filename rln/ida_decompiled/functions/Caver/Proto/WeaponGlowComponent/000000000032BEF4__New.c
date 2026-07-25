/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BEF4
 * Mangled: _ZNK5Caver5Proto19WeaponGlowComponent3NewEv
 * Demangled: Caver::Proto::WeaponGlowComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000032BF00 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000032BF04 string=0x000000000032BF08 ""
 *   insn=0x000000000032BF10 string=0x000000000032BF14 "A"
 *   insn=0x000000000032BF14 string=0x000000000032BF18 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::WeaponGlowComponent::New(Caver::Proto::WeaponGlowComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x28u);
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C9270;
  return result;
}

