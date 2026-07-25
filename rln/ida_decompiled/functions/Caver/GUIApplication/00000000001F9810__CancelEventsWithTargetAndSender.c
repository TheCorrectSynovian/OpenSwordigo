/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9810
 * Mangled: ._ZN5Caver14GUIApplication31CancelEventsWithTargetAndSenderEPvS1_
 * Demangled: Caver::GUIApplication::CancelEventsWithTargetAndSender(void *,void *)
 *
 * Callers: 1
 *   0x00000000004965BC  Caver::GUIControl::AddTargetActionForControlEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,Caver::GUIControl::Event)
 *
 * Callees: 1
 *   0x0000000000492DF0  Caver::GUIApplication::SendEvent(void *,boost::function<void ()(void *,Caver::GUIEvent *)> const&,boost::shared_ptr<void> const&,boost::shared_ptr<Caver::GUIEvent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9818 string=0x00000000001F981C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIApplication::CancelEventsWithTargetAndSender(Caver::GUIApplication *this, void *a2, void *a3)
{
  JUMPOUT(0x493178);
}

