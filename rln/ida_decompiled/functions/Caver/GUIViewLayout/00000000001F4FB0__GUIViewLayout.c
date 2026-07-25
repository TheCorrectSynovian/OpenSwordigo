/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4FB0
 * Mangled: ._ZN5Caver13GUIViewLayoutC2ERKS0_
 * Demangled: Caver::GUIViewLayout::GUIViewLayout(Caver::GUIViewLayout const&)
 *
 * Callers: 1
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4FB8 string=0x00000000001F4FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIViewLayout::GUIViewLayout()
{
  JUMPOUT(0x3D78F8);
}

