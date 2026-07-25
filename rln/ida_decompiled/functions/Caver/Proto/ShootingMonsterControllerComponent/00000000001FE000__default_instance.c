/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE000
 * Mangled: ._ZN5Caver5Proto34ShootingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000029C638  Caver::ShootingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA774  Caver::Proto::ShootingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE008 string=0x00000000001FE00C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::default_instance(
        Caver::Proto::ShootingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto34ShootingMonsterControllerComponent16default_instanceEv(this);
}

