/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003379F0
 * Mangled: _ZN5Caver5Proto23DimensionSpellComponent4SwapEPS1_
 * Demangled: Caver::Proto::DimensionSpellComponent::Swap(Caver::Proto::DimensionSpellComponent*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000003379F4 string=0x00000000003379F8 "(@"
 *   insn=0x00000000003379F8 string=0x00000000003379FC "\t@"
 *   insn=0x00000000003379FC string=0x0000000000337A00 ""
 *   insn=0x0000000000337A00 string=0x0000000000337A04 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::DimensionSpellComponent *__fastcall Caver::Proto::DimensionSpellComponent::Swap(
        Caver::Proto::DimensionSpellComponent *this,
        Caver::Proto::DimensionSpellComponent *a2)
{
  int v2; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v2;
  }
  return this;
}

