/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D40D8
 * Mangled: _ZN5Caver5Proto10Font_Glyph8CopyFromERKS1_
 * Demangled: Caver::Proto::Font_Glyph::CopyFrom(Caver::Proto::Font_Glyph const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5560  Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&)
 *
 * Referenced strings: 3
 *   insn=0x00000000002D40EC string=0x00000000002D40F0 "@"
 *   insn=0x00000000002D40F8 string=0x00000000002D40FC ""
 *   insn=0x00000000002D4114 string=0x00000000001F5560 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Font_Glyph::CopyFrom(Caver::Proto::Font_Glyph *this, const Caver::Proto::Font_Glyph *a2)
{
  if ( a2 != this )
  {
    (*(void (__fastcall **)(Caver::Proto::Font_Glyph *))(*(_QWORD *)this + 32LL))(this);
    Caver::Proto::Font_Glyph::MergeFrom(this, a2);
  }
}

