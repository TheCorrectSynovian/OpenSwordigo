/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F0554
 * Mangled: _ZN5Caver19StoreViewControllerD2Ev
 * Demangled: Caver::StoreViewController::~StoreViewController()
 *
 * Callers: 1
 *   0x00000000001F6C40  Caver::StoreViewController::~StoreViewController()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF1E0  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(std::_Rb_tree_node<std::string> *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003F08B4  Caver::StoreViewController::~StoreViewController()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 70
 *   insn=0x00000000003F0568 string=0x00000000003F056C "V"
 *   insn=0x00000000003F0578 string=0x00000000003F057C ")"
 *   insn=0x00000000003F0580 string=0x00000000003F0584 "aZ@"
 *   insn=0x00000000003F0584 string=0x00000000003F0588 "`"
 *   insn=0x00000000003F0588 string=0x00000000003F058C "*A"
 *   insn=0x00000000003F058C string=0x00000000003F0590 "("
 *   insn=0x00000000003F0590 string=0x00000000003F0594 "j"
 *   insn=0x00000000003F0594 string=0x00000000003F0598 "h&"
 *   insn=0x00000000003F059C string=0x00000000003F05A0 "t"
 *   insn=0x00000000003F05A8 string=0x00000000003F0604 "t"
 *   insn=0x00000000003F05AC string=0x00000000003F05B0 "5"
 *   insn=0x00000000003F05B4 string=0x00000000003F05B8 ""
 *   insn=0x00000000003F05C4 string=0x00000000003F05C8 "\t@"
 *   insn=0x00000000003F05D4 string=0x00000000003F05D8 ""
 *   insn=0x00000000003F05E4 string=0x00000000003F05E8 "@"
 *   insn=0x00000000003F05FC string=0x00000000003F0600 "tF@"
 *   insn=0x00000000003F0604 string=0x00000000003F0610 "tVG"
 *   insn=0x00000000003F0608 string=0x00000000003F060C ")"
 *   insn=0x00000000003F060C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003F0618 string=0x00000000003F068C "t"
 *   insn=0x00000000003F0634 string=0x00000000003F0638 "\t"
 *   insn=0x00000000003F0634 string=0x00000000003F064C "\t"
 *   insn=0x00000000003F0638 string=0x00000000003F063C "*"
 *   insn=0x00000000003F063C string=0x00000000003F0640 "\n"
 *   insn=0x00000000003F0648 string=0x00000000003F0658 "?"
 *   insn=0x00000000003F064C string=0x00000000003F0650 "*"
 *   insn=0x00000000003F0650 string=0x00000000003F0654 "\n"
 *   insn=0x00000000003F0660 string=0x00000000003F0664 "P"
 *   insn=0x00000000003F0678 string=0x00000000003F0630 "!"
 *   insn=0x00000000003F0680 string=0x00000000003F0684 "A"
 *   insn=0x00000000003F0684 string=0x00000000003F0688 "t:@"
 *   insn=0x00000000003F068C string=0x00000000003F0698 "t2@"
 *   insn=0x00000000003F0690 string=0x00000000003F0694 ""
 *   insn=0x00000000003F0698 string=0x00000000003F069C "4"
 *   insn=0x00000000003F06A0 string=0x00000000003F06A4 ""
 *   insn=0x00000000003F06B0 string=0x00000000003F06B4 "\t@"
 *   insn=0x00000000003F06C0 string=0x00000000003F06C4 ""
 *   insn=0x00000000003F06D0 string=0x00000000003F06D4 "@"
 *   insn=0x00000000003F06E4 string=0x00000000001F6590 "0'"
 *   insn=0x00000000003F0710 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003F0714 string=0x00000000003F0718 "`"
 *   insn=0x00000000003F072C string=0x00000000003F0730 "6"
 *   insn=0x00000000003F0734 string=0x00000000003F0738 ""
 *   insn=0x00000000003F0744 string=0x00000000003F0748 "\t@"
 *   insn=0x00000000003F0754 string=0x00000000003F0758 ""
 *   insn=0x00000000003F0764 string=0x00000000003F0768 "@"
 *   insn=0x00000000003F077C string=0x00000000003F0780 "uF@"
 *   insn=0x00000000003F0784 string=0x00000000003F07C0 "uZG"
 *   insn=0x00000000003F07A8 string=0x00000000003F07AC "hF@"
 *   insn=0x00000000003F07B0 string=0x00000000003F07B4 "h"
 *   insn=0x00000000003F07C8 string=0x00000000003F0844 "u"
 *   insn=0x00000000003F07E4 string=0x00000000003F07E8 "\t"
 *   insn=0x00000000003F07E4 string=0x00000000003F0804 "\t"
 *   insn=0x00000000003F07E8 string=0x00000000003F07EC "*"
 *   insn=0x00000000003F07EC string=0x00000000003F07F0 "\n"
 *   insn=0x00000000003F07F4 string=0x00000000003F07F8 "?"
 *   insn=0x00000000003F0804 string=0x00000000003F0808 "*"
 *   insn=0x00000000003F0808 string=0x00000000003F080C "\n"
 *   insn=0x00000000003F080C string=0x00000000003F0810 "?"
 *   insn=0x00000000003F0830 string=0x00000000003F07E0 "!"
 *   insn=0x00000000003F0838 string=0x00000000003F083C "A"
 *   insn=0x00000000003F083C string=0x00000000003F0840 "u:@"
 *   insn=0x00000000003F0844 string=0x00000000003F0850 "u2@"
 *   insn=0x00000000003F0850 string=0x00000000003F0854 "5"
 *   insn=0x00000000003F0858 string=0x00000000003F085C ""
 *   insn=0x00000000003F0868 string=0x00000000003F086C "\t@"
 *   insn=0x00000000003F0878 string=0x00000000003F087C ""
 *   insn=0x00000000003F0888 string=0x00000000003F088C "@"
 *   insn=0x00000000003F0898 string=0x00000000003F089C "="
 *   insn=0x00000000003F08A0 string=0x00000000003F08A4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreViewController::~StoreViewController(Caver::StoreViewController *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x23
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  _QWORD *v8; // x21
  unsigned int *v9; // x8
  int v10; // w9
  __int64 *v11; // x0
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x8

  _ReadStatusReg(TPIDR_EL0);
  *(_QWORD *)this = off_6D0ED0;
  *((_QWORD *)this + 9) = &off_6D0F40;
  std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase();
  v2 = (_QWORD *)*((_QWORD *)this + 17);
  v3 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 17);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 14);
  v8 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v7 != v8 )
  {
    do
    {
      v11 = (__int64 *)(*v7 - 24LL);
      if ( v11 != &qword_6FD2E0 )
      {
        v9 = (unsigned int *)(*v7 - 8LL);
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
          operator delete(v11);
      }
      ++v7;
    }
    while ( v7 != v8 );
    v7 = (_QWORD *)*((_QWORD *)this + 14);
  }
  if ( v7 )
    operator delete(v7);
  v12 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v12 )
  {
    v13 = v12[1] - 1LL;
    v12[1] = v13;
    if ( !v13 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
      v14 = v12[2] - 1LL;
      v12[2] = v14;
      if ( !v14 )
        (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

