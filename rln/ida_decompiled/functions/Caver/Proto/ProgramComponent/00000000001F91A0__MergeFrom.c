/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91A0
 * Mangled: ._ZN5Caver5Proto16ProgramComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ProgramComponent::MergeFrom(Caver::Proto::ProgramComponent const&)
 *
 * Callers: 3
 *   0x0000000000316C78  Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&)
 *   0x0000000000317500  Caver::Proto::ProgramComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000317504  Caver::Proto::ProgramComponent::CopyFrom(Caver::Proto::ProgramComponent const&)
 *
 * Callees: 1
 *   0x0000000000316C78  Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F91A8 string=0x00000000001F91AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ProgramComponent::MergeFrom()
{
  JUMPOUT(0x316CD8);
}

