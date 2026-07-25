/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB1AC
 * Mangled: _ZN5Caver5Proto15EditorViewState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EditorViewState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7B10  Caver::Proto::EditorViewState::MergeFrom(Caver::Proto::EditorViewState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002DB1AC string=0x00000000001F7B10 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EditorViewState::CheckTypeAndMergeFrom(
        Caver::Proto::EditorViewState *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::EditorViewState::MergeFrom();
}

