/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA410
 * Mangled: ._ZN5Caver14GUIApplication14DispatchEventsEv
 * Demangled: Caver::GUIApplication::DispatchEvents(void)
 *
 * Callers: 1
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *
 * Callees: 1
 *   0x0000000000493308  Caver::GUIApplication::DispatchEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA418 string=0x00000000001FA41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIApplication::DispatchEvents(Caver::GUIApplication *this)
{
  return _ZN5Caver14GUIApplication14DispatchEventsEv(this);
}

