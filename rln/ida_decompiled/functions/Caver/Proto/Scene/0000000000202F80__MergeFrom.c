/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202F80
 * Mangled: ._ZN5Caver5Proto5Scene9MergeFromERKS1_
 * Demangled: Caver::Proto::Scene::MergeFrom(Caver::Proto::Scene const&)
 *
 * Callers: 3
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000302580  Caver::Proto::Scene::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000302584  Caver::Proto::Scene::CopyFrom(Caver::Proto::Scene const&)
 *
 * Callees: 1
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202F88 string=0x0000000000202F8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Scene::MergeFrom(Caver::Proto::Scene *this, const Caver::Proto::Scene *a2)
{
  JUMPOUT(0x3013B8);
}

