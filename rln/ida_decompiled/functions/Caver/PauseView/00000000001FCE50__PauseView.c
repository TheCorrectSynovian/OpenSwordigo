/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE50
 * Mangled: ._ZN5Caver9PauseViewC2Ev
 * Demangled: Caver::PauseView::PauseView(void)
 *
 * Callers: 1
 *   0x0000000000370120  Caver::PauseViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE58 string=0x00000000001FCE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PauseView::PauseView(Caver::PauseView *this)
{
  JUMPOUT(0x42C900);
}

