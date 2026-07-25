/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAED0
 * Mangled: ._ZN5Caver5Proto23TextureMappingComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::TextureMappingComponent::MergeFrom(Caver::Proto::TextureMappingComponent const&)
 *
 * Callers: 3
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *   0x0000000000309E78  Caver::Proto::TextureMappingComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000309E7C  Caver::Proto::TextureMappingComponent::CopyFrom(Caver::Proto::TextureMappingComponent const&)
 *
 * Callees: 1
 *   0x000000000030955C  Caver::Proto::TextureMappingComponent::TextureMappingComponent(Caver::Proto::TextureMappingComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAED8 string=0x00000000001FAEDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::TextureMappingComponent::MergeFrom(
        Caver::Proto::TextureMappingComponent *this,
        const Caver::Proto::TextureMappingComponent *a2)
{
  JUMPOUT(0x3095C0);
}

