/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9750
 * Mangled: ._ZN5Caver5Proto32StaticMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A0758  Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA740  Caver::Proto::StaticMonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9758 string=0x00000000001F975C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::default_instance(
        Caver::Proto::StaticMonsterControllerComponent *this)
{
  return _ZN5Caver5Proto32StaticMonsterControllerComponent16default_instanceEv(this);
}

