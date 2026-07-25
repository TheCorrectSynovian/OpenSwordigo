/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000293DB4
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponentC2Ev
 * Demangled: Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FFB60  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
 *   0x00000000002029E0  Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(void)
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
 * Referenced strings: 90
 *   insn=0x0000000000293DC8 string=0x0000000000293DCC "X"
 *   insn=0x0000000000293DCC string=0x0000000000293DD0 ""
 *   insn=0x0000000000293DD8 string=0x0000000000293DDC "u"
 *   insn=0x0000000000293DDC string=0x00000000001FA3B0 "0'"
 *   insn=0x0000000000293DE0 string=0x0000000000293DE4 "mD"
 *   insn=0x0000000000293DF0 string=0x0000000000293DF4 "\t"
 *   insn=0x0000000000293DF4 string=0x0000000000293DF8 " "
 *   insn=0x0000000000293DF8 string=0x0000000000293DFC "\t"
 *   insn=0x0000000000293DFC string=0x0000000000293E00 " "
 *   insn=0x0000000000293E04 string=0x0000000000293E08 "`"
 *   insn=0x0000000000293E04 string=0x0000000000589078 "E"
 *   insn=0x0000000000293E08 string=0x0000000000293E0C " =@"
 *   insn=0x0000000000293E0C string=0x0000000000293E10 "A"
 *   insn=0x0000000000293E18 string=0x0000000000293E1C "h"
 *   insn=0x0000000000293E40 string=0x0000000000293E44 "`"
 *   insn=0x0000000000293E4C string=0x000000000058784D "jumpAnimation"
 *   insn=0x0000000000293E58 string=0x0000000000293E5C "WK"
 *   insn=0x0000000000293E74 string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000293E88 string=0x0000000000293E8C "A"
 *   insn=0x0000000000293E90 string=0x000000000058786C "fallAnimation"
 *   insn=0x0000000000293E9C string=0x0000000000293EA0 "FK"
 *   insn=0x0000000000293EC8 string=0x0000000000293ECC ""
 *   insn=0x0000000000293ED4 string=0x0000000000293ED8 "!"
 *   insn=0x0000000000293EF4 string=0x0000000000293EF8 ")=G"
 *   insn=0x0000000000293EF8 string=0x0000000000293EFC "!"
 *   insn=0x0000000000293F00 string=0x0000000000293F04 "\t"
 *   insn=0x0000000000293F00 string=0x0000000000293F3C "\t"
 *   insn=0x0000000000293F04 string=0x0000000000293F08 "*"
 *   insn=0x0000000000293F08 string=0x0000000000293F0C "\n"
 *   insn=0x0000000000293F10 string=0x0000000000293F14 ""
 *   insn=0x0000000000293F14 string=0x0000000000293F48 "?"
 *   insn=0x0000000000293F18 string=0x0000000000293F1C ")=G"
 *   insn=0x0000000000293F1C string=0x0000000000293F20 "!"
 *   insn=0x0000000000293F24 string=0x0000000000293F28 "\t"
 *   insn=0x0000000000293F24 string=0x0000000000293F5C "\t"
 *   insn=0x0000000000293F28 string=0x0000000000293F2C "*"
 *   insn=0x0000000000293F2C string=0x0000000000293F30 "\n"
 *   insn=0x0000000000293F38 string=0x0000000000293F68 "?"
 *   insn=0x0000000000293F3C string=0x0000000000293F40 "*"
 *   insn=0x0000000000293F40 string=0x0000000000293F44 "\n"
 *   insn=0x0000000000293F48 string=0x0000000000293F4C ","
 *   insn=0x0000000000293F5C string=0x0000000000293F60 "*"
 *   insn=0x0000000000293F60 string=0x0000000000293F64 "\n"
 *   insn=0x0000000000293F7C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000293F80 string=0x0000000000293F84 "(a"
 *   insn=0x0000000000293F90 string=0x0000000000294040 "`"
 *   insn=0x0000000000293F94 string=0x0000000000293F98 "J=G"
 *   insn=0x0000000000293F98 string=0x0000000000293F9C ")!"
 *   insn=0x0000000000293F9C string=0x0000000000293FA0 "*"
 *   insn=0x0000000000293FA0 string=0x0000000000293FA4 "*"
 *   insn=0x0000000000293FA0 string=0x0000000000294024 "*"
 *   insn=0x0000000000293FA4 string=0x0000000000293FA8 "K"
 *   insn=0x0000000000293FA8 string=0x0000000000293FAC "+"
 *   insn=0x0000000000293FB4 string=0x0000000000294004 "_"
 *   insn=0x0000000000293FB8 string=0x0000000000293FBC "`"
 *   insn=0x0000000000293FBC string=0x0000000000293FC0 "@"
 *   insn=0x0000000000293FC0 string=0x0000000000293FC4 "("
 *   insn=0x0000000000293FC0 string=0x0000000000294048 "@"
 *   insn=0x0000000000293FCC string=0x0000000000293FD0 "J"
 *   insn=0x0000000000293FD4 string=0x0000000000293FD8 "(a"
 *   insn=0x0000000000293FE4 string=0x0000000000293FE8 "J=G"
 *   insn=0x0000000000293FE8 string=0x0000000000293FEC ")!"
 *   insn=0x0000000000293FF0 string=0x0000000000293FF4 "*"
 *   insn=0x0000000000293FF4 string=0x0000000000293FF8 "K"
 *   insn=0x0000000000293FF8 string=0x0000000000293FFC "+"
 *   insn=0x0000000000294014 string=0x0000000000294018 "`"
 *   insn=0x0000000000294018 string=0x000000000029401C "`"
 *   insn=0x0000000000294024 string=0x0000000000294028 "K"
 *   insn=0x0000000000294028 string=0x000000000029402C "+"
 *   insn=0x000000000029402C string=0x0000000000294030 "_"
 *   insn=0x0000000000294048 string=0x000000000029404C ""
 *   insn=0x000000000029404C string=0x0000000000294050 ""
 *   insn=0x0000000000294054 string=0x0000000000294058 ""
 *   insn=0x0000000000294058 string=0x000000000029405C ""
 *   insn=0x0000000000294070 string=0x0000000000294074 "@"
 *   insn=0x0000000000294070 string=0x0000000000294090 "`r@"
 *   insn=0x0000000000294074 string=0x0000000000294078 ""
 *   insn=0x0000000000294078 string=0x000000000029407C ""
 *   insn=0x0000000000294080 string=0x0000000000294084 ""
 *   insn=0x0000000000294084 string=0x0000000000294088 ""
 *   insn=0x0000000000294090 string=0x0000000000294094 "vj"
 *   insn=0x0000000000294098 string=0x000000000029409C "@"
 *   insn=0x000000000029409C string=0x00000000002940A0 ""
 *   insn=0x00000000002940A0 string=0x00000000002940A4 ""
 *   insn=0x00000000002940A8 string=0x00000000002940AC ""
 *   insn=0x00000000002940AC string=0x00000000002940B0 ""
 *   insn=0x00000000002940E0 string=0x00000000002940E4 "h"
 *   insn=0x00000000002940E0 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002940E8 string=0x00000000002940EC "h"
 *   insn=0x00000000002940F0 string=0x00000000002940F4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BouncingMonsterControllerComponent::BouncingMonsterControllerComponent(
        Caver::BouncingMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  void *v4; // x0
  unsigned int *v5; // x8
  int v6; // w9
  unsigned int *v7; // x8
  int v8; // w9
  _QWORD v9[3]; // [xsp+28h] [xbp-48h] BYREF

  v9[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)&v2 = &off_6C1908;
  *((_QWORD *)&v2 + 1) = &off_6C1948;
  *((_OWORD *)this + 1) = v2;
  *(_QWORD *)this = off_6C17F0;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = &off_6BDF68;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_WORD *)this + 140) = 0;
  *((_QWORD *)this + 33) = 0x43E10000457AAB45LL;
  *((_QWORD *)this + 34) = 0;
  sub_566BB8((int)v9, "jumpAnimation");
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
  sub_566BB8((int)v9, "fallAnimation");
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

