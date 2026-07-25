/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D70
 * Mangled: ._ZN5Caver14SpellComponent9CastPointEv
 * Demangled: Caver::SpellComponent::CastPoint(void)
 *
 * Callers: 1
 *   0x000000000028A180  Caver::MagicHookshotComponent::CreateBlast(void)
 *
 * Callees: 1
 *   0x00000000002901C4  Caver::SpellComponent::Cast(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D78 string=0x0000000000202D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SpellComponent::CastPoint(Caver::SpellComponent *this)
{
  JUMPOUT(0x290308);
}

