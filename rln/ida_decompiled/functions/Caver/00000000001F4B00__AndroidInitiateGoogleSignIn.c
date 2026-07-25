/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B00
 * Mangled: ._ZN5Caver27AndroidInitiateGoogleSignInEv
 * Demangled: Caver::AndroidInitiateGoogleSignIn(void)
 *
 * Callers: 1
 *   0x00000000004BAE10  Caver::OnlineController_Android::SignInToGoogleServices(void)
 *
 * Callees: 1
 *   0x000000000047B1A8  Caver::AndroidInitiateGoogleSignIn(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B08 string=0x00000000001F4B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidInitiateGoogleSignIn(Caver *this)
{
  return _ZN5Caver27AndroidInitiateGoogleSignInEv(this);
}

