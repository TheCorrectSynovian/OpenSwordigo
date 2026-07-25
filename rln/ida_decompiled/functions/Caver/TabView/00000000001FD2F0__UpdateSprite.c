/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD2F0
 * Mangled: ._ZN5Caver7TabView12UpdateSpriteEv
 * Demangled: Caver::TabView::UpdateSprite(void)
 *
 * Callers: 3
 *   0x0000000000443134  Caver::TabView::AddTab(std::string const&)
 *   0x00000000004435B0  Caver::TabView::SetSelectedTabIndex(int)
 *   0x00000000004435B8  Caver::TabView::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD2F8 string=0x00000000001FD2FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TabView::UpdateSprite(Caver::TabView *this)
{
  return _ZN5Caver7TabView12UpdateSpriteEv(this);
}

