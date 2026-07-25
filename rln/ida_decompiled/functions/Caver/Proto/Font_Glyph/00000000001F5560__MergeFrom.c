/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5560
 * Mangled: ._ZN5Caver5Proto10Font_Glyph9MergeFromERKS1_
 * Demangled: Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph const&)
 *
 * Callers: 4
 *   0x00000000002D3664  Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph const&)
 *   0x00000000002D40D4  Caver::Proto::Font_Glyph::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D40D8  Caver::Proto::Font_Glyph::CopyFrom(Caver::Proto::Font_Glyph const&)
 *   0x00000000002D534C  google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *
 * Callees: 1
 *   0x00000000002D3664  Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5568 string=0x00000000001F556C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font_Glyph::MergeFrom(Caver::Proto::Font_Glyph *this, const Caver::Proto::Font_Glyph *a2)
{
  JUMPOUT(0x2D36BC);
}

