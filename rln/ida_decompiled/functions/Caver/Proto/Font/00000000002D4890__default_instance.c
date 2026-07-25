/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4890
 * Mangled: _ZN5Caver5Proto4Font16default_instanceEv
 * Demangled: Caver::Proto::Font::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D489C string=0x00000000002D48A0 "s"D"
 *   insn=0x00000000002D48A0 string=0x00000000002D48A4 "`"
 *   insn=0x00000000002D48A4 string=0x00000000002D48A8 "`"
 *   insn=0x00000000002D48AC string=0x00000000002D48B0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font::default_instance(Caver::Proto::Font *this)
{
  __int64 result; // x0

  result = Caver::Proto::Font::default_instance_;
  if ( !Caver::Proto::Font::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Font::default_instance_;
  }
  return result;
}

