/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA7A8
 * Mangled: _ZN5Caver5Proto29BatMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::BatMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FE390  Caver::Proto::BatMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA7B0 string=0x00000000002FA7B4 "s"
 *   insn=0x00000000002FA7B4 string=0x00000000002FA7B8 "s"
 *   insn=0x00000000002FA7B8 string=0x00000000002FA7BC "`"
 *   insn=0x00000000002FA7BC string=0x00000000002FA7C0 "`"
 *   insn=0x00000000002FA7C0 string=0x00000000002FA7C4 "# "
 *   insn=0x00000000002FA7C4 string=0x00000000002FA7C8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::BatMonsterControllerComponent::default_instance(
        Caver::Proto::BatMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::BatMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::BatMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::BatMonsterControllerComponent::default_instance_;
  }
  return result;
}

