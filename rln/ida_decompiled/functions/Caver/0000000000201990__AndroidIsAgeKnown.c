/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201990
 * Mangled: ._ZN5Caver17AndroidIsAgeKnownEv
 * Demangled: Caver::AndroidIsAgeKnown(void)
 *
 * Callers: 1
 *   0x00000000004BA8BC  Caver::OnlineController_Android::LaunchFacebook(void)
 *
 * Callees: 1
 *   0x000000000047AA94  Caver::AndroidIsAgeKnown(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201998 string=0x000000000020199C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidIsAgeKnown(Caver *this)
{
  return _ZN5Caver17AndroidIsAgeKnownEv(this);
}

