/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BA10
 * Mangled: _ZN5Caver23MagicSpellCastComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicSpellCastComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicSpellCastComponent::ValueForBindedProperty(Caver::MagicSpellCastComponent *this, int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

