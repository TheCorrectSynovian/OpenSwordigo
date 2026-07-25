/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BA14
 * Mangled: _ZThn16_N5Caver23MagicSpellCastComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MagicSpellCastComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x000000000028BA14 string=0x000000000028BA18 "."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MagicSpellCastComponent::ValueForBindedProperty(
        Caver::MagicSpellCastComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::MagicSpellCastComponent *)((char *)this - 16), a2);
}

