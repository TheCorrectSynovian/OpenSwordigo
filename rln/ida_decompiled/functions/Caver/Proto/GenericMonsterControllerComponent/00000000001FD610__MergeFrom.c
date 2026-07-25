/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD610
 * Mangled: ._ZN5Caver5Proto33GenericMonsterControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::MergeFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Callers: 3
 *   0x0000000000329280  Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent(Caver::Proto::GenericMonsterControllerComponent const&)
 *   0x00000000003295EC  Caver::Proto::GenericMonsterControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000003295F0  Caver::Proto::GenericMonsterControllerComponent::CopyFrom(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Callees: 1
 *   0x0000000000329280  Caver::Proto::GenericMonsterControllerComponent::GenericMonsterControllerComponent(Caver::Proto::GenericMonsterControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD618 string=0x00000000001FD61C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::GenericMonsterControllerComponent::MergeFrom()
{
  JUMPOUT(0x3292CC);
}

