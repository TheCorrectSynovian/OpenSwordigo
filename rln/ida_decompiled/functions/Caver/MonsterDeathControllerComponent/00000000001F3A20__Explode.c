/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A20
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent7ExplodeEv
 * Demangled: Caver::MonsterDeathControllerComponent::Explode(void)
 *
 * Callers: 1
 *   0x000000000029B3FC  Caver::MonsterDeathControllerComponent::Update(float)
 *
 * Callees: 1
 *   0x000000000029B1B4  Caver::MonsterDeathControllerComponent::Explode(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A28 string=0x00000000001F3A2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MonsterDeathControllerComponent::Explode(Caver::MonsterDeathControllerComponent *this)
{
  return _ZN5Caver31MonsterDeathControllerComponent7ExplodeEv(this);
}

