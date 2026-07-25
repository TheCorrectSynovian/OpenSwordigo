/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003268B8
 * Mangled: _ZNK5Caver5Proto33LeapingMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::LeapingMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003268C0 string=0x00000000003268C4 "G;"
 *   insn=0x00000000003268C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003268C8 string=0x00000000003268CC ""
 *   insn=0x00000000003268D0 string=0x00000000003268D4 "A"
 *   insn=0x00000000003268D4 string=0x00000000003268D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::LeapingMonsterControllerComponent::New(
        Caver::Proto::LeapingMonsterControllerComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x18u);
  result[1] = 0;
  result[2] = 0;
  *result = off_6C8D48;
  return result;
}

