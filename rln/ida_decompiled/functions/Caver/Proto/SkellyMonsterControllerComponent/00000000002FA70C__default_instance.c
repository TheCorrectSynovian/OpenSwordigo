/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA70C
 * Mangled: _ZN5Caver5Proto32SkellyMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::SkellyMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FA590  Caver::Proto::SkellyMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA714 string=0x00000000002FA718 "s"
 *   insn=0x00000000002FA718 string=0x00000000002FA71C "s"E"
 *   insn=0x00000000002FA71C string=0x00000000002FA720 "`"
 *   insn=0x00000000002FA720 string=0x00000000002FA724 "`"
 *   insn=0x00000000002FA724 string=0x00000000002FA728 "J "
 *   insn=0x00000000002FA728 string=0x00000000002FA72C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SkellyMonsterControllerComponent::default_instance(
        Caver::Proto::SkellyMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::SkellyMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::SkellyMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SkellyMonsterControllerComponent::default_instance_;
  }
  return result;
}

