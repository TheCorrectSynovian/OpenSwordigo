/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6298
 * Mangled: _ZN5Caver5Proto10GUIMargins16default_instanceEv
 * Demangled: Caver::Proto::GUIMargins::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D62A4 string=0x00000000002D62A8 "s"
 *   insn=0x00000000002D62A8 string=0x00000000002D62AC "`"
 *   insn=0x00000000002D62AC string=0x00000000002D62B0 "`"
 *   insn=0x00000000002D62B4 string=0x00000000002D62B8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIMargins::default_instance(Caver::Proto::GUIMargins *this)
{
  __int64 result; // x0

  result = Caver::Proto::GUIMargins::default_instance_;
  if ( !Caver::Proto::GUIMargins::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::GUIMargins::default_instance_;
  }
  return result;
}

