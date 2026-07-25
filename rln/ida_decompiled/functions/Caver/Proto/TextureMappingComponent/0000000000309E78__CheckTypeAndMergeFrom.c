/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000309E78
 * Mangled: _ZN5Caver5Proto23TextureMappingComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::TextureMappingComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAED0  Caver::Proto::TextureMappingComponent::MergeFrom(Caver::Proto::TextureMappingComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000309E78 string=0x00000000001FAED0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::TextureMappingComponent::CheckTypeAndMergeFrom(
        Caver::Proto::TextureMappingComponent *this,
        const Caver::Proto::TextureMappingComponent *a2)
{
  Caver::Proto::TextureMappingComponent::MergeFrom(this, a2);
}

