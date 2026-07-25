/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF590
 * Mangled: ._ZN5boost10shared_ptrIN5Caver14GUIPopoverViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>(Caver::GUIPopoverView *)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF598 string=0x00000000001FF59C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUIPopoverView>::shared_ptr<Caver::GUIPopoverView>()
{
  JUMPOUT(0x4A301C);
}

