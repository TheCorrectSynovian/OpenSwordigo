/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA9B0
 * Mangled: ._ZN5Caver5Proto13PlayerProfile10SharedDtorEv
 * Demangled: Caver::Proto::PlayerProfile::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Callees: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA9B8 string=0x00000000001FA9BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::SharedDtor(Caver::Proto::PlayerProfile *this)
{
  JUMPOUT(0x2E9C30);
}

