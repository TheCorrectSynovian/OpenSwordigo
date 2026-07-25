/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5540
 * Mangled: ._ZN5Caver11FontLibrary16LargeDefaultFontEv
 * Demangled: Caver::FontLibrary::LargeDefaultFont(void)
 *
 * Callers: 4
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *
 * Callees: 1
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5548 string=0x00000000001F554C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontLibrary::LargeDefaultFont(Caver::FontLibrary *this)
{
  JUMPOUT(0x4C4730);
}

