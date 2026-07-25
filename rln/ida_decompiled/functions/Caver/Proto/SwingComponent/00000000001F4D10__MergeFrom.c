/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4D10
 * Mangled: ._ZN5Caver5Proto14SwingComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::SwingComponent::MergeFrom(Caver::Proto::SwingComponent const&)
 *
 * Callers: 3
 *   0x000000000032B378  Caver::Proto::SwingComponent::SwingComponent(Caver::Proto::SwingComponent const&)
 *   0x000000000032BA24  Caver::Proto::SwingComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032BA28  Caver::Proto::SwingComponent::CopyFrom(Caver::Proto::SwingComponent const&)
 *
 * Callees: 1
 *   0x000000000032B378  Caver::Proto::SwingComponent::SwingComponent(Caver::Proto::SwingComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4D18 string=0x00000000001F4D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::SwingComponent::MergeFrom()
{
  JUMPOUT(0x32B3CC);
}

