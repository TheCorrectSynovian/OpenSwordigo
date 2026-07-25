/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201000
 * Mangled: ._ZN5Caver5Proto15PortalComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PortalComponent::MergeFrom(Caver::Proto::PortalComponent const&)
 *
 * Callers: 3
 *   0x000000000032CCF8  Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *   0x000000000032D658  Caver::Proto::PortalComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000032D65C  Caver::Proto::PortalComponent::CopyFrom(Caver::Proto::PortalComponent const&)
 *
 * Callees: 1
 *   0x000000000032CCF8  Caver::Proto::PortalComponent::PortalComponent(Caver::Proto::PortalComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201008 string=0x000000000020100C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PortalComponent::MergeFrom(
        Caver::Proto::PortalComponent *this,
        const Caver::Proto::PortalComponent *a2)
{
  JUMPOUT(0x32CD68);
}

