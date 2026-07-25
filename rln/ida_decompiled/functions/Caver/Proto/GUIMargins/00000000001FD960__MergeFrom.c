/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD960
 * Mangled: ._ZN5Caver5Proto10GUIMargins9MergeFromERKS1_
 * Demangled: Caver::Proto::GUIMargins::MergeFrom(Caver::Proto::GUIMargins const&)
 *
 * Callers: 4
 *   0x00000000002D60B8  Caver::Proto::GUIMargins::GUIMargins(Caver::Proto::GUIMargins const&)
 *   0x00000000002D6610  Caver::Proto::GUIMargins::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D6614  Caver::Proto::GUIMargins::CopyFrom(Caver::Proto::GUIMargins const&)
 *   0x00000000002D6774  Caver::Proto::GUIViewLayout::GUIViewLayout(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 1
 *   0x00000000002D60B8  Caver::Proto::GUIMargins::GUIMargins(Caver::Proto::GUIMargins const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD968 string=0x00000000001FD96C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GUIMargins::MergeFrom()
{
  JUMPOUT(0x2D6104);
}

