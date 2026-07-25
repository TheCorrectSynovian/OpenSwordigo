/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FA810
 * Mangled: _ZN5Caver5Proto31MonsterDeathControllerComponent16default_instanceEv
 * Demangled: Caver::Proto::MonsterDeathControllerComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001FE870  Caver::Proto::MonsterDeathControllerComponent::default_instance(void)
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FA818 string=0x00000000002FA81C "s"
 *   insn=0x00000000002FA81C string=0x00000000002FA820 "sjD"
 *   insn=0x00000000002FA820 string=0x00000000002FA824 "`"
 *   insn=0x00000000002FA824 string=0x00000000002FA828 "`"
 *   insn=0x00000000002FA828 string=0x00000000002FA82C "\t "
 *   insn=0x00000000002FA82C string=0x00000000002FA830 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MonsterDeathControllerComponent::default_instance(
        Caver::Proto::MonsterDeathControllerComponent *this)
{
  __int64 result; // x0

  result = Caver::Proto::MonsterDeathControllerComponent::default_instance_;
  if ( !Caver::Proto::MonsterDeathControllerComponent::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MonsterDeathControllerComponent::default_instance_;
  }
  return result;
}

