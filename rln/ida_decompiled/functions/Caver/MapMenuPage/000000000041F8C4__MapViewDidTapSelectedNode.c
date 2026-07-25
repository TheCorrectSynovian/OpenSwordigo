/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041F8C4
 * Mangled: _ZN5Caver11MapMenuPage25MapViewDidTapSelectedNodeEPNS_7MapViewE
 * Demangled: Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callers: 1
 *   0x00000000001FB190  Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapView *)
 *
 * Callees: 10
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8900  Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&,std::string const&)
 *   0x00000000001FE7B0  Caver::GameEvent::SendEvent(Caver::GameEvent*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 74
 *   insn=0x000000000041F8D4 string=0x000000000041F8D8 "T"
 *   insn=0x000000000041F8E0 string=0x000000000041F8E4 ""
 *   insn=0x000000000041F8E8 string=0x000000000041F8EC ""
 *   insn=0x000000000041F8F0 string=0x000000000041F8F4 "\t"
 *   insn=0x000000000041F8F4 string=0x000000000041F8F8 ""
 *   insn=0x000000000041F8F8 string=0x000000000041F8FC ")"
 *   insn=0x000000000041F900 string=0x000000000041F904 "7W"
 *   insn=0x000000000041F904 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000041F91C string=0x00000000005948C9 "portal"
 *   insn=0x000000000041F940 string=0x00000000001F8900 "0'"
 *   insn=0x000000000041F950 string=0x000000000041F954 "3"
 *   insn=0x000000000041F954 string=0x000000000041F958 "s"
 *   insn=0x000000000041F964 string=0x000000000041F99C ")"
 *   insn=0x000000000041F970 string=0x000000000041F974 "a"
 *   insn=0x000000000041F974 string=0x000000000041F9C0 ")"
 *   insn=0x000000000041F984 string=0x000000000041FA24 "+Z"
 *   insn=0x000000000041F99C string=0x000000000041F9A0 ")=G"
 *   insn=0x000000000041F9A0 string=0x000000000041F9A4 "!"
 *   insn=0x000000000041F9A8 string=0x000000000041F9AC "\t"
 *   insn=0x000000000041F9A8 string=0x000000000041F9E4 "\t"
 *   insn=0x000000000041F9AC string=0x000000000041F9B0 "*"
 *   insn=0x000000000041F9B0 string=0x000000000041F9B4 "\n"
 *   insn=0x000000000041F9B8 string=0x000000000041F9BC ""
 *   insn=0x000000000041F9BC string=0x000000000041F9F0 "?"
 *   insn=0x000000000041F9C0 string=0x000000000041F9C4 ")=G"
 *   insn=0x000000000041F9C4 string=0x000000000041F9C8 "!"
 *   insn=0x000000000041F9CC string=0x000000000041F9D0 "\t"
 *   insn=0x000000000041F9CC string=0x000000000041FA04 "\t"
 *   insn=0x000000000041F9D0 string=0x000000000041F9D4 "*"
 *   insn=0x000000000041F9D4 string=0x000000000041F9D8 "\n"
 *   insn=0x000000000041F9E0 string=0x000000000041FA10 "?"
 *   insn=0x000000000041F9E4 string=0x000000000041F9E8 "*"
 *   insn=0x000000000041F9E8 string=0x000000000041F9EC "\n"
 *   insn=0x000000000041F9F8 string=0x000000000041F9FC "j*"
 *   insn=0x000000000041FA04 string=0x000000000041FA08 "*"
 *   insn=0x000000000041FA08 string=0x000000000041FA0C "\n"
 *   insn=0x000000000041FA10 string=0x000000000041FA14 ","
 *   insn=0x000000000041FA18 string=0x000000000041FA1C "b*"
 *   insn=0x000000000041FA24 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000041FA2C string=0x000000000041FA30 "\n"
 *   insn=0x000000000041FA34 string=0x000000000041FA38 ""
 *   insn=0x000000000041FA3C string=0x000000000041FA40 "*"
 *   insn=0x000000000041FA40 string=0x000000000041FA44 "J"
 *   insn=0x000000000041FA48 string=0x000000000041FA4C "(a"
 *   insn=0x000000000041FA54 string=0x000000000041FAB4 "*"
 *   insn=0x000000000041FA58 string=0x000000000041FA5C ")"
 *   insn=0x000000000041FA5C string=0x000000000041FA60 ")"
 *   insn=0x000000000041FA6C string=0x000000000041FA70 ")"
 *   insn=0x000000000041FA6C string=0x000000000041FAA0 "u"
 *   insn=0x000000000041FA70 string=0x000000000041FA74 ")=G"
 *   insn=0x000000000041FA74 string=0x000000000041FA78 "!"
 *   insn=0x000000000041FA78 string=0x000000000041FA7C "\t"
 *   insn=0x000000000041FA7C string=0x000000000041FA80 "\t"
 *   insn=0x000000000041FA7C string=0x000000000041FAFC "\t"
 *   insn=0x000000000041FA80 string=0x000000000041FA84 "*"
 *   insn=0x000000000041FA84 string=0x000000000041FA88 "\n"
 *   insn=0x000000000041FA8C string=0x000000000041FA90 "?"
 *   insn=0x000000000041FA90 string=0x000000000041FA94 "l"
 *   insn=0x000000000041FA98 string=0x000000000041FA9C "B*"
 *   insn=0x000000000041FAA8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041FAB4 string=0x000000000041FAB8 "J=G"
 *   insn=0x000000000041FAB8 string=0x000000000041FABC ")!"
 *   insn=0x000000000041FAC0 string=0x000000000041FAC4 "*"
 *   insn=0x000000000041FAC0 string=0x000000000041FAD8 "*"
 *   insn=0x000000000041FAC4 string=0x000000000041FAC8 "K"
 *   insn=0x000000000041FAC8 string=0x000000000041FACC "+"
 *   insn=0x000000000041FAD4 string=0x000000000041FAE4 "_"
 *   insn=0x000000000041FAD8 string=0x000000000041FADC "K"
 *   insn=0x000000000041FADC string=0x000000000041FAE0 "+"
 *   insn=0x000000000041FAF0 string=0x000000000041FAF4 ",*"
 *   insn=0x000000000041FAFC string=0x000000000041FB00 "*"
 *   insn=0x000000000041FB00 string=0x000000000041FB04 "\n"
 *   insn=0x000000000041FB04 string=0x000000000041FB08 "?"
 *   insn=0x000000000041FB08 string=0x000000000041FB0C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapMenuPage::MapViewDidTapSelectedNode(Caver::MapMenuPage *this, Caver::MapView *a2)
{
  _QWORD *v2; // x21
  Caver::GameEvent *v3; // x19
  Caver::GameEvent *v4; // x1
  void *v5; // x0
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // [xsp+10h] [xbp-40h] BYREF
  _QWORD v12[3]; // [xsp+18h] [xbp-38h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *((_BYTE *)this + 504) )
  {
    v2 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 57) + 280LL) + 16LL * *(_QWORD *)(*((_QWORD *)this + 57) + 1024LL));
    v3 = (Caver::GameEvent *)operator new(0x80u);
    sub_56A528(v12, *v2 + 16LL);
    sub_566BB8((int)&v11, "portal");
    Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent();
    Caver::GameEvent::SendEvent(v3, v4);
    v5 = (void *)(v11 - 24);
    if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
    {
      v7 = (unsigned int *)(v11 - 8);
      if ( &pthread_create )
      {
        do
          v8 = __ldaxr(v7);
        while ( __stlxr(v8 - 1, v7) );
      }
      else
      {
        v8 = (*v7)--;
      }
      if ( v8 <= 0 )
        operator delete(v5);
    }
    v6 = (void *)(v12[0] - 24LL);
    if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
    {
      v9 = (unsigned int *)(v12[0] - 8LL);
      if ( &pthread_create )
      {
        do
          v10 = __ldaxr(v9);
        while ( __stlxr(v10 - 1, v9) );
      }
      else
      {
        v10 = (*v9)--;
      }
      if ( v10 <= 0 )
        operator delete(v6);
    }
  }
}

