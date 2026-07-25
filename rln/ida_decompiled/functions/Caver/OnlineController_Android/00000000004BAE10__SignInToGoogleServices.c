/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAE10
 * Mangled: _ZN5Caver24OnlineController_Android22SignInToGoogleServicesEv
 * Demangled: Caver::OnlineController_Android::SignInToGoogleServices(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4B00  Caver::AndroidInitiateGoogleSignIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAE10 string=0x00000000001F4B00 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::SignInToGoogleServices(Caver::OnlineController_Android *this)
{
  return Caver::AndroidInitiateGoogleSignIn(this);
}

