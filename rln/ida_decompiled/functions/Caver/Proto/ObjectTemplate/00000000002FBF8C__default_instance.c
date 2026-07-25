/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBF8C
 * Mangled: _ZN5Caver5Proto14ObjectTemplate16default_instanceEv
 * Demangled: Caver::Proto::ObjectTemplate::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202850  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FBF94 string=0x00000000002FBF98 "S"
 *   insn=0x00000000002FBF98 string=0x00000000002FBF9C "sNE"
 *   insn=0x00000000002FBF9C string=0x00000000002FBFA0 "`"
 *   insn=0x00000000002FBFA0 string=0x00000000002FBFA4 "`"
 *   insn=0x00000000002FBFA4 string=0x00000000002FBFA8 "*"
 *   insn=0x00000000002FBFA8 string=0x00000000002FBFAC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::default_instance(Caver::Proto::ObjectTemplate *this)
{
  __int64 result; // x0

  result = Caver::Proto::ObjectTemplate::default_instance_;
  if ( !Caver::Proto::ObjectTemplate::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Scene_2eproto(0);
    return Caver::Proto::ObjectTemplate::default_instance_;
  }
  return result;
}

