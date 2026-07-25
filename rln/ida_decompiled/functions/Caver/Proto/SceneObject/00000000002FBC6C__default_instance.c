/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBC6C
 * Mangled: _ZN5Caver5Proto11SceneObject16default_instanceEv
 * Demangled: Caver::Proto::SceneObject::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002FBC74 string=0x00000000002FBC78 "s"
 *   insn=0x00000000002FBC78 string=0x00000000002FBC7C "s"
 *   insn=0x00000000002FBC7C string=0x00000000002FBC80 "`"
 *   insn=0x00000000002FBC80 string=0x00000000002FBC84 "`"
 *   insn=0x00000000002FBC88 string=0x00000000002FBC8C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::default_instance(Caver::Proto::SceneObject *this)
{
  __int64 result; // x0

  result = Caver::Proto::SceneObject::default_instance_;
  if ( !Caver::Proto::SceneObject::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::SceneObject::default_instance_;
  }
  return result;
}

