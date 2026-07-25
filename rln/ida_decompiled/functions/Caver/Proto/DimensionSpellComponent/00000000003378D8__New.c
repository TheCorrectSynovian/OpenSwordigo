/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003378D8
 * Mangled: _ZNK5Caver5Proto23DimensionSpellComponent3NewEv
 * Demangled: Caver::Proto::DimensionSpellComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x00000000003378E0 string=0x00000000003378E4 "?"
 *   insn=0x00000000003378E4 string=0x00000000003378E8 "h"
 *   insn=0x00000000003378E4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003378E8 string=0x00000000003378EC "uB"
 *   insn=0x00000000003378EC string=0x00000000003378F0 "A"
 *   insn=0x00000000003378F0 string=0x00000000003378F4 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::DimensionSpellComponent::New(Caver::Proto::DimensionSpellComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x10u);
  *result = off_6C9BD0;
  result[1] = 0;
  return result;
}

