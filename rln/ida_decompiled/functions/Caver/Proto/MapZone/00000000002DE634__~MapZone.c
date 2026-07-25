/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE634
 * Mangled: _ZN5Caver5Proto7MapZoneD0Ev
 * Demangled: Caver::Proto::MapZone::~MapZone()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200940  Caver::Proto::MapZone::~MapZone()
 *   0x00000000002DE66C  Caver::Proto::MapZone::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x00000000002DE654 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::MapZone::~MapZone(Caver::Proto::MapZone *this)
{
  Caver::Proto::MapZone::~MapZone(this);
  operator delete(this);
}

