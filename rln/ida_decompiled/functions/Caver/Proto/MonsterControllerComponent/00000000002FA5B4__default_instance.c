/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA5B4
 * Mangled: _ZN5Caver5Proto26MonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000203D80  Caver::Proto::MonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA5BC string=0x00000000002FA5C0 "s"
 *   insn=0x00000000002FA5C0 string=0x00000000002FA5C4 "s:G"
 *   insn=0x00000000002FA5C4 string=0x00000000002FA5C8 "`"
 *   insn=0x00000000002FA5C8 string=0x00000000002FA5CC "`"
 *   insn=0x00000000002FA5D0 string=0x00000000002FA5D4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterControllerComponent::default_instance(
        Caver::Proto::MonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::MonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MonsterControllerComponent::default_instance_;
  }
  return result;
}

