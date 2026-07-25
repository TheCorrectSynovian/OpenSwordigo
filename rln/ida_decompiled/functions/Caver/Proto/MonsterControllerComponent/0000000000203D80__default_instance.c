/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203D80
 * Mangled: ._ZN5Caver5Proto26MonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000299678  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA5B4  Caver::Proto::MonsterControllerComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203D88 string=0x0000000000203D8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MonsterControllerComponent::default_instance(
        Caver::Proto::MonsterControllerComponent *this)
{
  return _ZN5Caver5Proto26MonsterControllerComponent16default_instanceEv(this);
}

