/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202BA0
 * Mangled: ._ZN5Caver5Proto29ObjectLinkControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::MergeFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Callers: 3
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *   0x000000000030F7AC  Caver::Proto::ObjectLinkControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000030F7B0  Caver::Proto::ObjectLinkControllerComponent::CopyFrom(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Callees: 1
 *   0x000000000030E9D4  Caver::Proto::ObjectLinkControllerComponent::ObjectLinkControllerComponent(Caver::Proto::ObjectLinkControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202BA8 string=0x0000000000202BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLinkControllerComponent::MergeFrom(
        Caver::Proto::ObjectLinkControllerComponent *this,
        const Caver::Proto::ObjectLinkControllerComponent *a2)
{
  JUMPOUT(0x30EA48);
}

