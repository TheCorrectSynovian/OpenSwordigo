/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000277BE4
 * Mangled: _ZThn16_N5Caver17ItemDropComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202B60  Caver::ItemDropComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::ItemDropComponent::ValueForBindedProperty(
        Caver::ItemDropComponent *this,
        int a2)
{
  return Caver::ItemDropComponent::ValueForBindedProperty((Caver::ItemDropComponent *)((char *)this - 16), a2);
}

