/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1BF8
 * Mangled: _ZN5Caver5Proto18Texture_Subtexture21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Texture_Subtexture::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F77D0  Caver::Proto::Texture_Subtexture::MergeFrom(Caver::Proto::Texture_Subtexture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D1BF8 string=0x00000000001F77D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_Subtexture::CheckTypeAndMergeFrom(
        Caver::Proto::Texture_Subtexture *this,
        const Caver::Proto::Texture_Subtexture *a2)
{
  Caver::Proto::Texture_Subtexture::MergeFrom(this, a2);
}

