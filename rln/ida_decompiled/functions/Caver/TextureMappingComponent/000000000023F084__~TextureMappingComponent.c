/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F084
 * Mangled: _ZN5Caver23TextureMappingComponentD2Ev
 * Demangled: Caver::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callers: 1
 *   0x00000000001F6680  Caver::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6680  Caver::TextureMappingComponent::~TextureMappingComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000023F228  Caver::TextureMappingComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 52
 *   insn=0x000000000023F090 string=0x000000000023F094 "T"
 *   insn=0x000000000023F098 string=0x000000000023F09C ")%"
 *   insn=0x000000000023F09C string=0x000000000023F0A0 ")"
 *   insn=0x000000000023F0A8 string=0x000000000023F0AC "`>@"
 *   insn=0x000000000023F0AC string=0x000000000023F0B0 "("
 *   insn=0x000000000023F0B4 string=0x000000000023F0B8 "("
 *   insn=0x000000000023F0B8 string=0x000000000023F0BC "*A"
 *   insn=0x000000000023F0C0 string=0x000000000023F0C4 "j"
 *   insn=0x000000000023F0C4 string=0x000000000023F0C8 "`"
 *   insn=0x000000000023F0CC string=0x000000000023F0D0 "@"
 *   insn=0x000000000023F0CC string=0x000000000023F0EC "h:@"
 *   insn=0x000000000023F0D0 string=0x000000000023F0D4 ""
 *   insn=0x000000000023F0D4 string=0x000000000023F0D8 ""
 *   insn=0x000000000023F0DC string=0x000000000023F0E0 ""
 *   insn=0x000000000023F0E0 string=0x000000000023F0E4 ""
 *   insn=0x000000000023F0EC string=0x000000000023F0F0 ")%"
 *   insn=0x000000000023F0F0 string=0x000000000023F0F4 ")"
 *   insn=0x000000000023F0FC string=0x000000000023F100 "a"
 *   insn=0x000000000023F100 string=0x000000000023F12C ")%"
 *   insn=0x000000000023F108 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000023F118 string=0x000000000023F170 "X"
 *   insn=0x000000000023F12C string=0x000000000023F130 ")=G"
 *   insn=0x000000000023F130 string=0x000000000023F134 "!"
 *   insn=0x000000000023F138 string=0x000000000023F13C "\t"
 *   insn=0x000000000023F138 string=0x000000000023F150 "\t"
 *   insn=0x000000000023F13C string=0x000000000023F140 "*"
 *   insn=0x000000000023F140 string=0x000000000023F144 "\n"
 *   insn=0x000000000023F14C string=0x000000000023F15C "?"
 *   insn=0x000000000023F150 string=0x000000000023F154 "*"
 *   insn=0x000000000023F154 string=0x000000000023F158 "\n"
 *   insn=0x000000000023F15C string=0x000000000023F160 ","
 *   insn=0x000000000023F170 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000023F174 string=0x000000000023F178 "*%"
 *   insn=0x000000000023F178 string=0x000000000023F17C "J"
 *   insn=0x000000000023F180 string=0x000000000023F184 "(a"
 *   insn=0x000000000023F18C string=0x000000000023F190 "*%"
 *   insn=0x000000000023F190 string=0x000000000023F194 "J=G"
 *   insn=0x000000000023F194 string=0x000000000023F198 ")!"
 *   insn=0x000000000023F19C string=0x000000000023F1A0 "*"
 *   insn=0x000000000023F19C string=0x000000000023F1D4 "*"
 *   insn=0x000000000023F1A0 string=0x000000000023F1A4 "K"
 *   insn=0x000000000023F1A4 string=0x000000000023F1A8 "+"
 *   insn=0x000000000023F1AC string=0x000000000023F1B0 "_"
 *   insn=0x000000000023F1BC string=0x000000000023F1C0 "y"
 *   insn=0x000000000023F1D4 string=0x000000000023F1D8 "K"
 *   insn=0x000000000023F1D8 string=0x000000000023F1DC "+"
 *   insn=0x000000000023F1DC string=0x000000000023F1E0 "_"
 *   insn=0x000000000023F1FC string=0x000000000023F200 " "
 *   insn=0x000000000023F200 string=0x00000000001F6680 "0'"
 *   insn=0x000000000023F20C string=0x000000000023F210 "("
 *   insn=0x000000000023F210 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000023F218 string=0x000000000023F21C "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TextureMappingComponent::~TextureMappingComponent(Caver::TextureMappingComponent *this)
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
  *(_QWORD *)&v3 = &off_6BC038;
  *((_QWORD *)&v3 + 1) = &off_6BC078;
  *(_QWORD *)this = off_6BBF20;
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

