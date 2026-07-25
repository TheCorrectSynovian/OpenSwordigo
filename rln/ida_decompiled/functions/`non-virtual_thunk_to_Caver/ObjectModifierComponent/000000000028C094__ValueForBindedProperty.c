/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028C094
 * Mangled: _ZThn16_N5Caver23ObjectModifierComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ObjectModifierComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::ObjectModifierComponent::ValueForBindedProperty(
        Caver::ObjectModifierComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::ObjectModifierComponent *)((char *)this - 16), a2);
}

