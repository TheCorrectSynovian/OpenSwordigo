/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032BA24
 * Mangled: _ZN5Caver5Proto14SwingComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SwingComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4D10  Caver::Proto::SwingComponent::MergeFrom(Caver::Proto::SwingComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000032BA24 string=0x00000000001F4D10 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SwingComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SwingComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SwingComponent::MergeFrom();
}

