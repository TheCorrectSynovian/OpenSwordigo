/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028F4C0
 * Mangled: _ZN5Caver14SkillComponentD2Ev
 * Demangled: Caver::SkillComponent::~SkillComponent()
 *
 * Callers: 1
 *   0x00000000001F8F20  Caver::SkillComponent::~SkillComponent()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8F20  Caver::SkillComponent::~SkillComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000028F82C  Caver::SkillComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 122
 *   insn=0x000000000028F4CC string=0x000000000028F4D0 "T"
 *   insn=0x000000000028F4D8 string=0x000000000028F4DC ")yB"
 *   insn=0x000000000028F4E4 string=0x000000000028F4E8 "`f@"
 *   insn=0x000000000028F4E8 string=0x000000000028F4EC "("
 *   insn=0x000000000028F4F0 string=0x000000000028F4F4 "("
 *   insn=0x000000000028F4F4 string=0x000000000028F4F8 "*A"
 *   insn=0x000000000028F4FC string=0x000000000028F500 "j"
 *   insn=0x000000000028F500 string=0x000000000028F504 "`"
 *   insn=0x000000000028F508 string=0x000000000028F50C "@"
 *   insn=0x000000000028F508 string=0x000000000028F528 "`b@"
 *   insn=0x000000000028F50C string=0x000000000028F510 ""
 *   insn=0x000000000028F510 string=0x000000000028F514 ""
 *   insn=0x000000000028F518 string=0x000000000028F51C ""
 *   insn=0x000000000028F51C string=0x000000000028F520 ""
 *   insn=0x000000000028F52C string=0x000000000028F530 "@"
 *   insn=0x000000000028F52C string=0x000000000028F54C "`^@"
 *   insn=0x000000000028F530 string=0x000000000028F534 ""
 *   insn=0x000000000028F534 string=0x000000000028F538 ""
 *   insn=0x000000000028F53C string=0x000000000028F540 ""
 *   insn=0x000000000028F540 string=0x000000000028F544 ""
 *   insn=0x000000000028F550 string=0x000000000028F554 "@"
 *   insn=0x000000000028F550 string=0x000000000028F570 "`Z@"
 *   insn=0x000000000028F554 string=0x000000000028F558 ""
 *   insn=0x000000000028F558 string=0x000000000028F55C ""
 *   insn=0x000000000028F560 string=0x000000000028F564 ""
 *   insn=0x000000000028F564 string=0x000000000028F568 ""
 *   insn=0x000000000028F574 string=0x000000000028F578 "@"
 *   insn=0x000000000028F574 string=0x000000000028F594 "`V@"
 *   insn=0x000000000028F578 string=0x000000000028F57C ""
 *   insn=0x000000000028F57C string=0x000000000028F580 ""
 *   insn=0x000000000028F584 string=0x000000000028F588 ""
 *   insn=0x000000000028F588 string=0x000000000028F58C ""
 *   insn=0x000000000028F598 string=0x000000000028F59C "@"
 *   insn=0x000000000028F598 string=0x000000000028F5B8 "hR@"
 *   insn=0x000000000028F59C string=0x000000000028F5A0 ""
 *   insn=0x000000000028F5A0 string=0x000000000028F5A4 ""
 *   insn=0x000000000028F5A8 string=0x000000000028F5AC ""
 *   insn=0x000000000028F5AC string=0x000000000028F5B0 ""
 *   insn=0x000000000028F5BC string=0x000000000028F5C0 ")"
 *   insn=0x000000000028F5D0 string=0x000000000028F5D4 "`B@"
 *   insn=0x000000000028F5D4 string=0x000000000028F5D8 ""
 *   insn=0x000000000028F5D8 string=0x000000000028F5DC "A"
 *   insn=0x000000000028F5DC string=0x000000000028F5E0 "h:"
 *   insn=0x000000000028F5E4 string=0x000000000028F5E8 "@"
 *   insn=0x000000000028F5E8 string=0x000000000028F5EC ""
 *   insn=0x000000000028F5EC string=0x000000000028F5F0 ""
 *   insn=0x000000000028F5F4 string=0x000000000028F5F8 ""
 *   insn=0x000000000028F5F8 string=0x000000000028F5FC ""
 *   insn=0x000000000028F608 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000028F62C string=0x000000000028F630 ")=G"
 *   insn=0x000000000028F630 string=0x000000000028F634 "!"
 *   insn=0x000000000028F638 string=0x000000000028F63C "\t"
 *   insn=0x000000000028F638 string=0x000000000028F650 "\t"
 *   insn=0x000000000028F63C string=0x000000000028F640 "*"
 *   insn=0x000000000028F640 string=0x000000000028F644 "\n"
 *   insn=0x000000000028F64C string=0x000000000028F65C "?"
 *   insn=0x000000000028F650 string=0x000000000028F654 "*"
 *   insn=0x000000000028F654 string=0x000000000028F658 "\n"
 *   insn=0x000000000028F664 string=0x000000000028F668 "Ok"
 *   insn=0x000000000028F670 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000028F674 string=0x000000000028F678 "T"
 *   insn=0x000000000028F67C string=0x000000000028F680 "3"
 *   insn=0x000000000028F680 string=0x000000000028F74C "hR@"
 *   insn=0x000000000028F684 string=0x000000000028F688 "`V@"
 *   insn=0x000000000028F688 string=0x000000000028F68C " "
 *   insn=0x000000000028F68C string=0x000000000028F690 "/"
 *   insn=0x000000000028F68C string=0x000000000028F730 "@"
 *   insn=0x000000000028F694 string=0x000000000028F698 "`Z@"
 *   insn=0x000000000028F69C string=0x000000000028F6A0 """
 *   insn=0x000000000028F69C string=0x000000000028F70C "@"
 *   insn=0x000000000028F6A0 string=0x000000000028F728 "`V@"
 *   insn=0x000000000028F6A4 string=0x000000000028F6A8 "`^@"
 *   insn=0x000000000028F6AC string=0x000000000028F6E8 "@"
 *   insn=0x000000000028F6B0 string=0x000000000028F704 "`Z@"
 *   insn=0x000000000028F6B8 string=0x000000000028F6BC "("
 *   insn=0x000000000028F6BC string=0x000000000028F6C0 "\t\t@"
 *   insn=0x000000000028F6BC string=0x000000000028F6E0 "`^@"
 *   insn=0x000000000028F6C0 string=0x000000000028F6C4 ")"
 *   insn=0x000000000028F6C4 string=0x000000000028F6C8 "\t\t"
 *   insn=0x000000000028F6CC string=0x000000000028F6D0 "\t"
 *   insn=0x000000000028F6D0 string=0x000000000028F6D4 ")"
 *   insn=0x000000000028F6D8 string=0x000000000028F6DC " "
 *   insn=0x000000000028F6E8 string=0x000000000028F6EC ""
 *   insn=0x000000000028F6EC string=0x000000000028F6F0 ""
 *   insn=0x000000000028F6F4 string=0x000000000028F6F8 ""
 *   insn=0x000000000028F6F8 string=0x000000000028F6FC ""
 *   insn=0x000000000028F70C string=0x000000000028F710 ""
 *   insn=0x000000000028F710 string=0x000000000028F714 ""
 *   insn=0x000000000028F718 string=0x000000000028F71C ""
 *   insn=0x000000000028F71C string=0x000000000028F720 ""
 *   insn=0x000000000028F730 string=0x000000000028F734 ""
 *   insn=0x000000000028F734 string=0x000000000028F738 ""
 *   insn=0x000000000028F73C string=0x000000000028F740 ""
 *   insn=0x000000000028F740 string=0x000000000028F744 ""
 *   insn=0x000000000028F750 string=0x000000000028F754 ")"
 *   insn=0x000000000028F764 string=0x000000000028F768 ")=G"
 *   insn=0x000000000028F768 string=0x000000000028F76C "!"
 *   insn=0x000000000028F76C string=0x000000000028F770 "I"
 *   insn=0x000000000028F770 string=0x000000000028F774 "\t"
 *   insn=0x000000000028F770 string=0x000000000028F7D8 "\t"
 *   insn=0x000000000028F774 string=0x000000000028F778 "*"
 *   insn=0x000000000028F778 string=0x000000000028F77C "\n"
 *   insn=0x000000000028F780 string=0x000000000028F784 "?"
 *   insn=0x000000000028F784 string=0x000000000028F788 "l"
 *   insn=0x000000000028F794 string=0x000000000028F798 "`B@"
 *   insn=0x000000000028F798 string=0x000000000028F79C ""
 *   insn=0x000000000028F79C string=0x000000000028F7A0 "A"
 *   insn=0x000000000028F7A0 string=0x000000000028F7A4 "h:"
 *   insn=0x000000000028F7A8 string=0x000000000028F7AC "@"
 *   insn=0x000000000028F7AC string=0x000000000028F7B0 ""
 *   insn=0x000000000028F7B0 string=0x000000000028F7B4 ""
 *   insn=0x000000000028F7B8 string=0x000000000028F7BC ""
 *   insn=0x000000000028F7BC string=0x000000000028F7C0 ""
 *   insn=0x000000000028F7C8 string=0x000000000028F7CC "A"
 *   insn=0x000000000028F7D0 string=0x000000000028F7D4 "<"
 *   insn=0x000000000028F7D8 string=0x000000000028F7DC "*"
 *   insn=0x000000000028F7DC string=0x000000000028F7E0 "\n"
 *   insn=0x000000000028F7E0 string=0x000000000028F7E4 "?"
 *   insn=0x000000000028F7E4 string=0x000000000028F7E8 "-"
 *   insn=0x000000000028F804 string=0x00000000001F8F20 "0'"
 *   insn=0x000000000028F814 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000028F824 string=0x000000000028F828 "'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::SkillComponent::~SkillComponent(Caver::SkillComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8
  _DWORD *v9; // x0
  int v10; // w8
  _DWORD *v11; // x0
  int v12; // w8
  __int64 v13; // x8
  void *v14; // x0
  _DWORD *v15; // x0
  int v16; // w8
  unsigned int *v17; // x8
  int v18; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 25);
  *(_QWORD *)&v3 = &off_6C1148;
  *((_QWORD *)&v3 + 1) = &off_6C1188;
  *(_QWORD *)this = off_6C1030;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 24);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 22);
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 21);
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = *((_QWORD *)this + 20);
  v14 = (void *)(v13 - 24);
  if ( (__int64 *)(v13 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(v13 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v14);
  }
  v15 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = &off_6BDF68;
  if ( v15 )
  {
    v16 = v15[2] - 1;
    v15[2] = v16;
    if ( !v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
  }
  Caver::Component::~Component(this);
}

