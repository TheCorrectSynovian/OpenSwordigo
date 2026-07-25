/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004435B0
 * Mangled: _ZN5Caver7TabView19SetSelectedTabIndexEi
 * Demangled: Caver::TabView::SetSelectedTabIndex(int)
 *
 * Callers: 1
 *   0x0000000000202570  Caver::TabView::SetSelectedTabIndex(int)
 *
 * Callees: 1
 *   0x00000000001FD2F0  Caver::TabView::UpdateSprite(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004435B0 string=0x00000000004435B4 "O"
 *   insn=0x00000000004435B4 string=0x00000000001FD2F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TabView::SetSelectedTabIndex(Caver::TabView *this, int a2)
{
  *((_DWORD *)this + 130) = a2;
  return Caver::TabView::UpdateSprite(this);
}

