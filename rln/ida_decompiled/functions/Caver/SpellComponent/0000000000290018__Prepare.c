/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000290018
 * Mangled: _ZN5Caver14SpellComponent7PrepareEv
 * Demangled: Caver::SpellComponent::Prepare(void)
 *
 * Callers: 1
 *   0x0000000000203980  Caver::SpellComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000001F7FB0  Caver::SpellComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000290018 string=0x00000000001F7FB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::Prepare(Caver::SpellComponent *this)
{
  return Caver::SpellComponent::RegisterLibrary(this);
}

