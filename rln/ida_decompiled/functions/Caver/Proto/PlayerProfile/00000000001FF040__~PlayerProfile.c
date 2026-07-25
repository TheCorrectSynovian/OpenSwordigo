/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF040
 * Mangled: ._ZN5Caver5Proto13PlayerProfileD2Ev_0
 * Demangled: Caver::Proto::PlayerProfile::~PlayerProfile()
 *
 * Callers: 1
 *   0x00000000002EA04C  Caver::Proto::PlayerProfile::~PlayerProfile()
 *
 * Callees: 1
 *   0x00000000002E94F4  Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF048 string=0x00000000001FF04C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::~PlayerProfile(Caver::Proto::PlayerProfile *this)
{
  JUMPOUT(0x2E9B28);
}

