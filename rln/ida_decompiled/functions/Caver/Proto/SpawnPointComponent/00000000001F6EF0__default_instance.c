/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6EF0
 * Mangled: ._ZN5Caver5Proto19SpawnPointComponent16default_instanceEv
 * Demangled: Caver::Proto::SpawnPointComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000023AB7C  Caver::SpawnPointComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FAA38  Caver::Proto::SpawnPointComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6EF8 string=0x00000000001F6EFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::SpawnPointComponent::default_instance(Caver::Proto::SpawnPointComponent *this)
{
  return _ZN5Caver5Proto19SpawnPointComponent16default_instanceEv(this);
}

