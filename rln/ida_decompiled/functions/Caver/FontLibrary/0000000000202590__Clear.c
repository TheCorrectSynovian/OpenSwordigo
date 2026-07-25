/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202590
 * Mangled: ._ZN5Caver11FontLibrary5ClearEv
 * Demangled: Caver::FontLibrary::Clear(void)
 *
 * Callers: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Callees: 1
 *   0x00000000004C3450  Caver::FontLibrary::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202598 string=0x000000000020259C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontLibrary::Clear(Caver::FontLibrary *this)
{
  return _ZN5Caver11FontLibrary5ClearEv(this);
}

