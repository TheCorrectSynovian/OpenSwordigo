/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBD60
 * Mangled: ._ZN5Caver5Proto34SnappingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SnappingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000029F400  Caver::SnappingMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA650  Caver::Proto::SnappingMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBD68 string=0x00000000001FBD6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SnappingMonsterControllerComponent::default_instance(
        Caver::Proto::SnappingMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto34SnappingMonsterControllerComponent16default_instanceEv(this);
}

