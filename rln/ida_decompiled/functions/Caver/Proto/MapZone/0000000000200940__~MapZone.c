/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200940
 * Mangled: ._ZN5Caver5Proto7MapZoneD2Ev
 * Demangled: Caver::Proto::MapZone::~MapZone()
 *
 * Callers: 1
 *   0x00000000002DE634  Caver::Proto::MapZone::~MapZone()
 *
 * Callees: 1
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200948 string=0x000000000020094C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapZone::~MapZone(Caver::Proto::MapZone *this)
{
  JUMPOUT(0x2DE364);
}

