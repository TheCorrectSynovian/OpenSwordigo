/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7B10
 * Mangled: ._ZN5Caver5Proto15EditorViewState9MergeFromERKS1_
 * Demangled: Caver::Proto::EditorViewState::MergeFrom(Caver::Proto::EditorViewState const&)
 *
 * Callers: 3
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *   0x00000000002DB1AC  Caver::Proto::EditorViewState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002DB278  Caver::Proto::EditorViewState::CopyFrom(Caver::Proto::EditorViewState const&)
 *
 * Callees: 1
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7B18 string=0x00000000001F7B1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::EditorViewState::MergeFrom()
{
  JUMPOUT(0x2DA0E4);
}

