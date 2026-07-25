/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D0DD8
 * Mangled: _ZN5Caver5Proto10FloatColor16default_instanceEv
 * Demangled: Caver::Proto::FloatColor::default_instance(void)
 *
 * Callers: 1
 *   0x00000000001F6310  Caver::Proto::FloatColor::default_instance(void)
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D0DE4 string=0x00000000002D0DE8 "s"
 *   insn=0x00000000002D0DE8 string=0x00000000002D0DEC "`"
 *   insn=0x00000000002D0DEC string=0x00000000002D0DF0 "`"
 *   insn=0x00000000002D0DF0 string=0x00000000002D0DF4 "3"
 *   insn=0x00000000002D0DF4 string=0x00000000002D0DF8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::FloatColor::default_instance(Caver::Proto::FloatColor *this)
{
  __int64 result; // x0

  result = Caver::Proto::FloatColor::default_instance_;
  if ( !Caver::Proto::FloatColor::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::FloatColor::default_instance_;
  }
  return result;
}

