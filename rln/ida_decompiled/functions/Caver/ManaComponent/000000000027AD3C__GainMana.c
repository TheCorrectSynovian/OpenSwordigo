/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AD3C
 * Mangled: _ZN5Caver13ManaComponent8GainManaEi
 * Demangled: Caver::ManaComponent::GainMana(int)
 *
 * Callers: 1
 *   0x0000000000201800  Caver::ManaComponent::GainMana(int)
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000027AD3C string=0x000000000027AD40 ""
 *   insn=0x000000000027AD40 string=0x000000000027AD44 "?"
 *   insn=0x000000000027AD44 string=0x000000000027AD48 ""
 *   insn=0x000000000027AD48 string=0x000000000027AD4C "}"
 *   insn=0x000000000027AD4C string=0x000000000027AD50 "t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaComponent::GainMana(__int64 this, int a2)
{
  int v2; // w8

  v2 = *(_DWORD *)(this + 116) + a2;
  if ( *(_DWORD *)(this + 112) <= v2 )
    v2 = *(_DWORD *)(this + 112);
  *(_DWORD *)(this + 116) = v2 & ~(v2 >> 31);
  return this;
}

