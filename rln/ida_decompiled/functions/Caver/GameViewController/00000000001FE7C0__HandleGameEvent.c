/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE7C0
 * Mangled: ._ZN5Caver18GameViewController15HandleGameEventERKNS_9GameEventE
 * Demangled: Caver::GameViewController::HandleGameEvent(Caver::GameEvent const&)
 *
 * Callers: 1
 *   0x000000000035A5E4  boost::shared_ptr<Caver::GameOverViewController>::shared_ptr<Caver::GameOverViewController>(Caver::GameOverViewController *)
 *
 * Callees: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE7C8 string=0x00000000001FE7CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameViewController::HandleGameEvent(Caver::GameViewController *this, const Caver::GameEvent *a2)
{
  JUMPOUT(0x359334);
}

