/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000323780
 * Mangled: _ZNK5Caver5Proto22ParticleFieldComponent3NewEv
 * Demangled: Caver::Proto::ParticleFieldComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000032378C string=0x0000000000323790 ""
 *   insn=0x000000000032378C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000323790 string=0x0000000000323794 ""
 *   insn=0x0000000000323794 string=0x0000000000323798 "A"
 *   insn=0x0000000000323798 string=0x000000000032379C "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::ParticleFieldComponent::New(Caver::Proto::ParticleFieldComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x10u);
  *result = off_6C8A78;
  result[1] = 0;
  return result;
}

