/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA740
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F9750  Caver::Proto::StaticMonsterControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA748 string=0x00000000002FA74C "s"
 *   insn=0x00000000002FA74C string=0x00000000002FA750 "s"
 *   insn=0x00000000002FA750 string=0x00000000002FA754 "`"
 *   insn=0x00000000002FA754 string=0x00000000002FA758 "`"
 *   insn=0x00000000002FA758 string=0x00000000002FA75C "= "
 *   insn=0x00000000002FA75C string=0x00000000002FA760 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::default_instance(
        Caver::Proto::StaticMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::StaticMonsterControllerComponent::default_instance_;
  if ( !Caver::Proto::StaticMonsterControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::StaticMonsterControllerComponent::default_instance_;
  }
  return result;
}

