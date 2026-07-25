/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2B40
 * Mangled: _ZThn16_N5Caver20FireEmitterComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202ED0  Caver::FireEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::FireEmitterComponent::ValueForBindedProperty(
        Caver::FireEmitterComponent *this,
        int a2)
{
  return Caver::FireEmitterComponent::ValueForBindedProperty((Caver::FireEmitterComponent *)((char *)this - 16), a2);
}

