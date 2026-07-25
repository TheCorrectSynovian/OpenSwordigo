/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003349E4
 * Mangled: _ZNK5Caver5Proto23MagicSpellCastComponent3NewEv
 * Demangled: Caver::Proto::MagicSpellCastComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000003349F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003349F4 string=0x00000000003349F8 "YC"
 *   insn=0x00000000003349FC string=0x0000000000334A00 "A"
 *   insn=0x0000000000334A00 string=0x0000000000334A04 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::MagicSpellCastComponent::New(Caver::Proto::MagicSpellCastComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C9888;
  return result;
}

