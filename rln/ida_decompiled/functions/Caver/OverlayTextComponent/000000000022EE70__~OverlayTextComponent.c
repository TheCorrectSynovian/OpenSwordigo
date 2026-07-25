/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022EE70
 * Mangled: _ZN5Caver20OverlayTextComponentD2Ev
 * Demangled: Caver::OverlayTextComponent::~OverlayTextComponent()
 *
 * Callers: 1
 *   0x0000000000202700  Caver::OverlayTextComponent::~OverlayTextComponent()
 *
 * Callees: 11
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000202700  Caver::OverlayTextComponent::~OverlayTextComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000022F1F4  Caver::OverlayTextComponent::Clone(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 96
 *   insn=0x000000000022EE80 string=0x000000000022EE84 "V"
 *   insn=0x000000000022EE8C string=0x000000000022EE90 ")"
 *   insn=0x000000000022EE98 string=0x000000000022EE9C "tj@"
 *   insn=0x000000000022EE9C string=0x000000000022EEA0 "("
 *   insn=0x000000000022EEA4 string=0x000000000022EEA8 "("
 *   insn=0x000000000022EEA8 string=0x000000000022EEAC "*A"
 *   insn=0x000000000022EEB0 string=0x000000000022EEB4 "j"
 *   insn=0x000000000022EEB4 string=0x000000000022EEB8 "`"
 *   insn=0x000000000022EEB8 string=0x000000000022EEBC "4"
 *   insn=0x000000000022EEBC string=0x000000000022EF00 "tR@"
 *   insn=0x000000000022EEC0 string=0x000000000022EEC4 ""
 *   insn=0x000000000022EED0 string=0x000000000022EED4 "\t@"
 *   insn=0x000000000022EEE0 string=0x000000000022EEE4 ""
 *   insn=0x000000000022EEF0 string=0x000000000022EEF4 "@"
 *   insn=0x000000000022EF00 string=0x000000000022EF04 "T"
 *   insn=0x000000000022EF04 string=0x000000000022EF4C "hJ@"
 *   insn=0x000000000022EF08 string=0x000000000022EF0C "@"
 *   insn=0x000000000022EF10 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000022EF14 string=0x000000000022EF18 "@"
 *   insn=0x000000000022EF24 string=0x000000000022EF28 "@"
 *   insn=0x000000000022EF28 string=0x000000000022EF2C ""
 *   insn=0x000000000022EF2C string=0x000000000022EF30 ""
 *   insn=0x000000000022EF34 string=0x000000000022EF38 ""
 *   insn=0x000000000022EF38 string=0x000000000022EF3C ""
 *   insn=0x000000000022EF48 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022EF60 string=0x000000000022EF64 "uF@"
 *   insn=0x000000000022EF68 string=0x000000000022EF7C "h:@"
 *   insn=0x000000000022EF70 string=0x00000000001F8990 "0'"
 *   insn=0x000000000022EF8C string=0x000000000022EF90 "P-"
 *   insn=0x000000000022EF90 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000022EF9C string=0x000000000022EFA0 "A"
 *   insn=0x000000000022EFB8 string=0x000000000022EFBC ")=G"
 *   insn=0x000000000022EFBC string=0x000000000022EFC0 "!"
 *   insn=0x000000000022EFC4 string=0x000000000022EFC8 "\t"
 *   insn=0x000000000022EFC4 string=0x000000000022F000 "\t"
 *   insn=0x000000000022EFC8 string=0x000000000022EFCC "*"
 *   insn=0x000000000022EFCC string=0x000000000022EFD0 "\n"
 *   insn=0x000000000022EFD4 string=0x000000000022EFD8 ""
 *   insn=0x000000000022EFD8 string=0x000000000022F00C "?"
 *   insn=0x000000000022EFDC string=0x000000000022EFE0 ")=G"
 *   insn=0x000000000022EFE0 string=0x000000000022EFE4 "!"
 *   insn=0x000000000022EFE4 string=0x000000000022EFE8 "\t"
 *   insn=0x000000000022EFE8 string=0x000000000022EFEC "\t"
 *   insn=0x000000000022EFE8 string=0x000000000022F028 "\t"
 *   insn=0x000000000022EFEC string=0x000000000022EFF0 "*"
 *   insn=0x000000000022EFF0 string=0x000000000022EFF4 "\n"
 *   insn=0x000000000022EFFC string=0x000000000022F034 "?"
 *   insn=0x000000000022F000 string=0x000000000022F004 "*"
 *   insn=0x000000000022F004 string=0x000000000022F008 "\n"
 *   insn=0x000000000022F018 string=0x000000000022F01C "uF@"
 *   insn=0x000000000022F01C string=0x000000000022F020 "u"
 *   insn=0x000000000022F028 string=0x000000000022F02C "*"
 *   insn=0x000000000022F02C string=0x000000000022F030 "\n"
 *   insn=0x000000000022F048 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022F060 string=0x000000000022F064 "U"
 *   insn=0x000000000022F064 string=0x000000000022F0AC "hJ@"
 *   insn=0x000000000022F068 string=0x000000000022F06C "@"
 *   insn=0x000000000022F074 string=0x000000000022F078 "@"
 *   insn=0x000000000022F084 string=0x000000000022F088 "@"
 *   insn=0x000000000022F088 string=0x000000000022F08C ""
 *   insn=0x000000000022F08C string=0x000000000022F090 ""
 *   insn=0x000000000022F094 string=0x000000000022F098 ""
 *   insn=0x000000000022F098 string=0x000000000022F09C ""
 *   insn=0x000000000022F0B0 string=0x000000000022F0B4 ")"
 *   insn=0x000000000022F0C0 string=0x000000000022F0C4 "uF@"
 *   insn=0x000000000022F0C8 string=0x000000000022F148 "h:@"
 *   insn=0x000000000022F0CC string=0x000000000022F0D0 "0&"
 *   insn=0x000000000022F0D0 string=0x000000000022F0D4 ""
 *   insn=0x000000000022F0D8 string=0x000000000022F0DC ")=G"
 *   insn=0x000000000022F0DC string=0x000000000022F0E0 "!"
 *   insn=0x000000000022F0E4 string=0x000000000022F0E8 "\t"
 *   insn=0x000000000022F0E4 string=0x000000000022F0FC "\t"
 *   insn=0x000000000022F0E8 string=0x000000000022F0EC "*"
 *   insn=0x000000000022F0EC string=0x000000000022F0F0 "\n"
 *   insn=0x000000000022F0F8 string=0x000000000022F108 "?"
 *   insn=0x000000000022F0FC string=0x000000000022F100 "*"
 *   insn=0x000000000022F100 string=0x000000000022F104 "\n"
 *   insn=0x000000000022F114 string=0x000000000022F118 "uF@"
 *   insn=0x000000000022F11C string=0x000000000022F120 "\n"
 *   insn=0x000000000022F12C string=0x000000000022F130 "` "
 *   insn=0x000000000022F140 string=0x000000000022F144 "[ "
 *   insn=0x000000000022F14C string=0x000000000022F150 ")"
 *   insn=0x000000000022F160 string=0x000000000022F164 ")=G"
 *   insn=0x000000000022F164 string=0x000000000022F168 "!"
 *   insn=0x000000000022F16C string=0x000000000022F170 "\t"
 *   insn=0x000000000022F16C string=0x000000000022F1A0 "\t"
 *   insn=0x000000000022F170 string=0x000000000022F174 "*"
 *   insn=0x000000000022F174 string=0x000000000022F178 "\n"
 *   insn=0x000000000022F17C string=0x000000000022F180 "?"
 *   insn=0x000000000022F180 string=0x000000000022F184 "l"
 *   insn=0x000000000022F1A0 string=0x000000000022F1A4 "*"
 *   insn=0x000000000022F1A4 string=0x000000000022F1A8 "\n"
 *   insn=0x000000000022F1A8 string=0x000000000022F1AC "?"
 *   insn=0x000000000022F1C8 string=0x000000000022F1CC "MM"
 *   insn=0x000000000022F1D8 string=0x000000000022F1DC "5 "
 *   insn=0x000000000022F1E4 string=0x000000000022F1E8 "2 "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayTextComponent::~OverlayTextComponent(Caver::OverlayTextComponent *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  _QWORD *v6; // x20
  void *v7; // x0
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8
  __int64 v11; // x8
  void *v12; // x0
  Caver::FontText *v13; // x21
  __int64 v14; // x8
  void *v15; // x0
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 26);
  *(_QWORD *)&v3 = &off_6BAC10;
  *((_QWORD *)&v3 + 1) = &off_6BAC50;
  *(_QWORD *)this = off_6BAAF0;
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
  v6 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v6 )
  {
    v7 = (void *)v6[7];
    if ( v7 )
      operator delete[](v7);
    v8 = (void *)v6[4];
    if ( v8 )
      operator delete[](v8);
    v9 = (_DWORD *)*v6;
    if ( *v6 )
    {
      v10 = v9[2] - 1;
      v9[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
    }
    operator delete(v6);
  }
  v11 = *((_QWORD *)this + 18);
  v12 = (void *)(v11 - 24);
  if ( (__int64 *)(v11 - 24) == &qword_6FD2E0 )
    goto LABEL_15;
  v16 = (unsigned int *)(v11 - 8);
  if ( &pthread_create )
  {
    do
      v17 = __ldaxr(v16);
    while ( __stlxr(v17 - 1, v16) );
  }
  else
  {
    v17 = (*v16)--;
  }
  if ( v17 > 0 )
  {
LABEL_15:
    v13 = (Caver::FontText *)*((_QWORD *)this + 17);
    if ( !v13 )
      goto LABEL_17;
    goto LABEL_16;
  }
  operator delete(v12);
  v13 = (Caver::FontText *)*((_QWORD *)this + 17);
  if ( v13 )
  {
LABEL_16:
    Caver::FontText::~FontText(v13);
    operator delete(v13);
  }
LABEL_17:
  v14 = *((_QWORD *)this + 14);
  v15 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) != &qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v14 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v15);
  }
  Caver::Component::~Component(this);
}

