/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AC18
 * Mangled: _ZThn16_N5Caver13ManaComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ManaComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::ManaComponent::ValueForBindedProperty(
        Caver::ManaComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::ManaComponent *)((char *)this - 16), a2);
}

