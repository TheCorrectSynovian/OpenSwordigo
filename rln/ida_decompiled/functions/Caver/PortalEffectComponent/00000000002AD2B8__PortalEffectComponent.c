/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AD2B8
 * Mangled: _ZN5Caver21PortalEffectComponentC2Ev
 * Demangled: Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Callers: 2
 *   0x00000000001FA430  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *   0x00000000001FFAE0  Caver::PortalEffectComponent::PortalEffectComponent(void)
 *
 * Callees: 11
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCFB0  Caver::GlowComponent::GlowComponent(void)
 *   0x00000000002032E0  Caver::GlowComponent::InitWithComponent(Caver::GlowComponent const*)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000002AD2CC string=0x00000000002AD2D0 "X"
 *   insn=0x00000000002AD2D0 string=0x00000000002AD2D4 ""
 *   insn=0x00000000002AD2DC string=0x00000000002AD2E0 "4?"
 *   insn=0x00000000002AD2E0 string=0x00000000001FCFB0 "0'"
 *   insn=0x00000000002AD2E4 string=0x00000000002AD2E8 "aG"
 *   insn=0x00000000002AD2F8 string=0x00000000002AD2FC "\t"
 *   insn=0x00000000002AD2FC string=0x00000000002AD300 " "
 *   insn=0x00000000002AD300 string=0x00000000002AD304 "\t"
 *   insn=0x00000000002AD304 string=0x00000000002AD308 "A"
 *   insn=0x00000000002AD30C string=0x00000000002AD310 " "
 *   insn=0x00000000002AD310 string=0x00000000002AD314 "h"
 *   insn=0x00000000002AD31C string=0x00000000002AD320 "`"
 *   insn=0x00000000002AD340 string=0x00000000002AD344 "`"
 *   insn=0x00000000002AD35C string=0x00000000005847F1 "polygon"
 *   insn=0x00000000002AD380 string=0x00000000002AD384 "W&"
 *   insn=0x00000000002AD384 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002AD398 string=0x00000000002AD39C "A"
 *   insn=0x00000000002AD3A0 string=0x0000000000589978 "textureMapping"
 *   insn=0x00000000002AD3C4 string=0x00000000002AD3C8 "F&"
 *   insn=0x00000000002AD3D8 string=0x00000000002AD3DC ""
 *   insn=0x00000000002AD3E4 string=0x00000000002AD3E8 "!"
 *   insn=0x00000000002AD404 string=0x00000000002AD408 ")=G"
 *   insn=0x00000000002AD408 string=0x00000000002AD40C "!"
 *   insn=0x00000000002AD410 string=0x00000000002AD414 "\t"
 *   insn=0x00000000002AD410 string=0x00000000002AD44C "\t"
 *   insn=0x00000000002AD414 string=0x00000000002AD418 "*"
 *   insn=0x00000000002AD418 string=0x00000000002AD41C "\n"
 *   insn=0x00000000002AD420 string=0x00000000002AD424 ""
 *   insn=0x00000000002AD424 string=0x00000000002AD458 "?"
 *   insn=0x00000000002AD428 string=0x00000000002AD42C ")=G"
 *   insn=0x00000000002AD42C string=0x00000000002AD430 "!"
 *   insn=0x00000000002AD434 string=0x00000000002AD438 "\t"
 *   insn=0x00000000002AD434 string=0x00000000002AD46C "\t"
 *   insn=0x00000000002AD438 string=0x00000000002AD43C "*"
 *   insn=0x00000000002AD43C string=0x00000000002AD440 "\n"
 *   insn=0x00000000002AD448 string=0x00000000002AD478 "?"
 *   insn=0x00000000002AD44C string=0x00000000002AD450 "*"
 *   insn=0x00000000002AD450 string=0x00000000002AD454 "\n"
 *   insn=0x00000000002AD458 string=0x00000000002AD45C ","
 *   insn=0x00000000002AD46C string=0x00000000002AD470 "*"
 *   insn=0x00000000002AD470 string=0x00000000002AD474 "\n"
 *   insn=0x00000000002AD48C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002AD494 string=0x00000000002AD498 "(a"
 *   insn=0x00000000002AD4A0 string=0x00000000002AD550 "`z@"
 *   insn=0x00000000002AD4A4 string=0x00000000002AD4A8 "J=G"
 *   insn=0x00000000002AD4A8 string=0x00000000002AD4AC ")!"
 *   insn=0x00000000002AD4AC string=0x00000000002AD4B0 "*"
 *   insn=0x00000000002AD4B0 string=0x00000000002AD4B4 "*"
 *   insn=0x00000000002AD4B0 string=0x00000000002AD534 "*"
 *   insn=0x00000000002AD4B4 string=0x00000000002AD4B8 "K"
 *   insn=0x00000000002AD4B8 string=0x00000000002AD4BC "+"
 *   insn=0x00000000002AD4C4 string=0x00000000002AD514 "_"
 *   insn=0x00000000002AD4C8 string=0x00000000002AD4CC "`z@"
 *   insn=0x00000000002AD4CC string=0x00000000002AD4D0 "@"
 *   insn=0x00000000002AD4D0 string=0x00000000002AD4D4 """
 *   insn=0x00000000002AD4D4 string=0x00000000002AD55C "`r@"
 *   insn=0x00000000002AD4DC string=0x00000000002AD4E0 "J"
 *   insn=0x00000000002AD4E4 string=0x00000000002AD4E8 "(a"
 *   insn=0x00000000002AD4F4 string=0x00000000002AD4F8 "J=G"
 *   insn=0x00000000002AD4F8 string=0x00000000002AD4FC ")!"
 *   insn=0x00000000002AD500 string=0x00000000002AD504 "*"
 *   insn=0x00000000002AD504 string=0x00000000002AD508 "K"
 *   insn=0x00000000002AD508 string=0x00000000002AD50C "+"
 *   insn=0x00000000002AD524 string=0x00000000002AD528 "`z@"
 *   insn=0x00000000002AD528 string=0x00000000002AD52C "`"
 *   insn=0x00000000002AD52C string=0x00000000002AD530 ""
 *   insn=0x00000000002AD534 string=0x00000000002AD538 "K"
 *   insn=0x00000000002AD538 string=0x00000000002AD53C "+"
 *   insn=0x00000000002AD53C string=0x00000000002AD540 "_"
 *   insn=0x00000000002AD550 string=0x00000000002AD554 "@"
 *   insn=0x00000000002AD558 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AD55C string=0x00000000002AD560 "@"
 *   insn=0x00000000002AD560 string=0x00000000002AD568 "`Z@"
 *   insn=0x00000000002AD56C string=0x00000000002AD570 "hR"
 *   insn=0x00000000002AD574 string=0x00000000002AD578 "@"
 *   insn=0x00000000002AD574 string=0x00000000002AD594 "`N@"
 *   insn=0x00000000002AD578 string=0x00000000002AD57C ""
 *   insn=0x00000000002AD57C string=0x00000000002AD580 ""
 *   insn=0x00000000002AD584 string=0x00000000002AD588 ""
 *   insn=0x00000000002AD588 string=0x00000000002AD58C ""
 *   insn=0x00000000002AD598 string=0x00000000002AD59C "hF"
 *   insn=0x00000000002AD5A0 string=0x00000000002AD5A4 "@"
 *   insn=0x00000000002AD5A4 string=0x00000000002AD5A8 ""
 *   insn=0x00000000002AD5A8 string=0x00000000002AD5AC ""
 *   insn=0x00000000002AD5B0 string=0x00000000002AD5B4 ""
 *   insn=0x00000000002AD5B4 string=0x00000000002AD5B8 ""
 *   insn=0x00000000002AD5C4 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002AD5CC string=0x00000000002AD5D0 "_"
 *   insn=0x00000000002AD5E4 string=0x00000000002AD5E8 ">W"
 *   insn=0x00000000002AD5E8 string=0x00000000002AD5EC "h"
 *   insn=0x00000000002AD5F0 string=0x00000000002AD5F4 "h"
 *   insn=0x00000000002AD5F8 string=0x00000000002AD5FC "`"
 *   insn=0x00000000002AD600 string=0x00000000002AD604 "hf@"
 *   insn=0x00000000002AD608 string=0x00000000002AD60C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::PortalEffectComponent(Caver::PortalEffectComponent *this)
{
  __int128 v2; // q0
  void *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  _QWORD v14[3]; // [xsp+28h] [xbp-48h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GlowComponent::GlowComponent(this);
  *(_QWORD *)&v2 = &off_6C3C58;
  *((_QWORD *)&v2 + 1) = &off_6C3C98;
  *(_QWORD *)this = off_6C3B30;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 17) = off_6C3D28;
  __asm { FMOV            V0.4S, #1.0 }
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = off_6C3CD8;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0;
  *(_OWORD *)((char *)this + 184) = _Q0;
  *((_QWORD *)this + 25) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 27) = 0;
  sub_566BB8((int)v14, "polygon");
  Caver::Component::BindOutlet();
  v8 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v8);
  }
  sub_566BB8((int)v14, "textureMapping");
  Caver::Component::BindOutlet();
  v9 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v14[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v9);
  }
}

