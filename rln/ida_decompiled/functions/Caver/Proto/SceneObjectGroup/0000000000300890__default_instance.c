/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300890
 * Mangled: _ZN5Caver5Proto16SceneObjectGroup16default_instanceEv
 * Demangled: Caver::Proto::SceneObjectGroup::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000300898 string=0x000000000030089C "3"
 *   insn=0x000000000030089C string=0x00000000003008A0 "szD"
 *   insn=0x00000000003008A0 string=0x00000000003008A4 "`"
 *   insn=0x00000000003008A4 string=0x00000000003008A8 "`"
 *   insn=0x00000000003008AC string=0x00000000003008B0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObjectGroup::default_instance(Caver::Proto::SceneObjectGroup *this)
{
  __int64 result; // x0

  result = Caver::Proto::SceneObjectGroup::default_instance_;
  if ( !Caver::Proto::SceneObjectGroup::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SceneObjectGroup::default_instance_;
  }
  return result;
}

