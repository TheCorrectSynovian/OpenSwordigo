/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201AD0
 * Mangled: ._ZN5Caver5Proto3Box9MergeFromERKS1_
 * Demangled: Caver::Proto::Box::MergeFrom(Caver::Proto::Box const&)
 *
 * Callers: 4
 *   0x00000000002CF290  Caver::Proto::Box::Box(Caver::Proto::Box const&)
 *   0x00000000002CF92C  Caver::Proto::Box::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002CF930  Caver::Proto::Box::CopyFrom(Caver::Proto::Box const&)
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x00000000002CF290  Caver::Proto::Box::Box(Caver::Proto::Box const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201AD8 string=0x0000000000201ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Box::MergeFrom(Caver::Proto::Box *this, const Caver::Proto::Box *a2)
{
  JUMPOUT(0x2CF2E0);
}

