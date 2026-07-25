/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345BC4
 * Mangled: _ZN5Caver22GameMenuViewController25SettingsViewDidQuitToMenuEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000345BD0 string=0x0000000000345BD4 "`B@"
 *   insn=0x0000000000345BD8 string=0x0000000000345BDC ""
 *   insn=0x0000000000345BD8 string=0x0000000000345BEC "`"
 *   insn=0x0000000000345BE0 string=0x0000000000345BE4 ""
 *   insn=0x0000000000345BF8 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GameMenuViewController::SettingsViewDidQuitToMenu(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  void (__fastcall ***v3)(_QWORD, Caver::GameMenuViewController *); // x0

  v3 = (void (__fastcall ***)(_QWORD, Caver::GameMenuViewController *))*((_QWORD *)this + 16);
  if ( v3 )
    (**v3)(v3, this);
  return Caver::GUIViewController::DismissModalViewController(*((Caver::GUIViewController **)this + 5));
}

