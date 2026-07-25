/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033872C
 * Mangled: _ZN5Caver5Proto12MeshMaterial16default_instanceEv
 * Demangled: Caver::Proto::MeshMaterial::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000338734 string=0x0000000000338738 "s"
 *   insn=0x0000000000338738 string=0x000000000033873C "s"
 *   insn=0x000000000033873C string=0x0000000000338740 "`"
 *   insn=0x0000000000338740 string=0x0000000000338744 "`"
 *   insn=0x0000000000338744 string=0x0000000000338748 "B("
 *   insn=0x0000000000338748 string=0x000000000033874C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MeshMaterial::default_instance(Caver::Proto::MeshMaterial *this)
{
  __int64 result; // x0

  result = Caver::Proto::MeshMaterial::default_instance_;
  if ( !Caver::Proto::MeshMaterial::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::MeshMaterial::default_instance_;
  }
  return result;
}

