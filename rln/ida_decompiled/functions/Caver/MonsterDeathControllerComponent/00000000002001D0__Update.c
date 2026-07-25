/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001D0
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent6UpdateEf
 * Demangled: Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x000000000029B518  `non-virtual thunk to'Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000029B3FC  Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001D8 string=0x00000000002001DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterDeathControllerComponent::Update(
        Caver::MonsterDeathControllerComponent *this,
        float a2)
{
  return _ZN5Caver31MonsterDeathControllerComponent6UpdateEf(this, a2);
}

