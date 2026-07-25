/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF410
 * Mangled: ._ZN5Caver35ProfileManagerLoadingViewController24DismissAfterMinimumDelayEf
 * Demangled: Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(float)
 *
 * Callers: 2
 *   0x00000000004BC92C  Caver::ProfileManager_Android::ShowCloudLoadingView(void)
 *   0x00000000004BCD98  Caver::ProfileManager_Android::HideCloudLoadingView(void)
 *
 * Callees: 1
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF418 string=0x00000000001FF41C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ProfileManagerLoadingViewController::DismissAfterMinimumDelay(
        Caver::ProfileManagerLoadingViewController *this,
        float a2)
{
  JUMPOUT(0x3A91BC);
}

