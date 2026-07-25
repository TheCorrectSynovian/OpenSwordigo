/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202410
 * Mangled: ._ZN5Caver5Proto33WalkingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A1298  Caver::WalkingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA5E8  Caver::Proto::WalkingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202418 string=0x000000000020241C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::default_instance(
        Caver::Proto::WalkingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto33WalkingMonsterControllerComponent16default_instanceEv(this);
}

