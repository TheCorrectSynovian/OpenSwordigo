/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA5E8
 * Mangled: _ZN5Caver5Proto33WalkingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::WalkingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x0000000000202410  Caver::Proto::WalkingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA5F0 string=0x00000000002FA5F4 "S"
 *   insn=0x00000000002FA5F4 string=0x00000000002FA5F8 "s~G"
 *   insn=0x00000000002FA5F8 string=0x00000000002FA5FC "`"
 *   insn=0x00000000002FA5FC string=0x00000000002FA600 "`"
 *   insn=0x00000000002FA604 string=0x00000000002FA608 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WalkingMonsterControllerComponent::default_instance(
        Caver::Proto::WalkingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::WalkingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::WalkingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::WalkingMonsterControllerComponent::default_instance_;
  }
  return result;
}

