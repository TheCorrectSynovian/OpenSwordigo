/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029A008
 * Mangled: _ZN5Caver31MonsterDeathControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MonsterDeathControllerComponent::ValueForBindedProperty(int)
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
__int64 __fastcall Caver::MonsterDeathControllerComponent::ValueForBindedProperty(
        Caver::MonsterDeathControllerComponent *this,
        int a2)
{
  return Caver::Component::ValueForBindedProperty(this, a2);
}

