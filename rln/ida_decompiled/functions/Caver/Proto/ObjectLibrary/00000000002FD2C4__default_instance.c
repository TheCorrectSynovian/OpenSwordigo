/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FD2C4
 * Mangled: _ZN5Caver5Proto13ObjectLibrary16default_instanceEv
 * Demangled: Caver::Proto::ObjectLibrary::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FD2CC string=0x00000000002FD2D0 "S"
 *   insn=0x00000000002FD2D0 string=0x00000000002FD2D4 "s"
 *   insn=0x00000000002FD2D4 string=0x00000000002FD2D8 "`"
 *   insn=0x00000000002FD2D8 string=0x00000000002FD2DC "`"
 *   insn=0x00000000002FD2DC string=0x00000000002FD2E0 "\"
 *   insn=0x00000000002FD2E0 string=0x00000000002FD2E4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::default_instance(Caver::Proto::ObjectLibrary *this)
{
  __int64 result; // x0

  result = Caver::Proto::ObjectLibrary::default_instance_;
  if ( !Caver::Proto::ObjectLibrary::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ObjectLibrary::default_instance_;
  }
  return result;
}

