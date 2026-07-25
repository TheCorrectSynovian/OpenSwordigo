/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA844
 * Mangled: _ZN5Caver5Proto33GenericMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6370  Caver::Proto::GenericMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FA84C string=0x00000000002FA850 "S"
 *   insn=0x00000000002FA850 string=0x00000000002FA854 "s"
 *   insn=0x00000000002FA854 string=0x00000000002FA858 "`"
 *   insn=0x00000000002FA858 string=0x00000000002FA85C "`"
 *   insn=0x00000000002FA860 string=0x00000000002FA864 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::default_instance(
        Caver::Proto::GenericMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::GenericMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::GenericMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::GenericMonsterControllerComponent::default_instance_;
  }
  return result;
}

