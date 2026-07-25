/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB70
 * Mangled: ._ZN5Caver5Proto9Component9MergeFromERKS1_
 * Demangled: Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&)
 *
 * Callers: 4
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *   0x00000000002FBB10  Caver::Proto::Component::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002FBB14  Caver::Proto::Component::CopyFrom(Caver::Proto::Component const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *
 * Callees: 1
 *   0x00000000002FB0E0  Caver::Proto::Component::Component(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB78 string=0x00000000001FAB7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Component::MergeFrom()
{
  JUMPOUT(0x2FB17C);
}

