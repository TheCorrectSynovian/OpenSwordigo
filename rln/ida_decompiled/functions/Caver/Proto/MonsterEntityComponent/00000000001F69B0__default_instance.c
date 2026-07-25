/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F69B0
 * Mangled: ._ZN5Caver5Proto22MonsterEntityComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterEntityComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000027B1EC  Caver::MonsterEntityComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA0CC  Caver::Proto::MonsterEntityComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F69B8 string=0x00000000001F69BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MonsterEntityComponent::default_instance(Caver::Proto::MonsterEntityComponent *this)
{
  return _ZN5Caver5Proto22MonsterEntityComponent16default_instanceEv(this);
}

