/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF2D0
 * Mangled: ._ZN5Caver11FontLibrary22MediumSmallDefaultFontEv
 * Demangled: Caver::FontLibrary::MediumSmallDefaultFont(void)
 *
 * Callers: 1
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *
 * Callees: 1
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF2D8 string=0x00000000001FF2DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontLibrary::MediumSmallDefaultFont(Caver::FontLibrary *this)
{
  JUMPOUT(0x4C45EC);
}

