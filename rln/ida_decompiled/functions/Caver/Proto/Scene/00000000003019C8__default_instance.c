/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003019C8
 * Mangled: _ZN5Caver5Proto5Scene16default_instanceEv
 * Demangled: Caver::Proto::Scene::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000003019D0 string=0x00000000003019D4 "3"
 *   insn=0x00000000003019D4 string=0x00000000003019D8 "s"
 *   insn=0x00000000003019D8 string=0x00000000003019DC "`"
 *   insn=0x00000000003019DC string=0x00000000003019E0 "`"
 *   insn=0x00000000003019E4 string=0x00000000003019E8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Scene::default_instance(Caver::Proto::Scene *this)
{
  __int64 result; // x0

  result = Caver::Proto::Scene::default_instance_;
  if ( !Caver::Proto::Scene::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::Scene::default_instance_;
  }
  return result;
}

