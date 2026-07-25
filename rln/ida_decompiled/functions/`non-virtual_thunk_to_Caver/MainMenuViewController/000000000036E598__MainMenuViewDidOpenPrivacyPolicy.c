/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E598
 * Mangled: _ZThn80_N5Caver22MainMenuViewController32MainMenuViewDidOpenPrivacyPolicyEPNS_12MainMenuViewE
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(Caver::MainMenuView *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4320  Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(void)
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *
 * Referenced strings: 11
 *   insn=0x000000000036E5A4 string=0x000000000036E5A8 "h&C9H"
 *   insn=0x000000000036E5A8 string=0x000000000036E5AC "H"
 *   insn=0x000000000036E5AC string=0x000000000036E5D4 "w+"
 *   insn=0x000000000036E5B0 string=0x000000000036E5B4 ""
 *   insn=0x000000000036E5B0 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036E5B4 string=0x000000000036E5B8 "-@"
 *   insn=0x000000000036E5C4 string=0x000000000036E5C8 "`B"
 *   insn=0x000000000036E5CC string=0x000000000036E5D0 "T"
 *   insn=0x000000000036E5D0 string=0x00000000001F4320 "P'"
 *   insn=0x000000000036E5D4 string=0x000000000036E5D8 ""
 *   insn=0x000000000036E5E4 string=0x000000000036E5E8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  Caver::MainMenuViewController *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x0

  v2 = this;
  if ( *((_BYTE *)this + 201)
    && (v3 = Caver::OnlineController::SharedController(this),
        this = (Caver::MainMenuViewController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3),
        ((unsigned __int8)this & 1) != 0) )
  {
    Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog((Caver::MainMenuViewController *)((char *)v2 - 80));
  }
  else
  {
    v4 = Caver::OnlineController::SharedController(this);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
  }
}

