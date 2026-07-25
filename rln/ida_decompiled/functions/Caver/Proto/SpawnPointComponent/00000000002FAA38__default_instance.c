/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FAA38
 * Mangled: _ZN5Caver5Proto19SpawnPointComponent16default_instanceEv
 * Demangled: Caver::Proto::SpawnPointComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6EF0  Caver::Proto::SpawnPointComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FAA40 string=0x00000000002FAA44 "S"
 *   insn=0x00000000002FAA44 string=0x00000000002FAA48 "s&@"
 *   insn=0x00000000002FAA48 string=0x00000000002FAA4C "`"
 *   insn=0x00000000002FAA4C string=0x00000000002FAA50 "`"
 *   insn=0x00000000002FAA54 string=0x00000000002FAA58 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::default_instance(Caver::Proto::SpawnPointComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SpawnPointComponent::default_instance_;
  if ( !Caver::Proto::SpawnPointComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SpawnPointComponent::default_instance_;
  }
  return result;
}

