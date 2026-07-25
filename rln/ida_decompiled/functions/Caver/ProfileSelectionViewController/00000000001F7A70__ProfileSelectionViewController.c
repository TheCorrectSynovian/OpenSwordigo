/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7A70
 * Mangled: ._ZN5Caver30ProfileSelectionViewControllerC2Ev
 * Demangled: Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *
 * Callers: 1
 *   0x000000000036F1D0  Caver::MainMenuViewController::MainMenuViewDidStart(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x00000000003A4854  Caver::ProfileSelectionViewController::ProfileSelectionViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7A78 string=0x00000000001F7A7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileSelectionViewController::ProfileSelectionViewController(
        Caver::ProfileSelectionViewController *this)
{
  return _ZN5Caver30ProfileSelectionViewControllerC2Ev(this);
}

