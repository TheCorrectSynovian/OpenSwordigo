/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000332BF8
 * Mangled: _ZNK5Caver5Proto18MagicBoltComponent3NewEv
 * Demangled: Caver::Proto::MagicBoltComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x0000000000332C00 string=0x0000000000332C04 "w\n"
 *   insn=0x0000000000332C04 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000332C08 string=0x0000000000332C0C "YF"
 *   insn=0x0000000000332C14 string=0x0000000000332C18 "A"
 *   insn=0x0000000000332C18 string=0x0000000000332C1C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::MagicBoltComponent::New(Caver::Proto::MagicBoltComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x28u);
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = off_6C9720;
  return result;
}

