/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FECA0
 * Mangled: ._ZN5Caver23MagicSpellCastComponentC2Ev
 * Demangled: Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Callers: 1
 *   0x00000000002509B8  Caver::MagicSpellCastComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000028B580  Caver::MagicSpellCastComponent::MagicSpellCastComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FECA8 string=0x00000000001FECAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicSpellCastComponent::MagicSpellCastComponent(Caver::MagicSpellCastComponent *this)
{
  return _ZN5Caver23MagicSpellCastComponentC2Ev(this);
}

