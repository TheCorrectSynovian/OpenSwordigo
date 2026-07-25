/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA04C
 * Mangled: _ZN5Caver5Proto13PlayerProfileD0Ev
 * Demangled: Caver::Proto::PlayerProfile::~PlayerProfile()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF040  Caver::Proto::PlayerProfile::~PlayerProfile()
 *   0x00000000002EA084  Caver::Proto::PlayerProfile::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x00000000002EA06C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::PlayerProfile::~PlayerProfile(Caver::Proto::PlayerProfile *this)
{
  Caver::Proto::PlayerProfile::~PlayerProfile(this);
  operator delete(this);
}

