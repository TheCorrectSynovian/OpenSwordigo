/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F99F0
 * Mangled: ._ZN5Caver18GameViewController29HandleDidEnterPortalGameEventERKNS_23DidEnterPortalGameEventE
 * Demangled: Caver::GameViewController::HandleDidEnterPortalGameEvent(Caver::DidEnterPortalGameEvent const&)
 *
 * Callers: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Callees: 1
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F99F8 string=0x00000000001F99FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameViewController::HandleDidEnterPortalGameEvent()
{
  JUMPOUT(0x359E6C);
}

