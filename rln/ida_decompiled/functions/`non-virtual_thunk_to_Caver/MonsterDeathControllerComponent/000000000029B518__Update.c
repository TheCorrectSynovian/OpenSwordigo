/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029B518
 * Mangled: _ZThn24_N5Caver31MonsterDeathControllerComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002001D0  Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x000000000029B518 string=0x000000000029B51C "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MonsterDeathControllerComponent::Update(
        Caver::MonsterDeathControllerComponent *this,
        float a2)
{
  return Caver::MonsterDeathControllerComponent::Update(
           (Caver::MonsterDeathControllerComponent *)((char *)this - 24),
           a2);
}

