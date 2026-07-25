/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE7D0
 * Mangled: ._ZN5Caver9GameEvent17SetFirstResponderEPNS_19IGameEventResponderE
 * Demangled: Caver::GameEvent::SetFirstResponder(Caver::IGameEventResponder *)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x00000000003B3DC0  Caver::GameEvent::SetFirstResponder(Caver::IGameEventResponder *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE7D8 string=0x00000000001FE7DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameEvent::SetFirstResponder()
{
  return _ZN5Caver9GameEvent17SetFirstResponderEPNS_19IGameEventResponderE();
}

