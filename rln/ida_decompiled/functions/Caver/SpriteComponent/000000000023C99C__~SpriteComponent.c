/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023C99C
 * Mangled: _ZN5Caver15SpriteComponentD2Ev
 * Demangled: Caver::SpriteComponent::~SpriteComponent()
 *
 * Callers: 1
 *   0x00000000001FCD80  Caver::SpriteComponent::~SpriteComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FCD80  Caver::SpriteComponent::~SpriteComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023CB6C  Caver::SpriteComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 51
 *   insn=0x000000000023C9AC string=0x000000000023C9B0 "U"
 *   insn=0x000000000023C9B4 string=0x000000000023C9B8 "I%"
 *   insn=0x000000000023C9B8 string=0x000000000023C9BC ")"
 *   insn=0x000000000023C9C4 string=0x000000000023C9C8 "tB@"
 *   insn=0x000000000023C9C8 string=0x000000000023C9CC "("
 *   insn=0x000000000023C9D0 string=0x000000000023C9D4 "("
 *   insn=0x000000000023C9D4 string=0x000000000023C9D8 "*A"
 *   insn=0x000000000023C9DC string=0x000000000023C9E0 "j"
 *   insn=0x000000000023C9E0 string=0x000000000023C9E4 "`"
 *   insn=0x000000000023C9E4 string=0x000000000023C9E8 "4"
 *   insn=0x000000000023C9E8 string=0x000000000023CA2C "h:@"
 *   insn=0x000000000023C9EC string=0x000000000023C9F0 ""
 *   insn=0x000000000023C9FC string=0x000000000023CA00 "\t@"
 *   insn=0x000000000023CA0C string=0x000000000023CA10 ""
 *   insn=0x000000000023CA1C string=0x000000000023CA20 "@"
 *   insn=0x000000000023CA2C string=0x000000000023CA30 "I%"
 *   insn=0x000000000023CA30 string=0x000000000023CA34 ")"
 *   insn=0x000000000023CA40 string=0x000000000023CA70 "I%"
 *   insn=0x000000000023CA48 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023CA58 string=0x000000000023CAB4 ""
 *   insn=0x000000000023CA70 string=0x000000000023CA74 ")=G"
 *   insn=0x000000000023CA74 string=0x000000000023CA78 "!"
 *   insn=0x000000000023CA7C string=0x000000000023CA80 "\t"
 *   insn=0x000000000023CA7C string=0x000000000023CA94 "\t"
 *   insn=0x000000000023CA80 string=0x000000000023CA84 "*"
 *   insn=0x000000000023CA84 string=0x000000000023CA88 "\n"
 *   insn=0x000000000023CA90 string=0x000000000023CAA0 "?"
 *   insn=0x000000000023CA94 string=0x000000000023CA98 "*"
 *   insn=0x000000000023CA98 string=0x000000000023CA9C "\n"
 *   insn=0x000000000023CAA8 string=0x000000000023CAAC ">"
 *   insn=0x000000000023CAB4 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023CAB8 string=0x000000000023CABC "J%"
 *   insn=0x000000000023CABC string=0x000000000023CAC0 "J"
 *   insn=0x000000000023CAC4 string=0x000000000023CAC8 "(a"
 *   insn=0x000000000023CAD0 string=0x000000000023CAD4 "J%"
 *   insn=0x000000000023CAD4 string=0x000000000023CAD8 "J=G"
 *   insn=0x000000000023CAD8 string=0x000000000023CADC ")!"
 *   insn=0x000000000023CAE0 string=0x000000000023CAE4 "*"
 *   insn=0x000000000023CAE0 string=0x000000000023CB18 "*"
 *   insn=0x000000000023CAE4 string=0x000000000023CAE8 "K"
 *   insn=0x000000000023CAE8 string=0x000000000023CAEC "+"
 *   insn=0x000000000023CAF0 string=0x000000000023CAF4 "_"
 *   insn=0x000000000023CB00 string=0x000000000023CB04 "("
 *   insn=0x000000000023CB08 string=0x000000000023CB0C "q"
 *   insn=0x000000000023CB10 string=0x000000000023CB14 "l"
 *   insn=0x000000000023CB18 string=0x000000000023CB1C "K"
 *   insn=0x000000000023CB1C string=0x000000000023CB20 "+"
 *   insn=0x000000000023CB20 string=0x000000000023CB24 "_"
 *   insn=0x000000000023CB44 string=0x00000000001FCD80 "0'"
 *   insn=0x000000000023CB54 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023CB64 string=0x000000000023CB68 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SpriteComponent::~SpriteComponent(Caver::SpriteComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  void *v7; // x0
  unsigned int *v8; // x8
  int v9; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 16);
  *(_QWORD *)&v3 = &off_6BBC68;
  *((_QWORD *)&v3 + 1) = &off_6BBCA8;
  *(_QWORD *)this = off_6BBB50;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = *((_QWORD *)this + 14);
  v7 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v7);
  }
  Caver::Component::~Component(this);
}

