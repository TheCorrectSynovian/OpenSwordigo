/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE4C0
 * Mangled: ._ZN5Caver16SceneLoadingViewD2Ev
 * Demangled: Caver::SceneLoadingView::~SceneLoadingView()
 *
 * Callers: 1
 *   0x0000000000436A54  Caver::SceneLoadingView::AnimateIn(void)
 *
 * Callees: 1
 *   0x0000000000436A54  Caver::SceneLoadingView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE4C8 string=0x00000000001FE4CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SceneLoadingView::~SceneLoadingView(Caver::SceneLoadingView *this)
{
  JUMPOUT(0x436B90);
}

