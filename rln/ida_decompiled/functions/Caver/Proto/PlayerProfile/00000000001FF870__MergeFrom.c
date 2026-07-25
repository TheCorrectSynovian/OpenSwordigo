/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF870
 * Mangled: ._ZN5Caver5Proto13PlayerProfile9MergeFromERKS1_
 * Demangled: Caver::Proto::PlayerProfile::MergeFrom(Caver::Proto::PlayerProfile const&)
 *
 * Callers: 3
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *   0x00000000002EB684  Caver::Proto::PlayerProfile::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF878 string=0x00000000001FF87C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::MergeFrom(
        Caver::Proto::PlayerProfile *this,
        const Caver::Proto::PlayerProfile *a2)
{
  JUMPOUT(0x2E9614);
}

