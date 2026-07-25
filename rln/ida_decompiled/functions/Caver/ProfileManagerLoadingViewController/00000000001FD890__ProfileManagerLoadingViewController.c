/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD890
 * Mangled: ._ZN5Caver35ProfileManagerLoadingViewControllerC2Ev
 * Demangled: Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *
 * Callers: 1
 *   0x00000000004BC92C  Caver::ProfileManager_Android::ShowCloudLoadingView(void)
 *
 * Callees: 1
 *   0x00000000003A8DF8  Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD898 string=0x00000000001FD89C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileManagerLoadingViewController::ProfileManagerLoadingViewController(
        Caver::ProfileManagerLoadingViewController *this)
{
  return _ZN5Caver35ProfileManagerLoadingViewControllerC2Ev(this);
}

