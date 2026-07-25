/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CBE44
 * Mangled: _ZN5Caver19WeaponGlowComponentD2Ev
 * Demangled: Caver::WeaponGlowComponent::~WeaponGlowComponent()
 *
 * Callers: 1
 *   0x00000000001FA270  Caver::WeaponGlowComponent::~WeaponGlowComponent()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA270  Caver::WeaponGlowComponent::~WeaponGlowComponent()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002CBFF8  Caver::WeaponGlowComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 64
 *   insn=0x00000000002CBE50 string=0x00000000002CBE54 ""
 *   insn=0x00000000002CBE58 string=0x00000000002CBE5C "`r@"
 *   insn=0x00000000002CBE5C string=0x00000000002CBE60 "\n"
 *   insn=0x00000000002CBE60 string=0x00000000002CBE64 "\tA"
 *   insn=0x00000000002CBE64 string=0x00000000002CBE68 "@"
 *   insn=0x00000000002CBE68 string=0x00000000002CBE6C ""
 *   insn=0x00000000002CBE70 string=0x00000000002CBE74 "i"
 *   insn=0x00000000002CBE74 string=0x00000000002CBE78 "`"
 *   insn=0x00000000002CBE7C string=0x00000000002CBE80 "@"
 *   insn=0x00000000002CBE7C string=0x00000000002CBE9C "`n@"
 *   insn=0x00000000002CBE80 string=0x00000000002CBE84 ""
 *   insn=0x00000000002CBE84 string=0x00000000002CBE88 ""
 *   insn=0x00000000002CBE8C string=0x00000000002CBE90 ""
 *   insn=0x00000000002CBE90 string=0x00000000002CBE94 ""
 *   insn=0x00000000002CBEA0 string=0x00000000002CBEA4 "@"
 *   insn=0x00000000002CBEA0 string=0x00000000002CBEC0 "`f@"
 *   insn=0x00000000002CBEA4 string=0x00000000002CBEA8 ""
 *   insn=0x00000000002CBEA8 string=0x00000000002CBEAC ""
 *   insn=0x00000000002CBEB0 string=0x00000000002CBEB4 ""
 *   insn=0x00000000002CBEB4 string=0x00000000002CBEB8 ""
 *   insn=0x00000000002CBEC0 string=0x00000000002CBEC4 "@"
 *   insn=0x00000000002CBEC4 string=0x00000000002CBEC8 "&"
 *   insn=0x00000000002CBEC4 string=0x00000000002CBECC "`^@"
 *   insn=0x00000000002CBEC8 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002CBECC string=0x00000000002CBED0 "@"
 *   insn=0x00000000002CBED0 string=0x00000000002CBED4 "#"
 *   insn=0x00000000002CBED8 string=0x00000000002CBEDC "`N@"
 *   insn=0x00000000002CBEDC string=0x00000000002CBEE0 "mB"
 *   insn=0x00000000002CBEE0 string=0x00000000002CBEE4 "A"
 *   insn=0x00000000002CBEE4 string=0x00000000002CBEE8 "hF"
 *   insn=0x00000000002CBEEC string=0x00000000002CBEF0 "@"
 *   insn=0x00000000002CBEF0 string=0x00000000002CBEF4 ""
 *   insn=0x00000000002CBEF4 string=0x00000000002CBEF8 ""
 *   insn=0x00000000002CBEFC string=0x00000000002CBF00 ""
 *   insn=0x00000000002CBF00 string=0x00000000002CBF04 ""
 *   insn=0x00000000002CBF14 string=0x00000000002CBF18 "n"
 *   insn=0x00000000002CBF18 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002CBF1C string=0x00000000002CBF20 "#"
 *   insn=0x00000000002CBF24 string=0x00000000002CBF28 "`f@"
 *   insn=0x00000000002CBF30 string=0x00000000002CBF6C "`^@"
 *   insn=0x00000000002CBF38 string=0x00000000002CBF3C "("
 *   insn=0x00000000002CBF3C string=0x00000000002CBF40 "\t\t@"
 *   insn=0x00000000002CBF3C string=0x00000000002CBF60 "`f@"
 *   insn=0x00000000002CBF40 string=0x00000000002CBF44 ")"
 *   insn=0x00000000002CBF44 string=0x00000000002CBF48 "\t\t"
 *   insn=0x00000000002CBF4C string=0x00000000002CBF50 "\t"
 *   insn=0x00000000002CBF50 string=0x00000000002CBF54 ")"
 *   insn=0x00000000002CBF58 string=0x00000000002CBF5C " "
 *   insn=0x00000000002CBF60 string=0x00000000002CBF64 "@"
 *   insn=0x00000000002CBF6C string=0x00000000002CBF70 "@"
 *   insn=0x00000000002CBF78 string=0x00000000002CBF7C "`N@"
 *   insn=0x00000000002CBF7C string=0x00000000002CBF80 "mB"
 *   insn=0x00000000002CBF80 string=0x00000000002CBF84 "A"
 *   insn=0x00000000002CBF84 string=0x00000000002CBF88 "hF"
 *   insn=0x00000000002CBF8C string=0x00000000002CBF90 "@"
 *   insn=0x00000000002CBF90 string=0x00000000002CBF94 ""
 *   insn=0x00000000002CBF94 string=0x00000000002CBF98 ""
 *   insn=0x00000000002CBF9C string=0x00000000002CBFA0 ""
 *   insn=0x00000000002CBFA0 string=0x00000000002CBFA4 ""
 *   insn=0x00000000002CBFAC string=0x00000000002CBFB0 "H"
 *   insn=0x00000000002CBFB4 string=0x00000000002CBFB8 "C"
 *   insn=0x00000000002CBFD0 string=0x00000000001FA270 "0'"
 *   insn=0x00000000002CBFE0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CBFF0 string=0x00000000002CBFF4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponGlowComponent::~WeaponGlowComponent(Caver::WeaponGlowComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  void *v7; // x0
  void *v8; // x0
  _DWORD *v9; // x0
  int v10; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 28);
  *(_QWORD *)&v3 = &off_6C5768;
  *((_QWORD *)&v3 + 1) = &off_6C57A8;
  *(_QWORD *)this = off_6C5640;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 27);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (void *)*((_QWORD *)this + 25);
  if ( v7 )
    operator delete[](v7);
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
    operator delete[](v8);
  v9 = (_DWORD *)*((_QWORD *)this + 19);
  *((_QWORD *)this + 17) = off_6C0268;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::Component::~Component(this);
}

