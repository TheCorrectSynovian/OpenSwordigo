/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA3D0
 * Mangled: ._ZN5Caver14SpellComponent4CastEv
 * Demangled: Caver::SpellComponent::Cast(void)
 *
 * Callers: 4
 *   0x0000000000281EEC  Caver::DimensionSpellComponent::Cast(void)
 *   0x0000000000284770  Caver::MagicBoltComponent::Cast(void)
 *   0x0000000000285EF8  Caver::MagicBombComponent::Cast(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *
 * Callees: 1
 *   0x00000000002901C4  Caver::SpellComponent::Cast(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA3D8 string=0x00000000001FA3DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::Cast(Caver::SpellComponent *this)
{
  return _ZN5Caver14SpellComponent4CastEv(this);
}

