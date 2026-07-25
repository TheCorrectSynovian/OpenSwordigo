/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BADDC
 * Mangled: _ZN5Caver24OnlineController_Android23GoogleServicesAvailableEv
 * Demangled: Caver::OnlineController_Android::GoogleServicesAvailable(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3700  Caver::AndroidIsGoogleGameServicesAvailable(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BADDC string=0x00000000001F3700 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::GoogleServicesAvailable(Caver::OnlineController_Android *this)
{
  return Caver::AndroidIsGoogleGameServicesAvailable(this);
}

