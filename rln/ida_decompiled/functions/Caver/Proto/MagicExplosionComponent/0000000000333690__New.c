/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000333690
 * Mangled: _ZNK5Caver5Proto23MagicExplosionComponent3NewEv
 * Demangled: Caver::Proto::MagicExplosionComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x000000000033369C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003336A0 string=0x00000000003336A4 "YD"
 *   insn=0x00000000003336AC string=0x00000000003336B0 "A"
 *   insn=0x00000000003336B0 string=0x00000000003336B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::MagicExplosionComponent::New(Caver::Proto::MagicExplosionComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x28u);
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C9798;
  return result;
}

