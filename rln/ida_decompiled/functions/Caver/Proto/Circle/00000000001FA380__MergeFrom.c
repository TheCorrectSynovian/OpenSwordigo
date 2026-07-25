/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA380
 * Mangled: ._ZN5Caver5Proto6Circle9MergeFromERKS1_
 * Demangled: Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&)
 *
 * Callers: 4
 *   0x00000000002CFA80  Caver::Proto::Circle::Circle(Caver::Proto::Circle const&)
 *   0x00000000002D00B4  Caver::Proto::Circle::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D00B8  Caver::Proto::Circle::CopyFrom(Caver::Proto::Circle const&)
 *   0x000000000030AB0C  Caver::Proto::ShapeComponent::ShapeComponent(Caver::Proto::ShapeComponent const&)
 *
 * Callees: 1
 *   0x00000000002CFA80  Caver::Proto::Circle::Circle(Caver::Proto::Circle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA388 string=0x00000000001FA38C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle *this, const Caver::Proto::Circle *a2)
{
  JUMPOUT(0x2CFAD0);
}

