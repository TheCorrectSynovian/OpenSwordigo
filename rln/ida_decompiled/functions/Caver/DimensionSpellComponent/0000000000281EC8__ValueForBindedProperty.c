/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281EC8
 * Mangled: _ZN5Caver23DimensionSpellComponent22ValueForBindedPropertyEi
 * Demangled: Caver::DimensionSpellComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281EC8 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::DimensionSpellComponent::ValueForBindedProperty(Caver::DimensionSpellComponent *this, int a2)
{
  return Caver::SpellComponent::ValueForBindedProperty(this, a2);
}

