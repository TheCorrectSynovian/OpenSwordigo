/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282208
 * Mangled: _ZN5Caver19FireBreathComponentC2Ev
 * Demangled: Caver::FireBreathComponent::FireBreathComponent(void)
 *
 * Callers: 2
 *   0x00000000001F5E20  Caver::FireBreathComponent::FireBreathComponent(void)
 *   0x00000000001FFBF0  Caver::FireBreathComponent::FireBreathComponent(void)
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001F8740  Caver::SpellComponent::SpellComponent(void)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000282584  Caver::FireBreathComponent::InitWithComponent(Caver::FireBreathComponent const*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 111
 *   insn=0x000000000028221C string=0x0000000000282220 "X"
 *   insn=0x0000000000282220 string=0x0000000000282224 ""
 *   insn=0x000000000028222C string=0x0000000000282230 "D"
 *   insn=0x0000000000282230 string=0x0000000000282234 "#"
 *   insn=0x0000000000282230 string=0x00000000001F8740 "0'"
 *   insn=0x0000000000282234 string=0x0000000000282238 ""
 *   insn=0x0000000000282238 string=0x000000000028223C "6#"
 *   insn=0x0000000000282248 string=0x000000000028224C "\t!"
 *   insn=0x000000000028224C string=0x0000000000282250 " "
 *   insn=0x0000000000282250 string=0x0000000000282254 "\t!"
 *   insn=0x0000000000282254 string=0x0000000000282258 "A"
 *   insn=0x000000000028225C string=0x0000000000282260 " "
 *   insn=0x0000000000282260 string=0x0000000000282264 "h"
 *   insn=0x000000000028226C string=0x0000000000282270 "`"
 *   insn=0x0000000000282290 string=0x0000000000282294 "`>"
 *   insn=0x0000000000282298 string=0x000000000028229C "!"
 *   insn=0x000000000028229C string=0x0000000000588A18 "particleEmitter"
 *   insn=0x00000000002822A8 string=0x00000000002822AC "C"
 *   insn=0x00000000002822C4 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002822D8 string=0x00000000002822DC "A"
 *   insn=0x00000000002822DC string=0x00000000002822E0 "!"
 *   insn=0x00000000002822DC string=0x0000000000282344 "\t#"
 *   insn=0x00000000002822E0 string=0x0000000000588A28 "swooshSound"
 *   insn=0x00000000002822EC string=0x00000000002822F0 "2"
 *   insn=0x0000000000282304 string=0x0000000000282308 "v"
 *   insn=0x0000000000282318 string=0x000000000028231C ""
 *   insn=0x0000000000282318 string=0x0000000000282368 "\t#"
 *   insn=0x0000000000282324 string=0x0000000000282328 "!"
 *   insn=0x0000000000282344 string=0x0000000000282348 ")=G"
 *   insn=0x0000000000282348 string=0x000000000028234C "!"
 *   insn=0x0000000000282350 string=0x0000000000282354 "\t"
 *   insn=0x0000000000282350 string=0x000000000028238C "\t"
 *   insn=0x0000000000282354 string=0x0000000000282358 "*"
 *   insn=0x0000000000282358 string=0x000000000028235C "\n"
 *   insn=0x0000000000282360 string=0x0000000000282364 ""
 *   insn=0x0000000000282364 string=0x0000000000282398 "?"
 *   insn=0x0000000000282368 string=0x000000000028236C ")=G"
 *   insn=0x000000000028236C string=0x0000000000282370 "!"
 *   insn=0x0000000000282374 string=0x0000000000282378 "\t"
 *   insn=0x0000000000282374 string=0x00000000002823AC "\t"
 *   insn=0x0000000000282378 string=0x000000000028237C "*"
 *   insn=0x000000000028237C string=0x0000000000282380 "\n"
 *   insn=0x0000000000282388 string=0x00000000002823B8 "?"
 *   insn=0x000000000028238C string=0x0000000000282390 "*"
 *   insn=0x0000000000282390 string=0x0000000000282394 "\n"
 *   insn=0x0000000000282398 string=0x000000000028239C ","
 *   insn=0x00000000002823AC string=0x00000000002823B0 "*"
 *   insn=0x00000000002823B0 string=0x00000000002823B4 "\n"
 *   insn=0x00000000002823CC string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002823D4 string=0x00000000002823D8 "(a"
 *   insn=0x00000000002823E0 string=0x00000000002823E4 "\n#"
 *   insn=0x00000000002823E0 string=0x000000000028247C "`v@"
 *   insn=0x00000000002823E4 string=0x00000000002823E8 "J=G"
 *   insn=0x00000000002823E8 string=0x00000000002823EC ")!"
 *   insn=0x00000000002823F0 string=0x00000000002823F4 "*"
 *   insn=0x00000000002823F0 string=0x0000000000282460 "*"
 *   insn=0x00000000002823F4 string=0x00000000002823F8 "K"
 *   insn=0x00000000002823F8 string=0x00000000002823FC "+"
 *   insn=0x0000000000282404 string=0x0000000000282448 "_"
 *   insn=0x000000000028240C string=0x0000000000282410 "\n#"
 *   insn=0x0000000000282410 string=0x0000000000282414 "J"
 *   insn=0x0000000000282418 string=0x000000000028241C "(a"
 *   insn=0x0000000000282424 string=0x0000000000282428 "\n#"
 *   insn=0x0000000000282428 string=0x000000000028242C "J=G"
 *   insn=0x000000000028242C string=0x0000000000282430 ")!"
 *   insn=0x0000000000282430 string=0x0000000000282434 "j"
 *   insn=0x0000000000282434 string=0x0000000000282438 "*"
 *   insn=0x0000000000282438 string=0x000000000028243C "K"
 *   insn=0x000000000028243C string=0x0000000000282440 "+"
 *   insn=0x0000000000282458 string=0x000000000028245C ""
 *   insn=0x0000000000282460 string=0x0000000000282464 "K"
 *   insn=0x0000000000282464 string=0x0000000000282468 "+"
 *   insn=0x0000000000282468 string=0x000000000028246C "_"
 *   insn=0x000000000028246C string=0x0000000000282470 ""
 *   insn=0x0000000000282480 string=0x0000000000282484 "hn"
 *   insn=0x0000000000282488 string=0x000000000028248C "@"
 *   insn=0x0000000000282488 string=0x00000000002824A8 "`j@"
 *   insn=0x000000000028248C string=0x0000000000282490 ""
 *   insn=0x0000000000282490 string=0x0000000000282494 ""
 *   insn=0x0000000000282498 string=0x000000000028249C ""
 *   insn=0x000000000028249C string=0x00000000002824A0 ""
 *   insn=0x00000000002824AC string=0x00000000002824B0 "hb"
 *   insn=0x00000000002824B4 string=0x00000000002824B8 "@"
 *   insn=0x00000000002824B4 string=0x00000000002824D4 "#"
 *   insn=0x00000000002824B8 string=0x00000000002824BC ""
 *   insn=0x00000000002824BC string=0x00000000002824C0 ""
 *   insn=0x00000000002824C4 string=0x00000000002824C8 ""
 *   insn=0x00000000002824C8 string=0x00000000002824CC ""
 *   insn=0x00000000002824D4 string=0x00000000002824D8 "5D"
 *   insn=0x00000000002824D8 string=0x00000000002824DC "`B"
 *   insn=0x00000000002824DC string=0x00000000002824E0 "\n!"
 *   insn=0x00000000002824E0 string=0x00000000002824E4 "\tA"
 *   insn=0x00000000002824E4 string=0x00000000002824E8 "!"
 *   insn=0x00000000002824E8 string=0x00000000002824EC "@"
 *   insn=0x00000000002824F0 string=0x00000000002824F4 "i"
 *   insn=0x00000000002824F4 string=0x00000000002824F8 "`"
 *   insn=0x00000000002824FC string=0x0000000000282500 "`:@"
 *   insn=0x0000000000282504 string=0x0000000000282508 "@"
 *   insn=0x0000000000282508 string=0x000000000028250C ""
 *   insn=0x000000000028250C string=0x0000000000282510 ""
 *   insn=0x0000000000282514 string=0x0000000000282518 ""
 *   insn=0x0000000000282518 string=0x000000000028251C ""
 *   insn=0x0000000000282528 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000282540 string=0x0000000000282544 "("
 *   insn=0x0000000000282544 string=0x0000000000282548 "\t\t@"
 *   insn=0x0000000000282548 string=0x000000000028254C ")"
 *   insn=0x000000000028254C string=0x0000000000282550 "\t\t"
 *   insn=0x0000000000282554 string=0x0000000000282558 "\t"
 *   insn=0x0000000000282558 string=0x000000000028255C ")"
 *   insn=0x0000000000282560 string=0x0000000000282564 " "
 *   insn=0x000000000028257C string=0x0000000000282580 "s/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireBreathComponent::FireBreathComponent(Caver::FireBreathComponent *this)
{
  __int128 v2; // q0
  void *v8; // x0
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  _QWORD v14[3]; // [xsp+8h] [xbp-48h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::SpellComponent::SpellComponent(this);
  *(_QWORD *)&v2 = &off_6C01E8;
  *((_QWORD *)&v2 + 1) = &off_6C0228;
  *(_QWORD *)this = off_6C00B0;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 24) = off_6C0268;
  __asm { FMOV            V0.4S, #1.0 }
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 27) = off_6BE248;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_OWORD *)this + 15) = _Q0;
  *((_DWORD *)this + 64) = 0;
  sub_566BB8((int)v14, "particleEmitter");
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
  sub_566BB8((int)v14, "swooshSound");
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

