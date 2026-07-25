/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002019F0
 * Mangled: ._ZN5Caver5Proto7Texture9MergeFromERKS1_
 * Demangled: Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&)
 *
 * Callers: 6
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *   0x00000000002D33E8  Caver::Proto::Texture::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D34EC  Caver::Proto::Texture::CopyFrom(Caver::Proto::Texture const&)
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *
 * Callees: 1
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002019F8 string=0x00000000002019FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture *this, const Caver::Proto::Texture *a2)
{
  JUMPOUT(0x2D2678);
}

