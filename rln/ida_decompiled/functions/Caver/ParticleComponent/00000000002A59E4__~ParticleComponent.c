/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A59E4
 * Mangled: _ZN5Caver17ParticleComponentD2Ev
 * Demangled: Caver::ParticleComponent::~ParticleComponent()
 *
 * Callers: 1
 *   0x00000000001F7EF0  Caver::ParticleComponent::~ParticleComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7EF0  Caver::ParticleComponent::~ParticleComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A5B88  Caver::ParticleComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 50
 *   insn=0x00000000002A59F0 string=0x00000000002A59F4 "T"
 *   insn=0x00000000002A59F8 string=0x00000000002A59FC "\t""
 *   insn=0x00000000002A59FC string=0x00000000002A5A00 "))D"
 *   insn=0x00000000002A5A08 string=0x00000000002A5A0C "`>@"
 *   insn=0x00000000002A5A0C string=0x00000000002A5A10 "("
 *   insn=0x00000000002A5A14 string=0x00000000002A5A18 "("
 *   insn=0x00000000002A5A18 string=0x00000000002A5A1C "*A"
 *   insn=0x00000000002A5A20 string=0x00000000002A5A24 "j"
 *   insn=0x00000000002A5A24 string=0x00000000002A5A28 "`"
 *   insn=0x00000000002A5A2C string=0x00000000002A5A30 "@"
 *   insn=0x00000000002A5A2C string=0x00000000002A5A4C "h:@"
 *   insn=0x00000000002A5A30 string=0x00000000002A5A34 ""
 *   insn=0x00000000002A5A34 string=0x00000000002A5A38 ""
 *   insn=0x00000000002A5A3C string=0x00000000002A5A40 ""
 *   insn=0x00000000002A5A40 string=0x00000000002A5A44 ""
 *   insn=0x00000000002A5A4C string=0x00000000002A5A50 "\t""
 *   insn=0x00000000002A5A50 string=0x00000000002A5A54 ")"
 *   insn=0x00000000002A5A5C string=0x00000000002A5A60 "a"
 *   insn=0x00000000002A5A68 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002A5A8C string=0x00000000002A5A90 ")=G"
 *   insn=0x00000000002A5A90 string=0x00000000002A5A94 "!"
 *   insn=0x00000000002A5A98 string=0x00000000002A5A9C "\t"
 *   insn=0x00000000002A5A98 string=0x00000000002A5AB0 "\t"
 *   insn=0x00000000002A5A9C string=0x00000000002A5AA0 "*"
 *   insn=0x00000000002A5AA0 string=0x00000000002A5AA4 "\n"
 *   insn=0x00000000002A5AAC string=0x00000000002A5ABC "?"
 *   insn=0x00000000002A5AB0 string=0x00000000002A5AB4 "*"
 *   insn=0x00000000002A5AB4 string=0x00000000002A5AB8 "\n"
 *   insn=0x00000000002A5ABC string=0x00000000002A5AC0 ","
 *   insn=0x00000000002A5AC4 string=0x00000000002A5AC8 "7"
 *   insn=0x00000000002A5AD0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A5AD4 string=0x00000000002A5AD8 "\n""
 *   insn=0x00000000002A5AD8 string=0x00000000002A5ADC "J"
 *   insn=0x00000000002A5AE0 string=0x00000000002A5AE4 "(a"
 *   insn=0x00000000002A5AF0 string=0x00000000002A5AF4 "J=G"
 *   insn=0x00000000002A5AF4 string=0x00000000002A5AF8 ")!"
 *   insn=0x00000000002A5AFC string=0x00000000002A5B00 "*"
 *   insn=0x00000000002A5AFC string=0x00000000002A5B34 "*"
 *   insn=0x00000000002A5B00 string=0x00000000002A5B04 "K"
 *   insn=0x00000000002A5B04 string=0x00000000002A5B08 "+"
 *   insn=0x00000000002A5B0C string=0x00000000002A5B10 "_"
 *   insn=0x00000000002A5B1C string=0x00000000002A5B20 "!"
 *   insn=0x00000000002A5B24 string=0x00000000002A5B28 "jR"
 *   insn=0x00000000002A5B2C string=0x00000000002A5B30 "eo"
 *   insn=0x00000000002A5B34 string=0x00000000002A5B38 "K"
 *   insn=0x00000000002A5B38 string=0x00000000002A5B3C "+"
 *   insn=0x00000000002A5B3C string=0x00000000002A5B40 "_"
 *   insn=0x00000000002A5B60 string=0x00000000001F7EF0 "0'"
 *   insn=0x00000000002A5B70 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A5B80 string=0x00000000002A5B84 "Po"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleComponent::~ParticleComponent(Caver::ParticleComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  __int64 v5; // x8
  void *v6; // x0
  unsigned int *v7; // x8
  int v8; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 15);
  *(_QWORD *)&v3 = &off_6C34C8;
  *((_QWORD *)&v3 + 1) = &off_6C3508;
  *(_QWORD *)this = off_6C33B0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = *((_QWORD *)this + 14);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    v7 = (unsigned int *)(v5 - 8);
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
      operator delete(v6);
  }
  Caver::Component::~Component(this);
}

