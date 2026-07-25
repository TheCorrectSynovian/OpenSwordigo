/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000357A14
 * Mangled: _ZN5Caver18GameViewController32PortalViewControllerDidGotoLevelEPNS_20PortalViewControllerERKSs
 * Demangled: Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *
 * Callers: 1
 *   0x00000000001F5EC0  Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8900  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x0000000000202BC0  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *   0x0000000000357C70  `non-virtual thunk to'Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 64
 *   insn=0x0000000000357A28 string=0x0000000000357A2C "U"
 *   insn=0x0000000000357A3C string=0x000000000058EEC0 "beammeupscotty"
 *   insn=0x0000000000357A48 string=0x0000000000357A4C "[<"
 *   insn=0x0000000000357A54 string=0x0000000000357A58 "Z"
 *   insn=0x0000000000357A58 string=0x0000000000357A5C "U"
 *   insn=0x0000000000357A60 string=0x0000000000357A64 "v"
 *   insn=0x0000000000357A74 string=0x0000000000357AF0 "i"
 *   insn=0x0000000000357A7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000357A84 string=0x00000000005948C9 "portal"
 *   insn=0x0000000000357A90 string=0x0000000000357A94 "I<"
 *   insn=0x0000000000357AA8 string=0x00000000001F8900 "0'"
 *   insn=0x0000000000357AB0 string=0x0000000000357AB4 "?"
 *   insn=0x0000000000357AC4 string=0x0000000000357B14 "i"
 *   insn=0x0000000000357AD0 string=0x0000000000357AD4 "!"
 *   insn=0x0000000000357AF0 string=0x0000000000357AF4 ")=G"
 *   insn=0x0000000000357AF4 string=0x0000000000357AF8 "!"
 *   insn=0x0000000000357AFC string=0x0000000000357B00 "\t"
 *   insn=0x0000000000357AFC string=0x0000000000357B38 "\t"
 *   insn=0x0000000000357B00 string=0x0000000000357B04 "*"
 *   insn=0x0000000000357B04 string=0x0000000000357B08 "\n"
 *   insn=0x0000000000357B0C string=0x0000000000357B10 ""
 *   insn=0x0000000000357B10 string=0x0000000000357B44 "?"
 *   insn=0x0000000000357B14 string=0x0000000000357B18 ")=G"
 *   insn=0x0000000000357B18 string=0x0000000000357B1C "!"
 *   insn=0x0000000000357B20 string=0x0000000000357B24 "\t"
 *   insn=0x0000000000357B20 string=0x0000000000357B58 "\t"
 *   insn=0x0000000000357B24 string=0x0000000000357B28 "*"
 *   insn=0x0000000000357B28 string=0x0000000000357B2C "\n"
 *   insn=0x0000000000357B34 string=0x0000000000357B64 "?"
 *   insn=0x0000000000357B38 string=0x0000000000357B3C "*"
 *   insn=0x0000000000357B3C string=0x0000000000357B40 "\n"
 *   insn=0x0000000000357B58 string=0x0000000000357B5C "*"
 *   insn=0x0000000000357B5C string=0x0000000000357B60 "\n"
 *   insn=0x0000000000357B6C string=0x0000000000357B70 "J"
 *   insn=0x0000000000357B78 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000357B8C string=0x0000000000357B90 "(a"
 *   insn=0x0000000000357B98 string=0x0000000000357B9C "j"
 *   insn=0x0000000000357B9C string=0x0000000000357BA0 "J=G"
 *   insn=0x0000000000357BA0 string=0x0000000000357BA4 ")!"
 *   insn=0x0000000000357BA8 string=0x0000000000357BAC "*"
 *   insn=0x0000000000357BA8 string=0x0000000000357BE4 "*"
 *   insn=0x0000000000357BAC string=0x0000000000357BB0 "K"
 *   insn=0x0000000000357BB0 string=0x0000000000357BB4 "+"
 *   insn=0x0000000000357BB8 string=0x0000000000357BBC "_"
 *   insn=0x0000000000357BD8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000357BDC string=0x0000000000357BE0 "9"
 *   insn=0x0000000000357BE4 string=0x0000000000357BE8 "K"
 *   insn=0x0000000000357BE8 string=0x0000000000357BEC "+"
 *   insn=0x0000000000357BEC string=0x0000000000357BF0 "_"
 *   insn=0x0000000000357BFC string=0x0000000000357C00 "j"
 *   insn=0x0000000000357C00 string=0x0000000000357C04 "J"
 *   insn=0x0000000000357C08 string=0x0000000000357C0C "(a"
 *   insn=0x0000000000357C14 string=0x0000000000357C18 "j"
 *   insn=0x0000000000357C18 string=0x0000000000357C1C "J=G"
 *   insn=0x0000000000357C1C string=0x0000000000357C20 ")!"
 *   insn=0x0000000000357C24 string=0x0000000000357C28 "*"
 *   insn=0x0000000000357C24 string=0x0000000000357C54 "*"
 *   insn=0x0000000000357C28 string=0x0000000000357C2C "K"
 *   insn=0x0000000000357C2C string=0x0000000000357C30 "+"
 *   insn=0x0000000000357C34 string=0x0000000000357C38 "_"
 *   insn=0x0000000000357C38 string=0x0000000000357C3C "l"
 *   insn=0x0000000000357C54 string=0x0000000000357C58 "K"
 *   insn=0x0000000000357C58 string=0x0000000000357C5C "+"
 *   insn=0x0000000000357C5C string=0x0000000000357C60 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void Caver::GameViewController::PortalViewControllerDidGotoLevel()
{
  Caver::GameEvent *v0; // x0
  Caver::GameEvent *v1; // x1
  void *v2; // x0
  Caver::GameEvent *v3; // x20
  Caver::GameEvent *v4; // x1
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  _QWORD v10[3]; // [xsp+8h] [xbp-48h] BYREF

  v10[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v10, "beammeupscotty");
  v0 = (Caver::GameEvent *)Caver::GameEvent::NewCounterEvent();
  Caver::GameEvent::SendEvent(v0, v1);
  v2 = (void *)(v10[0] - 24LL);
  if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v10[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v2);
  }
  v3 = (Caver::GameEvent *)operator new(0x80u);
  sub_566BB8((int)v10, "portal");
  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent();
  Caver::GameEvent::SendEvent(v3, v4);
  v5 = (void *)(v10[0] - 24LL);
  if ( (__int64 *)(v10[0] - 24LL) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v10[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v5);
  }
}

