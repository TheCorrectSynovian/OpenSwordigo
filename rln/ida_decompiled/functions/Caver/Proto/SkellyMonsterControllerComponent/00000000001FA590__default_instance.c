/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA590
 * Mangled: ._ZN5Caver5Proto32SkellyMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000029DB00  Caver::SkellyMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA70C  Caver::Proto::SkellyMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA598 string=0x00000000001FA59C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::default_instance(
        Caver::Proto::SkellyMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto32SkellyMonsterControllerComponent16default_instanceEv(this);
}

