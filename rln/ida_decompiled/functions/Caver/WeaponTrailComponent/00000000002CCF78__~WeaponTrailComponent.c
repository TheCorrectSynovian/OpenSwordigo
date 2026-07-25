/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CCF78
 * Mangled: _ZN5Caver20WeaponTrailComponentD2Ev
 * Demangled: Caver::WeaponTrailComponent::~WeaponTrailComponent()
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002CD0A8  Caver::WeaponTrailComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 37
 *   insn=0x00000000002CCF84 string=0x00000000002CCF88 ""
 *   insn=0x00000000002CCF8C string=0x00000000002CCF90 "`F@"
 *   insn=0x00000000002CCF90 string=0x00000000002CCF94 "\n"
 *   insn=0x00000000002CCF94 string=0x00000000002CCF98 "\tA"
 *   insn=0x00000000002CCF98 string=0x00000000002CCF9C "@"
 *   insn=0x00000000002CCF9C string=0x00000000002CCFA0 ""
 *   insn=0x00000000002CCFA4 string=0x00000000002CCFA8 "i"
 *   insn=0x00000000002CCFA8 string=0x00000000002CCFAC "`"
 *   insn=0x00000000002CCFAC string=0x00000000002CCFB0 "@"
 *   insn=0x00000000002CCFB0 string=0x00000000002CCFB8 "`B@"
 *   insn=0x00000000002CCFB4 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002CCFBC string=0x00000000002CCFC0 "@"
 *   insn=0x00000000002CCFC0 string=0x00000000002CCFC4 ""
 *   insn=0x00000000002CCFC4 string=0x00000000002CCFC8 ""
 *   insn=0x00000000002CCFCC string=0x00000000002CCFD0 ""
 *   insn=0x00000000002CCFD0 string=0x00000000002CCFD4 ""
 *   insn=0x00000000002CCFE4 string=0x00000000002CCFE8 ":"
 *   insn=0x00000000002CCFE8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002CCFF0 string=0x00000000002CCFF4 "7"
 *   insn=0x00000000002CCFF8 string=0x00000000002CCFFC "2"
 *   insn=0x00000000002CD010 string=0x00000000002CD014 ""
 *   insn=0x00000000002CD018 string=0x00000000002CD01C "`F@"
 *   insn=0x00000000002CD01C string=0x00000000002CD020 "\n"
 *   insn=0x00000000002CD020 string=0x00000000002CD024 "\tA"
 *   insn=0x00000000002CD024 string=0x00000000002CD028 "@"
 *   insn=0x00000000002CD028 string=0x00000000002CD02C ""
 *   insn=0x00000000002CD030 string=0x00000000002CD034 "i"
 *   insn=0x00000000002CD034 string=0x00000000002CD038 "`"
 *   insn=0x00000000002CD038 string=0x00000000002CD03C "@"
 *   insn=0x00000000002CD03C string=0x00000000002CD044 "`B@"
 *   insn=0x00000000002CD048 string=0x00000000002CD04C "@"
 *   insn=0x00000000002CD04C string=0x00000000002CD050 ""
 *   insn=0x00000000002CD050 string=0x00000000002CD054 ""
 *   insn=0x00000000002CD058 string=0x00000000002CD05C ""
 *   insn=0x00000000002CD05C string=0x00000000002CD060 ""
 *   insn=0x00000000002CD07C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002CD0A0 string=0x00000000002CD0A4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WeaponTrailComponent::~WeaponTrailComponent(Caver::WeaponTrailComponent *this)
{
  void *v2; // x0
  __int128 v3; // q0
  _DWORD *v4; // x0
  int v5; // w8

  v2 = (void *)*((_QWORD *)this + 17);
  *(_QWORD *)&v3 = &off_6C5908;
  *((_QWORD *)&v3 + 1) = &off_6C5948;
  *(_QWORD *)this = off_6C57F0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
    operator delete[](v2);
  v4 = (_DWORD *)*((_QWORD *)this + 16);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Caver::Component::~Component(this);
}

