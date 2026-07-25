/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000345BFC
 * Mangled: _ZThn96_N5Caver22GameMenuViewController25SettingsViewDidQuitToMenuEPNS_12SettingsViewE
 * Demangled: `non-virtual thunk to'Caver::GameMenuViewController::SettingsViewDidQuitToMenu(Caver::SettingsView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000345C14 string=0x0000000000345C18 ""
 *   insn=0x0000000000345C14 string=0x0000000000345C28 "`"
 *   insn=0x0000000000345C1C string=0x0000000000345C20 ""
 *   insn=0x0000000000345C34 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GameMenuViewController::SettingsViewDidQuitToMenu(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  void (__fastcall ***v3)(_QWORD, char *); // x0
  Caver::GUIViewController **v4; // x19

  v3 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 4);
  v4 = (Caver::GUIViewController **)((char *)this - 96);
  if ( v3 )
    (**v3)(v3, (char *)this - 96);
  return Caver::GUIViewController::DismissModalViewController(v4[5]);
}

