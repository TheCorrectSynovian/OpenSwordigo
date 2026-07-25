/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002001C0
 * Mangled: ._ZN5Caver23MagicSpellCastComponentC2Ev_0
 * Demangled: Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Callers: 1
 *   0x000000000028BEC0  Caver::MagicSpellCastComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000028B580  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002001C8 string=0x00000000002001CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicSpellCastComponent::MagicSpellCastComponent(Caver::MagicSpellCastComponent *this)
{
  return _ZN5Caver23MagicSpellCastComponentC2Ev(this);
}

