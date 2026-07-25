/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB130
 * Mangled: ._ZN5Caver14OnlineMenuViewD2Ev
 * Demangled: Caver::OnlineMenuView::~OnlineMenuView()
 *
 * Callers: 1
 *   0x0000000000397AAC  Caver::OnlineMenuView::~OnlineMenuView()
 *
 * Callees: 1
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB138 string=0x00000000001FB13C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OnlineMenuView::~OnlineMenuView(Caver::OnlineMenuView *this)
{
  JUMPOUT(0x397704);
}

