/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDED0
 * Mangled: ._ZN5Caver9GameEvent16SetEventsEnabledEb
 * Demangled: Caver::GameEvent::SetEventsEnabled(bool)
 *
 * Callers: 4
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000357024  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003B3E10  Caver::GameEvent::SetEventsEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDED8 string=0x00000000001FDEDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameEvent::SetEventsEnabled(Caver::GameEvent *this, bool a2)
{
  return _ZN5Caver9GameEvent16SetEventsEnabledEb(this, a2);
}

