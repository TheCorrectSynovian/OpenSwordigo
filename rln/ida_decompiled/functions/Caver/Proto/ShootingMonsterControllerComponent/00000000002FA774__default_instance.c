/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA774
 * Mangled: _ZN5Caver5Proto34ShootingMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::ShootingMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FE000  Caver::Proto::ShootingMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA77C string=0x00000000002FA780 "s"
 *   insn=0x00000000002FA780 string=0x00000000002FA784 "s:@"
 *   insn=0x00000000002FA784 string=0x00000000002FA788 "`"
 *   insn=0x00000000002FA788 string=0x00000000002FA78C "`"
 *   insn=0x00000000002FA78C string=0x00000000002FA790 "0 "
 *   insn=0x00000000002FA790 string=0x00000000002FA794 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ShootingMonsterControllerComponent::default_instance(
        Caver::Proto::ShootingMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::ShootingMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::ShootingMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ShootingMonsterControllerComponent::default_instance_;
  }
  return result;
}

