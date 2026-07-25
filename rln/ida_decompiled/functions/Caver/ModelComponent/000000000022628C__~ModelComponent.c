/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022628C
 * Mangled: _ZN5Caver14ModelComponentD2Ev
 * Demangled: Caver::ModelComponent::~ModelComponent()
 *
 * Callers: 1
 *   0x00000000001F73D0  Caver::ModelComponent::~ModelComponent()
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F73D0  Caver::ModelComponent::~ModelComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000002021C0  Caver::ModelInstance::~ModelInstance()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000226518  Caver::ModelComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 60
 *   insn=0x000000000022629C string=0x00000000002262A0 "V"
 *   insn=0x00000000002262A4 string=0x00000000002262A8 "\t&"
 *   insn=0x00000000002262A8 string=0x00000000002262AC ")"
 *   insn=0x00000000002262B4 string=0x00000000002262B8 "`J@"
 *   insn=0x00000000002262B8 string=0x00000000002262BC "("
 *   insn=0x00000000002262C0 string=0x00000000002262C4 "("
 *   insn=0x00000000002262C4 string=0x00000000002262C8 "*A"
 *   insn=0x00000000002262CC string=0x00000000002262D0 "j"
 *   insn=0x00000000002262D0 string=0x00000000002262D4 "`"
 *   insn=0x00000000002262D8 string=0x00000000002262DC "@"
 *   insn=0x00000000002262D8 string=0x00000000002262F8 "uF@"
 *   insn=0x00000000002262DC string=0x00000000002262E0 ""
 *   insn=0x00000000002262E0 string=0x00000000002262E4 ""
 *   insn=0x00000000002262E8 string=0x00000000002262EC ""
 *   insn=0x00000000002262EC string=0x00000000002262F0 ""
 *   insn=0x00000000002262FC string=0x0000000000226310 "tB@"
 *   insn=0x000000000022630C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000226310 string=0x0000000000226314 "4"
 *   insn=0x0000000000226314 string=0x0000000000226358 "h:@"
 *   insn=0x0000000000226318 string=0x000000000022631C ""
 *   insn=0x0000000000226328 string=0x000000000022632C "\t@"
 *   insn=0x0000000000226338 string=0x000000000022633C ""
 *   insn=0x0000000000226348 string=0x000000000022634C "@"
 *   insn=0x000000000022635C string=0x0000000000226360 ")"
 *   insn=0x0000000000226370 string=0x0000000000226374 "WP"
 *   insn=0x0000000000226374 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000022639C string=0x00000000002263A0 ")=G"
 *   insn=0x00000000002263A0 string=0x00000000002263A4 "!"
 *   insn=0x00000000002263A8 string=0x00000000002263AC "\t"
 *   insn=0x00000000002263A8 string=0x00000000002263C0 "\t"
 *   insn=0x00000000002263AC string=0x00000000002263B0 "*"
 *   insn=0x00000000002263B0 string=0x00000000002263B4 "\n"
 *   insn=0x00000000002263BC string=0x00000000002263CC "?"
 *   insn=0x00000000002263C0 string=0x00000000002263C4 "*"
 *   insn=0x00000000002263C4 string=0x00000000002263C8 "\n"
 *   insn=0x00000000002263E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002263EC string=0x0000000000226424 "uB@"
 *   insn=0x00000000002263F0 string=0x00000000002263F4 "so"
 *   insn=0x00000000002263F4 string=0x00000000002263F8 "\t"
 *   insn=0x0000000000226414 string=0x000000000022646C "h:@"
 *   insn=0x0000000000226424 string=0x0000000000226428 "5"
 *   insn=0x000000000022642C string=0x0000000000226430 ""
 *   insn=0x000000000022643C string=0x0000000000226440 "\t@"
 *   insn=0x000000000022644C string=0x0000000000226450 ""
 *   insn=0x000000000022645C string=0x0000000000226460 "@"
 *   insn=0x0000000000226470 string=0x0000000000226474 ")"
 *   insn=0x0000000000226484 string=0x0000000000226488 ")=G"
 *   insn=0x0000000000226488 string=0x000000000022648C "!"
 *   insn=0x0000000000226490 string=0x0000000000226494 "\t"
 *   insn=0x0000000000226490 string=0x00000000002264C4 "\t"
 *   insn=0x0000000000226494 string=0x0000000000226498 "*"
 *   insn=0x0000000000226498 string=0x000000000022649C "\n"
 *   insn=0x00000000002264A0 string=0x00000000002264A4 "?"
 *   insn=0x00000000002264A4 string=0x00000000002264A8 "l"
 *   insn=0x00000000002264C4 string=0x00000000002264C8 "*"
 *   insn=0x00000000002264C8 string=0x00000000002264CC "\n"
 *   insn=0x00000000002264CC string=0x00000000002264D0 "?"
 *   insn=0x00000000002264F0 string=0x00000000001F73D0 "0'"
 *   insn=0x00000000002264FC string=0x0000000000226500 "lC"
 *   insn=0x0000000000226508 string=0x000000000022650C "iC"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ModelComponent::~ModelComponent(Caver::ModelComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  void *v5; // x21
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  unsigned int *v11; // x8
  int v12; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 18);
  *(_QWORD *)&v3 = &off_6BA348;
  *((_QWORD *)&v3 + 1) = &off_6BA388;
  *(_QWORD *)this = off_6BA230;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (void *)*((_QWORD *)this + 17);
  if ( v5 )
  {
    Caver::ModelInstance::~ModelInstance(*((Caver::ModelInstance **)this + 17));
    operator delete(v5);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    v7 = v6[1] - 1LL;
    v6[1] = v7;
    if ( !v7 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      v8 = v6[2] - 1LL;
      v6[2] = v8;
      if ( !v8 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    }
  }
  v9 = *((_QWORD *)this + 14);
  v10 = (void *)(v9 - 24);
  if ( (__int64 *)(v9 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v9 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v10);
  }
  Caver::Component::~Component(this);
}

