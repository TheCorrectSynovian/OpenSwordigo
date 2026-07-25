/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB450
 * Mangled: ._ZN5Caver14GUILoadingView9AnimateInEv
 * Demangled: Caver::GUILoadingView::AnimateIn(void)
 *
 * Callers: 1
 *   0x0000000000436A54  Caver::SceneLoadingView::AnimateIn(void)
 *
 * Callees: 1
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB458 string=0x00000000001FB45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUILoadingView::AnimateIn(Caver::GUILoadingView *this)
{
  JUMPOUT(0x498888);
}

