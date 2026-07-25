/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F70
 * Mangled: ._ZN5Caver14GUIApplication22CancelEventsWithSenderEPv
 * Demangled: Caver::GUIApplication::CancelEventsWithSender(void *)
 *
 * Callers: 1
 *   0x0000000000496510  Caver::GUIControl::~GUIControl()
 *
 * Callees: 1
 *   0x0000000000493248  Caver::GUIApplication::CancelEventsWithSender(void *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F78 string=0x00000000001F3F7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIApplication::CancelEventsWithSender(Caver::GUIApplication *this, void *a2)
{
  return _ZN5Caver14GUIApplication22CancelEventsWithSenderEPv(this, a2);
}

