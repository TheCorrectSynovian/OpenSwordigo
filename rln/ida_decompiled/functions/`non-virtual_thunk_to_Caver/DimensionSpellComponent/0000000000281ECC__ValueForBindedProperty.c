/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281ECC
 * Mangled: _ZThn16_N5Caver23DimensionSpellComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::DimensionSpellComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBA90  Caver::SpellComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000281ED0 string=0x00000000001FBA90 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::DimensionSpellComponent::ValueForBindedProperty(
        Caver::DimensionSpellComponent *this,
        int a2)
{
  return Caver::SpellComponent::ValueForBindedProperty((Caver::DimensionSpellComponent *)((char *)this - 16), a2);
}

