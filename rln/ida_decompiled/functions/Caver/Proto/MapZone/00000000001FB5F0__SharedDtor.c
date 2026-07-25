/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5F0
 * Mangled: ._ZN5Caver5Proto7MapZone10SharedDtorEv
 * Demangled: Caver::Proto::MapZone::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *
 * Callees: 1
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB5F8 string=0x00000000001FB5FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapZone::SharedDtor(Caver::Proto::MapZone *this)
{
  JUMPOUT(0x2DE46C);
}

