/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000230EE4
 * Mangled: _ZN5Caver15PortalComponentD2Ev
 * Demangled: Caver::PortalComponent::~PortalComponent()
 *
 * Callers: 1
 *   0x00000000001F3C10  Caver::PortalComponent::~PortalComponent()
 *
 * Callees: 9
 *   0x00000000001F3C10  Caver::PortalComponent::~PortalComponent()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002311A8  Caver::PortalComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 86
 *   insn=0x0000000000230EF4 string=0x0000000000230EF8 "T"
 *   insn=0x0000000000230F00 string=0x0000000000230F04 ")UD"
 *   insn=0x0000000000230F0C string=0x0000000000230F10 "`R@"
 *   insn=0x0000000000230F10 string=0x0000000000230F14 "("
 *   insn=0x0000000000230F18 string=0x0000000000230F1C "("
 *   insn=0x0000000000230F1C string=0x0000000000230F20 "*A"
 *   insn=0x0000000000230F24 string=0x0000000000230F28 "j"
 *   insn=0x0000000000230F28 string=0x0000000000230F2C "`"
 *   insn=0x0000000000230F30 string=0x0000000000230F34 "@"
 *   insn=0x0000000000230F30 string=0x0000000000230F50 "hJ@"
 *   insn=0x0000000000230F34 string=0x0000000000230F38 ""
 *   insn=0x0000000000230F38 string=0x0000000000230F3C ""
 *   insn=0x0000000000230F40 string=0x0000000000230F44 ""
 *   insn=0x0000000000230F44 string=0x0000000000230F48 ""
 *   insn=0x0000000000230F64 string=0x0000000000230F68 "hF@"
 *   insn=0x0000000000230F70 string=0x0000000000230F74 "A"
 *   insn=0x0000000000230F78 string=0x0000000000230F7C "`B@"
 *   insn=0x0000000000230F7C string=0x0000000000230F80 ""
 *   insn=0x0000000000230F80 string=0x0000000000230F84 "A"
 *   insn=0x0000000000230F84 string=0x0000000000230F88 "h:"
 *   insn=0x0000000000230F8C string=0x0000000000230F90 "@"
 *   insn=0x0000000000230F90 string=0x0000000000230F94 ""
 *   insn=0x0000000000230F94 string=0x0000000000230F98 ""
 *   insn=0x0000000000230F9C string=0x0000000000230FA0 ""
 *   insn=0x0000000000230FA0 string=0x0000000000230FA4 ""
 *   insn=0x0000000000230FAC string=0x0000000000230FB0 "H%"
 *   insn=0x0000000000230FB0 string=0x00000000001FA4D0 "0'"
 *   insn=0x0000000000230FD8 string=0x0000000000230FDC ")=G"
 *   insn=0x0000000000230FDC string=0x0000000000230FE0 "!"
 *   insn=0x0000000000230FE4 string=0x0000000000230FE8 "\t"
 *   insn=0x0000000000230FE4 string=0x0000000000231020 "\t"
 *   insn=0x0000000000230FE8 string=0x0000000000230FEC "*"
 *   insn=0x0000000000230FEC string=0x0000000000230FF0 "\n"
 *   insn=0x0000000000230FF4 string=0x0000000000230FF8 ""
 *   insn=0x0000000000230FF8 string=0x000000000023102C "?"
 *   insn=0x0000000000230FFC string=0x0000000000231000 ")=G"
 *   insn=0x0000000000231000 string=0x0000000000231004 "!"
 *   insn=0x0000000000231008 string=0x000000000023100C "\t"
 *   insn=0x0000000000231008 string=0x0000000000231040 "\t"
 *   insn=0x000000000023100C string=0x0000000000231010 "*"
 *   insn=0x0000000000231010 string=0x0000000000231014 "\n"
 *   insn=0x000000000023101C string=0x000000000023104C "?"
 *   insn=0x0000000000231020 string=0x0000000000231024 "*"
 *   insn=0x0000000000231024 string=0x0000000000231028 "\n"
 *   insn=0x0000000000231040 string=0x0000000000231044 "*"
 *   insn=0x0000000000231044 string=0x0000000000231048 "\n"
 *   insn=0x000000000023104C string=0x0000000000231050 "L"
 *   insn=0x0000000000231060 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000231064 string=0x0000000000231068 "%"
 *   insn=0x0000000000231078 string=0x000000000023107C "(a"
 *   insn=0x0000000000231080 string=0x0000000000231084 "A"
 *   insn=0x0000000000231084 string=0x0000000000231088 "hF@"
 *   insn=0x0000000000231098 string=0x000000000023109C ")=G"
 *   insn=0x000000000023109C string=0x00000000002310A0 "!"
 *   insn=0x00000000002310A4 string=0x00000000002310A8 "\t"
 *   insn=0x00000000002310A4 string=0x0000000000231154 "\t"
 *   insn=0x00000000002310A8 string=0x00000000002310AC "*"
 *   insn=0x00000000002310AC string=0x00000000002310B0 "\n"
 *   insn=0x00000000002310B4 string=0x00000000002310B8 "?"
 *   insn=0x00000000002310B8 string=0x00000000002310BC "l"
 *   insn=0x00000000002310C8 string=0x00000000002310CC "`B@"
 *   insn=0x00000000002310CC string=0x00000000002310D0 ""
 *   insn=0x00000000002310D0 string=0x00000000002310D4 "A"
 *   insn=0x00000000002310D4 string=0x00000000002310D8 "h:"
 *   insn=0x00000000002310DC string=0x00000000002310E0 "@"
 *   insn=0x00000000002310E0 string=0x00000000002310E4 ""
 *   insn=0x00000000002310E4 string=0x00000000002310E8 ""
 *   insn=0x00000000002310EC string=0x00000000002310F0 ""
 *   insn=0x00000000002310F0 string=0x00000000002310F4 ""
 *   insn=0x000000000023110C string=0x0000000000231110 "J=G"
 *   insn=0x0000000000231110 string=0x0000000000231114 ")!"
 *   insn=0x0000000000231118 string=0x000000000023111C "*"
 *   insn=0x0000000000231118 string=0x0000000000231130 "*"
 *   insn=0x000000000023111C string=0x0000000000231120 "K"
 *   insn=0x0000000000231120 string=0x0000000000231124 "+"
 *   insn=0x000000000023112C string=0x000000000023113C "_"
 *   insn=0x0000000000231130 string=0x0000000000231134 "K"
 *   insn=0x0000000000231134 string=0x0000000000231138 "+"
 *   insn=0x000000000023113C string=0x0000000000231140 "L"
 *   insn=0x0000000000231154 string=0x0000000000231158 "*"
 *   insn=0x0000000000231158 string=0x000000000023115C "\n"
 *   insn=0x000000000023115C string=0x0000000000231160 "?"
 *   insn=0x0000000000231180 string=0x00000000001F3C10 "P'"
 *   insn=0x000000000023118C string=0x0000000000231190 "H"
 *   insn=0x0000000000231190 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000231198 string=0x000000000023119C "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalComponent::~PortalComponent(Caver::PortalComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  __int64 v5; // x8
  void *v6; // x0
  __int64 v7; // x8
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 20);
  *(_QWORD *)&v3 = &off_6BADC8;
  *((_QWORD *)&v3 + 1) = &off_6BAE08;
  *(_QWORD *)this = off_6BACB0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = *((_QWORD *)this + 18);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v5 - 8);
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
      operator delete(v6);
  }
  v7 = *((_QWORD *)this + 17);
  v8 = (void *)(v7 - 24);
  if ( (__int64 *)(v7 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v8);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = &off_6BAE78;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::Component::~Component(this);
}

