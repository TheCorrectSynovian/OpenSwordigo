/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5348
 * Mangled: _ZN5Caver5Proto4Font21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Font::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6110  Caver::Proto::Font::MergeFrom(Caver::Proto::Font const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D5348 string=0x00000000001F6110 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font::CheckTypeAndMergeFrom(Caver::Proto::Font *this, const Font *a2)
{
  Caver::Proto::Font::MergeFrom(this, a2);
}

