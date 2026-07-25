/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D66C
 * Mangled: _ZN5Caver32SkellyMonsterControllerComponentC2Ev
 * Demangled: Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FC9E0  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *   0x00000000001FFE00  Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(void)
 *
 * Callees: 10
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 108
 *   insn=0x000000000029D684 string=0x000000000029D688 "Y"
 *   insn=0x000000000029D688 string=0x000000000029D68C "("
 *   insn=0x000000000029D694 string=0x000000000029D698 "Fs"
 *   insn=0x000000000029D698 string=0x000000000029D69C "H""
 *   insn=0x000000000029D698 string=0x00000000001FA3B0 "0'"
 *   insn=0x000000000029D69C string=0x000000000029D6A0 "D"
 *   insn=0x000000000029D6A0 string=0x000000000029D6A4 "V""
 *   insn=0x000000000029D6A8 string=0x000000000029D6AC "W""
 *   insn=0x000000000029D6AC string=0x000000000029D6B0 "\t"
 *   insn=0x000000000029D6B4 string=0x000000000029D6B8 " "
 *   insn=0x000000000029D6B8 string=0x000000000029D6BC "\t"
 *   insn=0x000000000029D6BC string=0x000000000029D6C0 " "
 *   insn=0x000000000029D6C0 string=0x000000000029D6C4 "i"
 *   insn=0x000000000029D6C4 string=0x000000000029D6C8 "`"
 *   insn=0x000000000029D6C8 string=0x000000000029D6CC " "
 *   insn=0x000000000029D6CC string=0x000000000029D6D0 "A"
 *   insn=0x000000000029D6D4 string=0x000000000029D6D8 "h"
 *   insn=0x000000000029D6FC string=0x000000000029D700 "hR"
 *   insn=0x000000000029D70C string=0x000000000029D710 "iB"
 *   insn=0x000000000029D71C string=0x000000000029D720 "a"
 *   insn=0x000000000029D720 string=0x0000000000589380 "charController"
 *   insn=0x000000000029D72C string=0x000000000029D730 ""%"
 *   insn=0x000000000029D744 string=0x000000000029D748 "fe"
 *   insn=0x000000000029D748 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000029D74C string=0x000000000029D750 "U""
 *   insn=0x000000000029D75C string=0x000000000029D760 "a"
 *   insn=0x000000000029D760 string=0x000000000029D764 "A"
 *   insn=0x000000000029D760 string=0x000000000029D7CC ")""
 *   insn=0x000000000029D764 string=0x0000000000588EE9 "attackArea"
 *   insn=0x000000000029D788 string=0x000000000029D78C "Ue"
 *   insn=0x000000000029D79C string=0x000000000029D7A0 "("
 *   insn=0x000000000029D79C string=0x000000000029D7F0 ")""
 *   insn=0x000000000029D7A8 string=0x000000000029D7AC "A"
 *   insn=0x000000000029D7CC string=0x000000000029D7D0 ")=G"
 *   insn=0x000000000029D7D0 string=0x000000000029D7D4 "!"
 *   insn=0x000000000029D7D8 string=0x000000000029D7DC "\t"
 *   insn=0x000000000029D7D8 string=0x000000000029D814 "\t"
 *   insn=0x000000000029D7DC string=0x000000000029D7E0 "*"
 *   insn=0x000000000029D7E0 string=0x000000000029D7E4 "\n"
 *   insn=0x000000000029D7E8 string=0x000000000029D7EC ""
 *   insn=0x000000000029D7EC string=0x000000000029D820 "?"
 *   insn=0x000000000029D7F0 string=0x000000000029D7F4 ")=G"
 *   insn=0x000000000029D7F4 string=0x000000000029D7F8 "!"
 *   insn=0x000000000029D7FC string=0x000000000029D800 "\t"
 *   insn=0x000000000029D7FC string=0x000000000029D834 "\t"
 *   insn=0x000000000029D800 string=0x000000000029D804 "*"
 *   insn=0x000000000029D804 string=0x000000000029D808 "\n"
 *   insn=0x000000000029D810 string=0x000000000029D840 "?"
 *   insn=0x000000000029D814 string=0x000000000029D818 "*"
 *   insn=0x000000000029D818 string=0x000000000029D81C "\n"
 *   insn=0x000000000029D834 string=0x000000000029D838 "*"
 *   insn=0x000000000029D838 string=0x000000000029D83C "\n"
 *   insn=0x000000000029D854 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000029D858 string=0x000000000029D85C "(a"
 *   insn=0x000000000029D868 string=0x000000000029D86C "*""
 *   insn=0x000000000029D868 string=0x000000000029D918 "`"
 *   insn=0x000000000029D86C string=0x000000000029D870 "J=G"
 *   insn=0x000000000029D870 string=0x000000000029D874 ")!"
 *   insn=0x000000000029D874 string=0x000000000029D878 "*"
 *   insn=0x000000000029D878 string=0x000000000029D87C "*"
 *   insn=0x000000000029D878 string=0x000000000029D8FC "*"
 *   insn=0x000000000029D87C string=0x000000000029D880 "K"
 *   insn=0x000000000029D880 string=0x000000000029D884 "+"
 *   insn=0x000000000029D88C string=0x000000000029D8DC "_"
 *   insn=0x000000000029D890 string=0x000000000029D894 "`"
 *   insn=0x000000000029D894 string=0x000000000029D898 "@"
 *   insn=0x000000000029D898 string=0x000000000029D89C "("
 *   insn=0x000000000029D898 string=0x000000000029D920 "@"
 *   insn=0x000000000029D89C string=0x000000000029D93C "`"
 *   insn=0x000000000029D8A0 string=0x000000000029D8A4 "J""
 *   insn=0x000000000029D8A4 string=0x000000000029D8A8 "J"
 *   insn=0x000000000029D8AC string=0x000000000029D8B0 "(a"
 *   insn=0x000000000029D8B8 string=0x000000000029D8BC "*""
 *   insn=0x000000000029D8BC string=0x000000000029D8C0 "J=G"
 *   insn=0x000000000029D8C0 string=0x000000000029D8C4 ")!"
 *   insn=0x000000000029D8C8 string=0x000000000029D8CC "*"
 *   insn=0x000000000029D8CC string=0x000000000029D8D0 "K"
 *   insn=0x000000000029D8D0 string=0x000000000029D8D4 "+"
 *   insn=0x000000000029D8EC string=0x000000000029D8F0 "`"
 *   insn=0x000000000029D8F0 string=0x000000000029D8F4 "`"
 *   insn=0x000000000029D8FC string=0x000000000029D900 "K"
 *   insn=0x000000000029D900 string=0x000000000029D904 "+"
 *   insn=0x000000000029D904 string=0x000000000029D908 "_"
 *   insn=0x000000000029D920 string=0x000000000029D924 ""
 *   insn=0x000000000029D924 string=0x000000000029D928 ""
 *   insn=0x000000000029D92C string=0x000000000029D930 ""
 *   insn=0x000000000029D930 string=0x000000000029D934 ""
 *   insn=0x000000000029D940 string=0x000000000029D944 "@"
 *   insn=0x000000000029D944 string=0x000000000029D948 ""
 *   insn=0x000000000029D948 string=0x000000000029D94C ""
 *   insn=0x000000000029D950 string=0x000000000029D954 ""
 *   insn=0x000000000029D954 string=0x000000000029D958 ""
 *   insn=0x000000000029D96C string=0x000000000029D970 "@"
 *   insn=0x000000000029D96C string=0x000000000029D98C "`r@"
 *   insn=0x000000000029D970 string=0x000000000029D974 ""
 *   insn=0x000000000029D974 string=0x000000000029D978 ""
 *   insn=0x000000000029D97C string=0x000000000029D980 ""
 *   insn=0x000000000029D980 string=0x000000000029D984 ""
 *   insn=0x000000000029D990 string=0x000000000029D994 "hj"
 *   insn=0x000000000029D998 string=0x000000000029D99C "@"
 *   insn=0x000000000029D99C string=0x000000000029D9A0 ""
 *   insn=0x000000000029D9A0 string=0x000000000029D9A4 ""
 *   insn=0x000000000029D9A8 string=0x000000000029D9AC ""
 *   insn=0x000000000029D9AC string=0x000000000029D9B0 ""
 *   insn=0x000000000029D9C4 string=0x000000000029D9C8 "a"
 *   insn=0x000000000029D9E0 string=0x000000000029D9E4 "h"
 *   insn=0x000000000029D9E0 string=0x00000000001F4020 "P'"
 *   insn=0x000000000029D9E8 string=0x000000000029D9EC "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkellyMonsterControllerComponent::SkellyMonsterControllerComponent(
        Caver::SkellyMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+28h] [xbp-58h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C26A8;
  *((_QWORD *)&v2 + 1) = &off_6C26E8;
  *((_OWORD *)this + 1) = v2;
  *(_QWORD *)this = off_6C2590;
  *((_QWORD *)this + 26) = &off_6C2728;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BEDF8;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_BYTE *)this + 272) = 1;
  *(_QWORD *)((char *)this + 276) = 2139095039;
  *((_DWORD *)this + 71) = 0;
  *((_BYTE *)this + 292) = 0;
  sub_566BB8((int)v9, "charController");
  Caver::Component::BindOutlet();
  v3 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v5 = (unsigned int *)(v9[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = (*v5)--;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  sub_566BB8((int)v9, "attackArea");
  Caver::Component::BindOutlet();
  v4 = (void *)(v9[0] - 24LL);
  if ( (__int64 *)(v9[0] - 24LL) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v9[0] - 8LL);
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
      operator delete(v4);
  }
}

