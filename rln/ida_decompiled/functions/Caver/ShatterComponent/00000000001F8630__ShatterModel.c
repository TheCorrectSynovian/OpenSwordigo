/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8630
 * Mangled: ._ZN5Caver16ShatterComponent12ShatterModelEPNS_14ModelComponentEb
 * Demangled: Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Callers: 3
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x00000000002AF110  Caver::ShatterComponent::ShatterModel(Caver::ModelComponent *,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8638 string=0x00000000001F863C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ShatterComponent::ShatterModel(
        Caver::ShatterComponent *this,
        Caver::ModelComponent *a2,
        bool a3)
{
  return _ZN5Caver16ShatterComponent12ShatterModelEPNS_14ModelComponentEb(this, a2, a3);
}

