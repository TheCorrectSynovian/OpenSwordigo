/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB80
 * Mangled: ._ZN5Caver5Proto34BouncingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002941C8  Caver::BouncingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA7DC  Caver::Proto::BouncingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB88 string=0x00000000001FAB8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::default_instance(
        Caver::Proto::BouncingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto34BouncingMonsterControllerComponent16default_instanceEv(this);
}

