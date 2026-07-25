/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BA0
 * Mangled: ._ZN5Caver13GUIViewLayout10AddSubviewERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIViewLayout::AddSubview(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 2
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Callees: 1
 *   0x00000000004A7C04  Caver::GUIViewLayout::LoadFromProtobufMessage(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203BA8 string=0x0000000000203BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIViewLayout::AddSubview()
{
  JUMPOUT(0x4A7DDC);
}

