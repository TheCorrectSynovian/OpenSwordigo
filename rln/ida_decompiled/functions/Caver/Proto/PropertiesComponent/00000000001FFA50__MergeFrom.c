/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA50
 * Mangled: ._ZN5Caver5Proto19PropertiesComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::PropertiesComponent::MergeFrom(Caver::Proto::PropertiesComponent const&)
 *
 * Callers: 3
 *   0x000000000031C4F8  Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
 *   0x000000000031CA64  Caver::Proto::PropertiesComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000031CA68  Caver::Proto::PropertiesComponent::CopyFrom(Caver::Proto::PropertiesComponent const&)
 *
 * Callees: 1
 *   0x000000000031C4F8  Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA58 string=0x00000000001FFA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::PropertiesComponent::MergeFrom()
{
  JUMPOUT(0x31C54C);
}

