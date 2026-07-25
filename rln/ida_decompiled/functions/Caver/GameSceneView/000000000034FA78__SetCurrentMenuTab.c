/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034FA78
 * Mangled: _ZN5Caver13GameSceneView17SetCurrentMenuTabERKSs
 * Demangled: Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F9DE0  Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *
 * Callees: 2
 *   0x00000000001F5790  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 3
 *   insn=0x000000000034FA8C string=0x000000000034FA90 ""
 *   insn=0x000000000034FAAC string=0x000000000034FAB0 "8"
 *   insn=0x000000000034FAB0 string=0x00000000001F5790 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameSceneView::SetCurrentMenuTab(__int64 a1)
{
  sub_56A6A8(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 8LL) + 400LL);
  return Caver::OverlayMenuButton::SetMenuTab();
}

