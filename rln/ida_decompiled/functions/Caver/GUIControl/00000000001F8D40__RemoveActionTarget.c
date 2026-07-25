/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D40
 * Mangled: ._ZN5Caver10GUIControl18RemoveActionTargetEPv
 * Demangled: Caver::GUIControl::RemoveActionTarget(void *)
 *
 * Callers: 1
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D48 string=0x00000000001F8D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIControl::RemoveActionTarget(Caver::GUIControl *this, void *a2)
{
  JUMPOUT(0x4968CC);
}

