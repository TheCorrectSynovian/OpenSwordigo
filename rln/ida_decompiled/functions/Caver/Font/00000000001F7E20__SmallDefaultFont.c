/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7E20
 * Mangled: ._ZN5Caver4Font16SmallDefaultFontEv
 * Demangled: Caver::Font::SmallDefaultFont(void)
 *
 * Callers: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callees: 1
 *   0x00000000004C2634  Caver::Font::SmallDefaultFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7E28 string=0x00000000001F7E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::SmallDefaultFont(Caver::Font *this)
{
  return _ZN5Caver4Font16SmallDefaultFontEv(this);
}

