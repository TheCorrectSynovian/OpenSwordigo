/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7FB0
 * Mangled: ._ZN5Caver14SpellComponent15RegisterLibraryEv
 * Demangled: Caver::SpellComponent::RegisterLibrary(void)
 *
 * Callers: 1
 *   0x0000000000290018  Caver::SpellComponent::Prepare(void)
 *
 * Callees: 1
 *   0x000000000029001C  Caver::SpellComponent::RegisterLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7FB8 string=0x00000000001F7FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SpellComponent::RegisterLibrary(Caver::SpellComponent *this)
{
  return _ZN5Caver14SpellComponent15RegisterLibraryEv(this);
}

