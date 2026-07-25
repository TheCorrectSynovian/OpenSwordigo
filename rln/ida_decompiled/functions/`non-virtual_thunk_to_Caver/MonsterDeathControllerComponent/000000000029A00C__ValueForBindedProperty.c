/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029A00C
 * Mangled: _ZThn16_N5Caver31MonsterDeathControllerComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::MonsterDeathControllerComponent::ValueForBindedProperty(int)
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

__int64 __fastcall `non-virtual thunk to'Caver::MonsterDeathControllerComponent::ValueForBindedProperty(
        Caver::MonsterDeathControllerComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty((Caver::MonsterDeathControllerComponent *)((char *)this - 16), a2);
}

