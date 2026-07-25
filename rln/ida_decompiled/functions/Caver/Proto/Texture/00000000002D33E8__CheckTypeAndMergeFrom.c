/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D33E8
 * Mangled: _ZN5Caver5Proto7Texture21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Texture::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002019F0  Caver::Proto::Texture::MergeFrom(Caver::Proto::Texture const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture::CheckTypeAndMergeFrom(
        Caver::Proto::Texture *this,
        const Caver::Proto::Texture *a2)
{
  Caver::Proto::Texture::MergeFrom(this, a2);
}

