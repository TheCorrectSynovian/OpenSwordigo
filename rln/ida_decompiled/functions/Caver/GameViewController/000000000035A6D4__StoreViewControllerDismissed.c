/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000035A6D4
 * Mangled: _ZN5Caver18GameViewController28StoreViewControllerDismissedEPNS_19StoreViewControllerE
 * Demangled: Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callers: 1
 *   0x00000000001F9250  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9250  Caver::GameViewController::StoreViewControllerDismissed(Caver::StoreViewController *)
 *   0x00000000001FB640  Caver::GameViewController::CheckAndEnableNewPurchases(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201730  Caver::PortalComponent::Activate(void)
 *   0x00000000002018F0  Caver::Scene::ObjectWithIdentifier(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002314D0  Caver::PortalComponent::Interface(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x000000000035A6E0 string=0x000000000035A6E4 "T"
 *   insn=0x000000000035A6F0 string=0x000000000035A6F4 "h"
 *   insn=0x000000000035A6F4 string=0x000000000035A6F8 ""
 *   insn=0x000000000035A6FC string=0x000000000035A700 "hf@"
 *   insn=0x000000000035A700 string=0x000000000035A704 "a"
 *   insn=0x000000000035A70C string=0x000000000035A710 "x"
 *   insn=0x000000000035A718 string=0x000000000035A71C "a"
 *   insn=0x000000000035A71C string=0x000000000035A720 "!tD"
 *   insn=0x000000000035A724 string=0x000000000035A728 "@"
 *   insn=0x000000000035A734 string=0x000000000035A738 "@"
 *   insn=0x000000000035A738 string=0x000000000035A73C ""
 *   insn=0x000000000035A73C string=0x000000000035A740 ""
 *   insn=0x000000000035A744 string=0x000000000035A748 ""
 *   insn=0x000000000035A748 string=0x000000000035A74C ""
 *   insn=0x000000000035A758 string=0x00000000001FB640 "0'"
 *   insn=0x000000000035A77C string=0x00000000001F62D0 "0'"
 *   insn=0x000000000035A784 string=0x000000000035A788 "("
 *   insn=0x000000000035A788 string=0x000000000035A78C "\t\t@"
 *   insn=0x000000000035A78C string=0x000000000035A790 ")"
 *   insn=0x000000000035A790 string=0x000000000035A794 "\t\t"
 *   insn=0x000000000035A798 string=0x000000000035A79C "\t"
 *   insn=0x000000000035A79C string=0x000000000035A7A0 ")"
 *   insn=0x000000000035A7A4 string=0x000000000035A7A8 " "
 *   insn=0x000000000035A7AC string=0x000000000035A7B0 "E"
 *   insn=0x000000000035A7BC string=0x00000000001F9250 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::StoreViewControllerDismissed(
        Caver::GameViewController *this,
        Caver::StoreViewController *a2)
{
  Caver::PortalComponent *v3; // x0
  int v4; // w8
  Caver::SceneObject *v5; // [xsp+0h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( *(_QWORD *)(*((_QWORD *)this + 39) - 24LL) )
  {
    Caver::Scene::ObjectWithIdentifier();
    if ( v5 )
    {
      v3 = (Caver::PortalComponent *)Caver::SceneObject::ComponentWithInterface(
                                       v5,
                                       (__int64)Caver::PortalComponent::Interface);
      if ( v3 )
        Caver::PortalComponent::Activate(v3);
      v4 = *((_DWORD *)v5 + 2) - 1;
      *((_DWORD *)v5 + 2) = v4;
      if ( !v4 )
        (*(void (__fastcall **)())(*(_QWORD *)v5 + 8LL))();
    }
  }
  Caver::GameViewController::CheckAndEnableNewPurchases(this);
}

