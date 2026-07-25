/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000292EF0
 * Mangled: _ZN5Caver29BatMonsterControllerComponentC2Ev
 * Demangled: Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F4DC0  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *   0x00000000001FAD90  Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(void)
 *
 * Callees: 11
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 133
 *   insn=0x0000000000292F08 string=0x0000000000292F0C "Y"
 *   insn=0x0000000000292F0C string=0x0000000000292F10 "("
 *   insn=0x0000000000292F18 string=0x0000000000292F1C "%"
 *   insn=0x0000000000292F1C string=0x00000000001FA3B0 "0'"
 *   insn=0x0000000000292F20 string=0x0000000000292F24 "q@"
 *   insn=0x0000000000292F30 string=0x0000000000292F34 "\tA"
 *   insn=0x0000000000292F34 string=0x0000000000292F38 "i"
 *   insn=0x0000000000292F3C string=0x0000000000292F40 "\n"
 *   insn=0x0000000000292F40 string=0x0000000000292F44 "@"
 *   insn=0x0000000000292F44 string=0x0000000000292F48 ""
 *   insn=0x0000000000292F58 string=0x0000000000292F5C "`"
 *   insn=0x0000000000292F84 string=0x0000000000588FB0 "flyAnimation"
 *   insn=0x0000000000292F90 string=0x0000000000292F94 "\tO"
 *   insn=0x0000000000292FA8 string=0x0000000000292FAC "M"
 *   insn=0x0000000000292FAC string=0x00000000001F6CE0 "0'"
 *   insn=0x0000000000292FC0 string=0x0000000000292FC4 "a"
 *   insn=0x0000000000292FC8 string=0x0000000000588FBD "flapSound"
 *   insn=0x0000000000292FEC string=0x0000000000292FF0 "<"
 *   insn=0x0000000000293000 string=0x0000000000293004 "("
 *   insn=0x000000000029300C string=0x0000000000293010 "A"
 *   insn=0x0000000000293030 string=0x0000000000293034 ")=G"
 *   insn=0x0000000000293034 string=0x0000000000293038 "!"
 *   insn=0x000000000029303C string=0x0000000000293040 "\t"
 *   insn=0x000000000029303C string=0x0000000000293078 "\t"
 *   insn=0x0000000000293040 string=0x0000000000293044 "*"
 *   insn=0x0000000000293044 string=0x0000000000293048 "\n"
 *   insn=0x000000000029304C string=0x0000000000293050 ""
 *   insn=0x0000000000293050 string=0x0000000000293084 "?"
 *   insn=0x0000000000293054 string=0x0000000000293058 ")=G"
 *   insn=0x0000000000293058 string=0x000000000029305C "!"
 *   insn=0x0000000000293060 string=0x0000000000293064 "\t"
 *   insn=0x0000000000293060 string=0x0000000000293098 "\t"
 *   insn=0x0000000000293064 string=0x0000000000293068 "*"
 *   insn=0x0000000000293068 string=0x000000000029306C "\n"
 *   insn=0x0000000000293074 string=0x00000000002930A4 "?"
 *   insn=0x0000000000293078 string=0x000000000029307C "*"
 *   insn=0x000000000029307C string=0x0000000000293080 "\n"
 *   insn=0x0000000000293098 string=0x000000000029309C "*"
 *   insn=0x000000000029309C string=0x00000000002930A0 "\n"
 *   insn=0x00000000002930B8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002930BC string=0x00000000002930C0 "(a"
 *   insn=0x00000000002930D0 string=0x00000000002930D4 "J=G"
 *   insn=0x00000000002930D4 string=0x00000000002930D8 ")!"
 *   insn=0x00000000002930DC string=0x00000000002930E0 "*"
 *   insn=0x00000000002930DC string=0x000000000029314C "*"
 *   insn=0x00000000002930E0 string=0x00000000002930E4 "K"
 *   insn=0x00000000002930E4 string=0x00000000002930E8 "+"
 *   insn=0x00000000002930F0 string=0x0000000000293134 "_"
 *   insn=0x00000000002930FC string=0x0000000000293100 "J"
 *   insn=0x0000000000293104 string=0x0000000000293108 "(a"
 *   insn=0x0000000000293114 string=0x0000000000293118 "J=G"
 *   insn=0x0000000000293118 string=0x000000000029311C ")!"
 *   insn=0x000000000029311C string=0x0000000000293120 "j"
 *   insn=0x0000000000293120 string=0x0000000000293124 "*"
 *   insn=0x0000000000293124 string=0x0000000000293128 "K"
 *   insn=0x0000000000293128 string=0x000000000029312C "+"
 *   insn=0x0000000000293144 string=0x0000000000293148 ""
 *   insn=0x000000000029314C string=0x0000000000293150 "K"
 *   insn=0x0000000000293150 string=0x0000000000293154 "+"
 *   insn=0x0000000000293154 string=0x0000000000293158 "_"
 *   insn=0x0000000000293158 string=0x000000000029315C ""
 *   insn=0x0000000000293174 string=0x0000000000293178 "@"
 *   insn=0x0000000000293174 string=0x0000000000293194 "`r@"
 *   insn=0x0000000000293178 string=0x000000000029317C ""
 *   insn=0x000000000029317C string=0x0000000000293180 ""
 *   insn=0x0000000000293184 string=0x0000000000293188 ""
 *   insn=0x0000000000293188 string=0x000000000029318C ""
 *   insn=0x0000000000293198 string=0x000000000029319C "hj"
 *   insn=0x00000000002931A0 string=0x00000000002931A4 "@"
 *   insn=0x00000000002931A4 string=0x00000000002931A8 ""
 *   insn=0x00000000002931A8 string=0x00000000002931AC ""
 *   insn=0x00000000002931B0 string=0x00000000002931B4 ""
 *   insn=0x00000000002931B4 string=0x00000000002931B8 ""
 *   insn=0x00000000002931CC string=0x00000000002931D0 "_"
 *   insn=0x00000000002931E0 string=0x00000000002931E4 ""
 *   insn=0x00000000002931EC string=0x00000000002931F0 ")"
 *   insn=0x00000000002931F0 string=0x00000000002931F4 "`Z@"
 *   insn=0x00000000002931F4 string=0x00000000002931F8 ""
 *   insn=0x00000000002931F8 string=0x00000000002931FC "\nA"
 *   insn=0x00000000002931FC string=0x0000000000293200 ""
 *   insn=0x0000000000293200 string=0x0000000000293204 "`"
 *   insn=0x0000000000293204 string=0x0000000000293208 ")A"
 *   insn=0x000000000029320C string=0x0000000000293210 "j"
 *   insn=0x0000000000293210 string=0x0000000000293214 "`"
 *   insn=0x0000000000293214 string=0x0000000000293218 "iR"
 *   insn=0x000000000029321C string=0x0000000000293220 "@"
 *   insn=0x0000000000293220 string=0x0000000000293224 ""
 *   insn=0x0000000000293224 string=0x0000000000293228 ""
 *   insn=0x000000000029322C string=0x0000000000293230 ""
 *   insn=0x0000000000293230 string=0x0000000000293234 ""
 *   insn=0x000000000029323C string=0x0000000000293240 "`N@"
 *   insn=0x0000000000293240 string=0x0000000000293244 ""
 *   insn=0x0000000000293244 string=0x0000000000293248 "A"
 *   insn=0x0000000000293248 string=0x000000000029324C "hF"
 *   insn=0x0000000000293250 string=0x0000000000293254 "@"
 *   insn=0x0000000000293254 string=0x0000000000293258 ""
 *   insn=0x0000000000293258 string=0x000000000029325C ""
 *   insn=0x0000000000293260 string=0x0000000000293264 ""
 *   insn=0x0000000000293264 string=0x0000000000293268 ""
 *   insn=0x0000000000293270 string=0x0000000000293274 "`B@"
 *   insn=0x0000000000293274 string=0x0000000000293278 ""
 *   insn=0x0000000000293278 string=0x000000000029327C "A"
 *   insn=0x000000000029327C string=0x0000000000293280 "h:"
 *   insn=0x0000000000293284 string=0x0000000000293288 "@"
 *   insn=0x0000000000293288 string=0x000000000029328C ""
 *   insn=0x000000000029328C string=0x0000000000293290 ""
 *   insn=0x0000000000293294 string=0x0000000000293298 ""
 *   insn=0x0000000000293298 string=0x000000000029329C ""
 *   insn=0x00000000002932B0 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002932C8 string=0x00000000002932CC "`N@"
 *   insn=0x00000000002932CC string=0x00000000002932D0 ""
 *   insn=0x00000000002932D0 string=0x00000000002932D4 "A"
 *   insn=0x00000000002932D4 string=0x00000000002932D8 "hF"
 *   insn=0x00000000002932DC string=0x00000000002932E0 "@"
 *   insn=0x00000000002932E0 string=0x00000000002932E4 ""
 *   insn=0x00000000002932E4 string=0x00000000002932E8 ""
 *   insn=0x00000000002932EC string=0x00000000002932F0 ""
 *   insn=0x00000000002932F0 string=0x00000000002932F4 ""
 *   insn=0x00000000002932FC string=0x0000000000293300 "`B@"
 *   insn=0x0000000000293300 string=0x0000000000293304 ""
 *   insn=0x0000000000293304 string=0x0000000000293308 "A"
 *   insn=0x0000000000293308 string=0x000000000029330C "h:"
 *   insn=0x0000000000293310 string=0x0000000000293314 "@"
 *   insn=0x0000000000293314 string=0x0000000000293318 ""
 *   insn=0x0000000000293318 string=0x000000000029331C ""
 *   insn=0x0000000000293320 string=0x0000000000293324 ""
 *   insn=0x0000000000293324 string=0x0000000000293328 ""
 *   insn=0x0000000000293330 string=0x0000000000293334 "g"
 *   insn=0x0000000000293338 string=0x000000000029333C "b"
 *   insn=0x0000000000293354 string=0x0000000000293358 "2"
 *   insn=0x0000000000293358 string=0x000000000029335C "h"
 *   insn=0x0000000000293358 string=0x00000000001F4020 "P'"
 *   insn=0x0000000000293360 string=0x0000000000293364 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BatMonsterControllerComponent::BatMonsterControllerComponent(
        Caver::BatMonsterControllerComponent *this)
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
  *(_QWORD *)this = off_6C15B0;
  *(_QWORD *)&v2 = &off_6C16C8;
  *((_QWORD *)&v2 + 1) = &off_6C1708;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_DWORD *)this + 54) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = off_6BE248;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  sub_566BB8((int)v9, "flyAnimation");
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
  sub_566BB8((int)v9, "flapSound");
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

