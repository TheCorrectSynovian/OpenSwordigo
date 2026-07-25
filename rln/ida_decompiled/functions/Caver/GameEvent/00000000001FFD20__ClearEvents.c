/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD20
 * Mangled: ._ZN5Caver9GameEvent11ClearEventsEv
 * Demangled: Caver::GameEvent::ClearEvents(void)
 *
 * Callers: 1
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *
 * Callees: 1
 *   0x00000000003B3B84  Caver::GameEventManager::ProcessEvents(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD28 string=0x00000000001FFD2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameEvent::ClearEvents(Caver::GameEvent *this)
{
  JUMPOUT(0x3B3D00);
}

