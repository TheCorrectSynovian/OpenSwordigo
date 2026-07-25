/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEBC0
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto18Texture_SubtextureEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *
 * Callers: 1
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *
 * Callees: 1
 *   0x00000000002D33EC  google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEBC8 string=0x00000000001FEBCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto18Texture_SubtextureEE9MergeFromERKS5_();
}

