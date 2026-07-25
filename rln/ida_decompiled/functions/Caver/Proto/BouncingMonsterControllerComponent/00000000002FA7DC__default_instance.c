/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA7DC
 * Mangled: _ZN5Caver5Proto34BouncingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BouncingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FAB80  Caver::Proto::BouncingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA7E4 string=0x00000000002FA7E8 "S"
 *   insn=0x00000000002FA7E8 string=0x00000000002FA7EC "s*D"
 *   insn=0x00000000002FA7EC string=0x00000000002FA7F0 "`"
 *   insn=0x00000000002FA7F0 string=0x00000000002FA7F4 "`"
 *   insn=0x00000000002FA7F8 string=0x00000000002FA7FC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BouncingMonsterControllerComponent::default_instance(
        Caver::Proto::BouncingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BouncingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::BouncingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BouncingMonsterControllerComponent::default_instance_;
  }
  return result;
}

