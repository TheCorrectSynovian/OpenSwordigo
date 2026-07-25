/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9930
 * Mangled: ._ZN5Caver4Font15SmallSystemFontEv
 * Demangled: Caver::Font::SmallSystemFont(void)
 *
 * Callers: 1
 *   0x00000000003CAB34  Caver::DebugInfoOverlay::Toggle(void)
 *
 * Callees: 1
 *   0x00000000004C25EC  Caver::Font::SmallSystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9938 string=0x00000000001F993C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::SmallSystemFont(Caver::Font *this)
{
  return _ZN5Caver4Font15SmallSystemFontEv(this);
}

