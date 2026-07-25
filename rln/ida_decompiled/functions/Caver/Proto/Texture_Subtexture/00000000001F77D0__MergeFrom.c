/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F77D0
 * Mangled: ._ZN5Caver5Proto18Texture_Subtexture9MergeFromERKS1_
 * Demangled: Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&)
 *
 * Callers: 4
 *   0x00000000002D12AC  Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000002D1BF8  Caver::Proto::Texture_Subtexture::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D1BFC  Caver::Proto::Texture_Subtexture::CopyFrom(Caver::Proto::Texture_Subtexture const&)
 *   0x00000000002D33EC  google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::Texture_Subtexture> const&)
 *
 * Callees: 1
 *   0x00000000002D12AC  Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F77D8 string=0x00000000001F77DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_Subtexture::MergeFrom(
        Caver::Proto::Texture_Subtexture *this,
        const Caver::Proto::Texture_Subtexture *a2)
{
  JUMPOUT(0x2D130C);
}

