/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200F50
 * Mangled: ._ZN5Caver14ProfileManager11AddDelegateEPNS_23IProfileManagerDelegateE
 * Demangled: Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callers: 2
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *
 * Callees: 1
 *   0x00000000003A75D4  Caver::ProfileManager::AddDelegate(Caver::IProfileManagerDelegate *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200F58 string=0x0000000000200F5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager::AddDelegate()
{
  return _ZN5Caver14ProfileManager11AddDelegateEPNS_23IProfileManagerDelegateE();
}

