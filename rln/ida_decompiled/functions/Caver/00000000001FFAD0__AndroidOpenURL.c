/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFAD0
 * Mangled: ._ZN5Caver14AndroidOpenURLERKSs
 * Demangled: Caver::AndroidOpenURL(std::string const&)
 *
 * Callers: 2
 *   0x00000000004BA8BC  Caver::OnlineController_Android::LaunchFacebook(void)
 *   0x00000000004BAB24  Caver::OnlineController_Android::OpenPrivacyPolicy(void)
 *
 * Callees: 1
 *   0x0000000000479450  Caver::AndroidOpenURL(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFAD8 string=0x00000000001FFADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidOpenURL()
{
  return _ZN5Caver14AndroidOpenURLERKSs();
}

