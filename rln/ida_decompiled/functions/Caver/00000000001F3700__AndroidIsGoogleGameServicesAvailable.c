/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3700
 * Mangled: ._ZN5Caver36AndroidIsGoogleGameServicesAvailableEv
 * Demangled: Caver::AndroidIsGoogleGameServicesAvailable(void)
 *
 * Callers: 1
 *   0x00000000004BADDC  Caver::OnlineController_Android::GoogleServicesAvailable(void)
 *
 * Callees: 1
 *   0x000000000047B148  Caver::AndroidIsGoogleGameServicesAvailable(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3708 string=0x00000000001F370C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidIsGoogleGameServicesAvailable(Caver *this)
{
  return _ZN5Caver36AndroidIsGoogleGameServicesAvailableEv(this);
}

