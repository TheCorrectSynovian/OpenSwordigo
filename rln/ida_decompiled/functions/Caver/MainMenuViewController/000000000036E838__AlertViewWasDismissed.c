/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036E838
 * Mangled: _ZN5Caver22MainMenuViewController21AlertViewWasDismissedEPNS_12GUIAlertViewE
 * Demangled: Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callers: 1
 *   0x00000000001FE220  Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *
 * Callees: 1
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *
 * Referenced strings: 15
 *   insn=0x000000000036E844 string=0x000000000036E848 "hv@"
 *   insn=0x000000000036E850 string=0x000000000036E854 "h~@"
 *   insn=0x000000000036E858 string=0x000000000036E85C "!"
 *   insn=0x000000000036E85C string=0x000000000036E860 "t"
 *   insn=0x000000000036E864 string=0x000000000036E868 "T"
 *   insn=0x000000000036E870 string=0x000000000036E874 ""
 *   insn=0x000000000036E870 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036E874 string=0x000000000036E878 "a"
 *   insn=0x000000000036E878 string=0x000000000036E87C "1@"
 *   insn=0x000000000036E880 string=0x000000000036E884 "tz@"
 *   insn=0x000000000036E890 string=0x000000000036E894 ""
 *   insn=0x000000000036E898 string=0x000000000036E89C "!"
 *   insn=0x000000000036E8A4 string=0x000000000036E8A8 "\t@"
 *   insn=0x000000000036E8B0 string=0x000000000036E8B4 ""
 *   insn=0x000000000036E8DC string=0x000000000036E8E0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MainMenuViewController::AlertViewWasDismissed(__int64 this, Caver::GUIAlertView *a2)
{
  __int64 v2; // x19
  _QWORD *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x8

  v2 = this;
  if ( *(Caver::GUIAlertView **)(this + 232) == a2 )
  {
    v4 = Caver::OnlineController::SharedController((Caver::OnlineController *)this);
    this = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, *(unsigned int *)(v2 + 284));
    v3 = *(_QWORD **)(v2 + 240);
    *(_QWORD *)(v2 + 232) = 0;
    *(_QWORD *)(v2 + 240) = 0;
    if ( !v3 )
      return this;
  }
  else
  {
    if ( *(Caver::GUIAlertView **)(this + 248) != a2 )
      return this;
    v3 = *(_QWORD **)(this + 256);
    *(_QWORD *)(this + 248) = 0;
    *(_QWORD *)(this + 256) = 0;
    if ( !v3 )
      return this;
  }
  v5 = v3[1] - 1LL;
  v3[1] = v5;
  if ( !v5 )
  {
    this = (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
    v6 = v3[2] - 1LL;
    v3[2] = v6;
    if ( !v6 )
      return (*(__int64 (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  }
  return this;
}

