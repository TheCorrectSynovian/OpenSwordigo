/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BFA88
 * Mangled: _ZN5Caver13PlayerProfile18InitWithIdentifierERKSs
 * Demangled: Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F3450  Caver::PlayerProfile::InitWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 1
 *   insn=0x00000000003BFA88 string=0x00000000003BFA8C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PlayerProfile::InitWithIdentifier(__int64 a1)
{
  return sub_56A6A8(a1 + 24);
}

