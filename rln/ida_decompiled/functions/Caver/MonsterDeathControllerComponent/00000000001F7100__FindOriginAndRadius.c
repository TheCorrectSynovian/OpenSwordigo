/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7100
 * Mangled: ._ZN5Caver31MonsterDeathControllerComponent19FindOriginAndRadiusEv
 * Demangled: Caver::MonsterDeathControllerComponent::FindOriginAndRadius(void)
 *
 * Callers: 1
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callees: 1
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7108 string=0x00000000001F710C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MonsterDeathControllerComponent::FindOriginAndRadius(
        Caver::MonsterDeathControllerComponent *this)
{
  JUMPOUT(0x29A4A8);
}

