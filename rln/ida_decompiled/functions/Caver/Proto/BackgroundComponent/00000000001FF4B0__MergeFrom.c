/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4B0
 * Mangled: ._ZN5Caver5Proto19BackgroundComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BackgroundComponent::MergeFrom(Caver::Proto::BackgroundComponent const&)
 *
 * Callers: 3
 *   0x000000000031BDB4  Caver::Proto::BackgroundComponent::BackgroundComponent(Caver::Proto::BackgroundComponent const&)
 *   0x000000000031C3DC  Caver::Proto::BackgroundComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031C3E0  Caver::Proto::BackgroundComponent::CopyFrom(Caver::Proto::BackgroundComponent const&)
 *
 * Callees: 1
 *   0x000000000031BDB4  Caver::Proto::BackgroundComponent::BackgroundComponent(Caver::Proto::BackgroundComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF4B8 string=0x00000000001FF4BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BackgroundComponent::MergeFrom()
{
  JUMPOUT(0x31BE10);
}

