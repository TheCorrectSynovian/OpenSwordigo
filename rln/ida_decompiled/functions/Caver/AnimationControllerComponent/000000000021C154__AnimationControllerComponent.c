/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021C154
 * Mangled: _ZN5Caver28AnimationControllerComponentC2Ev
 * Demangled: Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001F50B0  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *   0x00000000002037D0  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 107
 *   insn=0x000000000021C16C string=0x000000000021C170 "Y"
 *   insn=0x000000000021C170 string=0x000000000021C174 "Z&"
 *   insn=0x000000000021C174 string=0x000000000021C178 "I&"
 *   insn=0x000000000021C178 string=0x000000000021C17C "Z"
 *   insn=0x000000000021C17C string=0x000000000021C180 ")eG"
 *   insn=0x000000000021C180 string=0x000000000021C184 "*"
 *   insn=0x000000000021C184 string=0x000000000021C188 "V&"
 *   insn=0x000000000021C194 string=0x000000000021C198 "Jc"
 *   insn=0x000000000021C198 string=0x000000000021C19C "j"
 *   insn=0x000000000021C19C string=0x000000000021C1A0 "W&"
 *   insn=0x000000000021C1A8 string=0x000000000021C1AC "+"
 *   insn=0x000000000021C1AC string=0x000000000021C1B0 "`"
 *   insn=0x000000000021C1B0 string=0x000000000021C1B4 "+"
 *   insn=0x000000000021C1C4 string=0x000000000021C1C8 "`"
 *   insn=0x000000000021C1CC string=0x000000000021C1D0 ")A"
 *   insn=0x000000000021C1D0 string=0x000000000021C1D4 "h"
 *   insn=0x000000000021C1D8 string=0x000000000021C1DC "i"
 *   insn=0x000000000021C1E8 string=0x000000000021C1EC "`"
 *   insn=0x000000000021C218 string=0x000000000021C21C "!"
 *   insn=0x000000000021C21C string=0x0000000000583C3C "model"
 *   insn=0x000000000021C228 string=0x000000000021C22C "c*"
 *   insn=0x000000000021C244 string=0x00000000001F6CE0 "0'"
 *   insn=0x000000000021C250 string=0x000000000021C254 "a"
 *   insn=0x000000000021C254 string=0x000000000021C258 "!"
 *   insn=0x000000000021C254 string=0x000000000021C2C0 "I&"
 *   insn=0x000000000021C258 string=0x0000000000583C42 "defaultAnimation"
 *   insn=0x000000000021C264 string=0x000000000021C268 "T*"
 *   insn=0x000000000021C290 string=0x000000000021C294 "("
 *   insn=0x000000000021C290 string=0x000000000021C2E4 "I&"
 *   insn=0x000000000021C29C string=0x000000000021C2A0 "A"
 *   insn=0x000000000021C2C0 string=0x000000000021C2C4 ")=G"
 *   insn=0x000000000021C2C4 string=0x000000000021C2C8 "!"
 *   insn=0x000000000021C2CC string=0x000000000021C2D0 "\t"
 *   insn=0x000000000021C2CC string=0x000000000021C308 "\t"
 *   insn=0x000000000021C2D0 string=0x000000000021C2D4 "*"
 *   insn=0x000000000021C2D4 string=0x000000000021C2D8 "\n"
 *   insn=0x000000000021C2DC string=0x000000000021C2E0 ""
 *   insn=0x000000000021C2E0 string=0x000000000021C314 "?"
 *   insn=0x000000000021C2E4 string=0x000000000021C2E8 ")=G"
 *   insn=0x000000000021C2E8 string=0x000000000021C2EC "!"
 *   insn=0x000000000021C2F0 string=0x000000000021C2F4 "\t"
 *   insn=0x000000000021C2F0 string=0x000000000021C328 "\t"
 *   insn=0x000000000021C2F4 string=0x000000000021C2F8 "*"
 *   insn=0x000000000021C2F8 string=0x000000000021C2FC "\n"
 *   insn=0x000000000021C304 string=0x000000000021C334 "?"
 *   insn=0x000000000021C308 string=0x000000000021C30C "*"
 *   insn=0x000000000021C30C string=0x000000000021C310 "\n"
 *   insn=0x000000000021C31C string=0x000000000021C320 "!8"
 *   insn=0x000000000021C328 string=0x000000000021C32C "*"
 *   insn=0x000000000021C32C string=0x000000000021C330 "\n"
 *   insn=0x000000000021C348 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000021C350 string=0x000000000021C354 "(a"
 *   insn=0x000000000021C358 string=0x000000000021C35C "@"
 *   insn=0x000000000021C35C string=0x000000000021C360 "J&"
 *   insn=0x000000000021C35C string=0x000000000021C404 "`Z@"
 *   insn=0x000000000021C360 string=0x000000000021C364 "J=G"
 *   insn=0x000000000021C364 string=0x000000000021C368 ")!"
 *   insn=0x000000000021C36C string=0x000000000021C370 "*"
 *   insn=0x000000000021C36C string=0x000000000021C3E8 "*"
 *   insn=0x000000000021C370 string=0x000000000021C374 "K"
 *   insn=0x000000000021C374 string=0x000000000021C378 "+"
 *   insn=0x000000000021C380 string=0x000000000021C3C8 "_"
 *   insn=0x000000000021C384 string=0x000000000021C388 "`Z@"
 *   insn=0x000000000021C38C string=0x000000000021C390 "&"
 *   insn=0x000000000021C38C string=0x000000000021C40C "@"
 *   insn=0x000000000021C390 string=0x000000000021C428 "`R@"
 *   insn=0x000000000021C398 string=0x000000000021C39C "(a"
 *   insn=0x000000000021C3A4 string=0x000000000021C3A8 "J&"
 *   insn=0x000000000021C3A8 string=0x000000000021C3AC "J=G"
 *   insn=0x000000000021C3AC string=0x000000000021C3B0 ")!"
 *   insn=0x000000000021C3B4 string=0x000000000021C3B8 "*"
 *   insn=0x000000000021C3B8 string=0x000000000021C3BC "K"
 *   insn=0x000000000021C3BC string=0x000000000021C3C0 "+"
 *   insn=0x000000000021C3D8 string=0x000000000021C3DC "`Z@"
 *   insn=0x000000000021C3DC string=0x000000000021C3E0 "`"
 *   insn=0x000000000021C3E8 string=0x000000000021C3EC "K"
 *   insn=0x000000000021C3EC string=0x000000000021C3F0 "+"
 *   insn=0x000000000021C3F0 string=0x000000000021C3F4 "_"
 *   insn=0x000000000021C40C string=0x000000000021C410 ""
 *   insn=0x000000000021C410 string=0x000000000021C414 ""
 *   insn=0x000000000021C418 string=0x000000000021C41C ""
 *   insn=0x000000000021C41C string=0x000000000021C420 ""
 *   insn=0x000000000021C42C string=0x000000000021C430 "@"
 *   insn=0x000000000021C430 string=0x000000000021C434 ""
 *   insn=0x000000000021C434 string=0x000000000021C438 ""
 *   insn=0x000000000021C43C string=0x000000000021C440 ""
 *   insn=0x000000000021C440 string=0x000000000021C444 ""
 *   insn=0x000000000021C458 string=0x000000000021C45C "@"
 *   insn=0x000000000021C458 string=0x000000000021C478 "`B@"
 *   insn=0x000000000021C45C string=0x000000000021C460 ""
 *   insn=0x000000000021C460 string=0x000000000021C464 ""
 *   insn=0x000000000021C468 string=0x000000000021C46C ""
 *   insn=0x000000000021C46C string=0x000000000021C470 ""
 *   insn=0x000000000021C47C string=0x000000000021C480 "h:"
 *   insn=0x000000000021C484 string=0x000000000021C488 "@"
 *   insn=0x000000000021C488 string=0x000000000021C48C ""
 *   insn=0x000000000021C48C string=0x000000000021C490 ""
 *   insn=0x000000000021C494 string=0x000000000021C498 ""
 *   insn=0x000000000021C498 string=0x000000000021C49C ""
 *   insn=0x000000000021C4A4 string=0x000000000021C4A8 "\nx"
 *   insn=0x000000000021C4A8 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000021C4C4 string=0x000000000021C4C8 "h"@"
 *   insn=0x000000000021C4CC string=0x000000000021C4D0 "a"
 *   insn=0x000000000021C4D8 string=0x000000000021C4DC "s8"
 *   insn=0x000000000021C4DC string=0x000000000021C4E0 "hz@"
 *   insn=0x000000000021C4E4 string=0x000000000021C4E8 "h"
 *   insn=0x000000000021C4EC string=0x000000000021C4F0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::AnimationControllerComponent::AnimationControllerComponent(
        Caver::AnimationControllerComponent *this)
{
  __int128 v1; // q0
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+28h] [xbp-58h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *((_QWORD *)this + 7) = &byte_6FD2F8;
  *(_QWORD *)&v1 = &off_6B99A0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_BYTE *)this + 48) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)&v1 + 1) = &off_6B99E0;
  *((_QWORD *)this + 11) = (char *)this + 72;
  *((_QWORD *)this + 12) = (char *)this + 72;
  *(_QWORD *)this = off_6B9880;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_OWORD *)this + 1) = v1;
  *((_QWORD *)this + 14) = off_6B9438;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = &off_6B9A48;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_QWORD *)this + 20) = 0;
  sub_566BB8((int)v8, "model");
  Caver::Component::BindOutlet();
  v2 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(v8[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v2);
  }
  sub_566BB8((int)v8, "defaultAnimation");
  Caver::Component::BindOutlet();
  v3 = (void *)(v8[0] - 24LL);
  if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(v8[0] - 8LL);
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
      operator delete(v3);
  }
}

