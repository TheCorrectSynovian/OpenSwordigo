/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF720
 * Mangled: ._ZN5Caver20GameInterfaceBuilder22ControlButtonWithImageERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GameInterfaceBuilder::ControlButtonWithImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF728 string=0x00000000001FF72C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::ControlButtonWithImage()
{
  JUMPOUT(0x33F14C);
}

