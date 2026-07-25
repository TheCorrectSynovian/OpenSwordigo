/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F78D0
 * Mangled: ._ZN5Caver14ProfileManager14RemoveDelegateEPNS_23IProfileManagerDelegateE
 * Demangled: Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *
 * Callers: 3
 *   0x0000000000351478  Caver::GameViewController::~GameViewController()
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x000000000036B0D0  Caver::MainMenuViewController::~MainMenuViewController()
 *
 * Callees: 1
 *   0x00000000003A76B4  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F78D8 string=0x00000000001F78DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager::RemoveDelegate()
{
  return _ZN5Caver14ProfileManager14RemoveDelegateEPNS_23IProfileManagerDelegateE();
}

