/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D39F4
 * Mangled: _ZN5Caver5Proto10Font_Glyph16default_instanceEv
 * Demangled: Caver::Proto::Font_Glyph::default_instance(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000002D3A00 string=0x00000000002D3A04 "s"
 *   insn=0x00000000002D3A04 string=0x00000000002D3A08 "`"
 *   insn=0x00000000002D3A08 string=0x00000000002D3A0C "`"
 *   insn=0x00000000002D3A0C string=0x00000000002D3A10 ","
 *   insn=0x00000000002D3A10 string=0x00000000002D3A14 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Font_Glyph::default_instance(Caver::Proto::Font_Glyph *this)
{
  __int64 result; // x0

  result = Caver::Proto::Font_Glyph::default_instance_;
  if ( !Caver::Proto::Font_Glyph::default_instance_ )
  {
    Caver::Proto::protobuf_AddDesc_Common_2eproto(0);
    return Caver::Proto::Font_Glyph::default_instance_;
  }
  return result;
}

