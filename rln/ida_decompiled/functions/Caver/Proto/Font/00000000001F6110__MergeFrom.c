/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6110
 * Mangled: ._ZN5Caver5Proto4Font9MergeFromERKS1_
 * Demangled: Caver::Proto::Font::MergeFrom(Caver::Proto::Font const&)
 *
 * Callers: 3
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *   0x00000000002D5348  Caver::Proto::Font::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D543C  Caver::Proto::Font::CopyFrom(Caver::Proto::Font const&)
 *
 * Callees: 1
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6118 string=0x00000000001F611C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font::MergeFrom(Caver::Proto::Font *this, const Font *a2)
{
  JUMPOUT(0x2D4348);
}

