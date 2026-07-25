/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D40D4
 * Mangled: _ZN5Caver5Proto10Font_Glyph21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Font_Glyph::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5560  Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D40D4 string=0x00000000001F5560 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font_Glyph::CheckTypeAndMergeFrom(
        Caver::Proto::Font_Glyph *this,
        const Caver::Proto::Font_Glyph *a2)
{
  Caver::Proto::Font_Glyph::MergeFrom(this, a2);
}

