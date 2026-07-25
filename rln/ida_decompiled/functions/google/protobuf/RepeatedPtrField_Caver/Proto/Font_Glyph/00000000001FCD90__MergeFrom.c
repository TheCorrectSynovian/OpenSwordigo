/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCD90
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10Font_GlyphEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *
 * Callers: 1
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *
 * Callees: 1
 *   0x00000000002D534C  google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCD98 string=0x00000000001FCD9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Font_Glyph>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10Font_GlyphEE9MergeFromERKS5_();
}

