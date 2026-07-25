/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002216FC
 * Mangled: _ZN5Caver26KeyframeAnimationComponentD2Ev
 * Demangled: Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *
 * Callers: 1
 *   0x00000000001F7D60  Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7D60  Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000221910  Caver::KeyframeAnimationComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 72
 *   insn=0x0000000000221708 string=0x000000000022170C "T"
 *   insn=0x0000000000221710 string=0x0000000000221714 ")&"
 *   insn=0x0000000000221714 string=0x0000000000221718 ")U@"
 *   insn=0x0000000000221720 string=0x0000000000221724 "`J@"
 *   insn=0x0000000000221724 string=0x0000000000221728 "("
 *   insn=0x000000000022172C string=0x0000000000221730 "("
 *   insn=0x0000000000221730 string=0x0000000000221734 "*A"
 *   insn=0x0000000000221738 string=0x000000000022173C "j"
 *   insn=0x000000000022173C string=0x0000000000221740 "`"
 *   insn=0x0000000000221744 string=0x0000000000221748 "@"
 *   insn=0x0000000000221744 string=0x0000000000221764 "hF@"
 *   insn=0x0000000000221748 string=0x000000000022174C ""
 *   insn=0x000000000022174C string=0x0000000000221750 ""
 *   insn=0x0000000000221754 string=0x0000000000221758 ""
 *   insn=0x0000000000221758 string=0x000000000022175C ""
 *   insn=0x0000000000221764 string=0x0000000000221768 ")&"
 *   insn=0x0000000000221768 string=0x000000000022176C ")"
 *   insn=0x0000000000221778 string=0x000000000022177C "(&"
 *   insn=0x0000000000221778 string=0x00000000002217D8 "\t&"
 *   insn=0x000000000022177C string=0x0000000000221780 "`B@"
 *   insn=0x0000000000221780 string=0x0000000000221784 "i@"
 *   insn=0x0000000000221784 string=0x0000000000221788 "A"
 *   insn=0x0000000000221788 string=0x000000000022178C "h:"
 *   insn=0x0000000000221790 string=0x0000000000221794 "@"
 *   insn=0x0000000000221794 string=0x0000000000221798 ""
 *   insn=0x0000000000221798 string=0x000000000022179C ""
 *   insn=0x00000000002217A0 string=0x00000000002217A4 ""
 *   insn=0x00000000002217A4 string=0x00000000002217A8 ""
 *   insn=0x00000000002217B0 string=0x00000000002217B4 "Gc"
 *   insn=0x00000000002217B4 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002217D8 string=0x00000000002217DC ")=G"
 *   insn=0x00000000002217DC string=0x00000000002217E0 "!"
 *   insn=0x00000000002217E4 string=0x00000000002217E8 "\t"
 *   insn=0x00000000002217E4 string=0x00000000002217FC "\t"
 *   insn=0x00000000002217E8 string=0x00000000002217EC "*"
 *   insn=0x00000000002217EC string=0x00000000002217F0 "\n"
 *   insn=0x00000000002217F8 string=0x0000000000221808 "?"
 *   insn=0x00000000002217FC string=0x0000000000221800 "*"
 *   insn=0x0000000000221800 string=0x0000000000221804 "\n"
 *   insn=0x000000000022181C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000221820 string=0x0000000000221824 """
 *   insn=0x0000000000221828 string=0x000000000022182C "*&"
 *   insn=0x000000000022182C string=0x0000000000221830 "J"
 *   insn=0x0000000000221834 string=0x0000000000221838 "(a"
 *   insn=0x0000000000221840 string=0x0000000000221844 "\n&"
 *   insn=0x0000000000221840 string=0x0000000000221878 "(&"
 *   insn=0x0000000000221844 string=0x0000000000221848 "J=G"
 *   insn=0x0000000000221848 string=0x000000000022184C ")!"
 *   insn=0x000000000022184C string=0x0000000000221850 "j"
 *   insn=0x0000000000221850 string=0x0000000000221854 "*"
 *   insn=0x0000000000221850 string=0x00000000002218BC "*"
 *   insn=0x0000000000221854 string=0x0000000000221858 "K"
 *   insn=0x0000000000221858 string=0x000000000022185C "+"
 *   insn=0x0000000000221860 string=0x0000000000221864 "_"
 *   insn=0x0000000000221878 string=0x000000000022187C "`B@"
 *   insn=0x000000000022187C string=0x0000000000221880 "i@"
 *   insn=0x0000000000221880 string=0x0000000000221884 "A"
 *   insn=0x0000000000221884 string=0x0000000000221888 "h:"
 *   insn=0x000000000022188C string=0x0000000000221890 "@"
 *   insn=0x0000000000221890 string=0x0000000000221894 ""
 *   insn=0x0000000000221894 string=0x0000000000221898 ""
 *   insn=0x000000000022189C string=0x00000000002218A0 ""
 *   insn=0x00000000002218A0 string=0x00000000002218A4 ""
 *   insn=0x00000000002218AC string=0x00000000002218B0 "c"
 *   insn=0x00000000002218BC string=0x00000000002218C0 "K"
 *   insn=0x00000000002218C0 string=0x00000000002218C4 "+"
 *   insn=0x00000000002218C4 string=0x00000000002218C8 "_"
 *   insn=0x00000000002218C8 string=0x00000000002218CC ""
 *   insn=0x00000000002218E8 string=0x00000000001F7D60 "0'"
 *   insn=0x00000000002218F4 string=0x00000000002218F8 "nV"
 *   insn=0x00000000002218F8 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000221900 string=0x0000000000221904 "kV"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::KeyframeAnimationComponent::~KeyframeAnimationComponent(Caver::KeyframeAnimationComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  __int64 v5; // x8
  void *v6; // x0
  _DWORD *v7; // x0
  int v8; // w8
  unsigned int *v9; // x8
  int v10; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 18);
  *(_QWORD *)&v3 = &off_6B9F70;
  *((_QWORD *)&v3 + 1) = &off_6B9FB0;
  *(_QWORD *)this = off_6B9E50;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = *((_QWORD *)this + 17);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v5 - 8);
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
  v7 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = off_6B9438;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  Caver::Component::~Component(this);
}

