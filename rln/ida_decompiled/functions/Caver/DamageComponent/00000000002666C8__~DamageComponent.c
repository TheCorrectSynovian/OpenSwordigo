/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002666C8
 * Mangled: _ZN5Caver15DamageComponentD2Ev
 * Demangled: Caver::DamageComponent::~DamageComponent()
 *
 * Callers: 1
 *   0x00000000001F40C0  Caver::DamageComponent::~DamageComponent()
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000266860  Caver::DamageComponent::~DamageComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000002666D8 string=0x00000000002666DC ""
 *   insn=0x00000000002666E0 string=0x00000000002666E4 "t"
 *   insn=0x00000000002666E4 string=0x00000000002666E8 "\n"
 *   insn=0x00000000002666E8 string=0x00000000002666EC "\tA"
 *   insn=0x00000000002666EC string=0x00000000002666F0 "@"
 *   insn=0x00000000002666F0 string=0x00000000002666F4 ""
 *   insn=0x00000000002666FC string=0x0000000000266700 "i"
 *   insn=0x0000000000266700 string=0x0000000000266704 "`"
 *   insn=0x0000000000266708 string=0x0000000000266740 "t"
 *   insn=0x0000000000266710 string=0x0000000000266714 "@"
 *   insn=0x0000000000266714 string=0x0000000000266718 ""
 *   insn=0x0000000000266718 string=0x000000000026671C ""
 *   insn=0x0000000000266720 string=0x0000000000266724 ""
 *   insn=0x0000000000266724 string=0x0000000000266728 ""
 *   insn=0x0000000000266738 string=0x000000000026673C "tF@"
 *   insn=0x0000000000266740 string=0x000000000026674C "tVG"
 *   insn=0x0000000000266748 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000266754 string=0x000000000026678C "t"
 *   insn=0x000000000026675C string=0x0000000000266760 "@"
 *   insn=0x0000000000266760 string=0x0000000000266764 ""
 *   insn=0x0000000000266764 string=0x0000000000266768 ""
 *   insn=0x000000000026676C string=0x0000000000266770 ""
 *   insn=0x0000000000266770 string=0x0000000000266774 ""
 *   insn=0x0000000000266784 string=0x0000000000266788 "t:@"
 *   insn=0x00000000002667A4 string=0x00000000002667A8 "JO"
 *   insn=0x00000000002667A8 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002667B0 string=0x00000000002667B4 "h"
 *   insn=0x00000000002667C0 string=0x00000000002667C4 "CO"
 *   insn=0x00000000002667C8 string=0x00000000002667CC ">l"
 *   insn=0x00000000002667D8 string=0x00000000002667DC "hF@"
 *   insn=0x00000000002667E0 string=0x00000000002667E4 "h"
 *   insn=0x00000000002667E4 string=0x00000000002667F0 "uZG"
 *   insn=0x0000000000266800 string=0x0000000000266804 "@"
 *   insn=0x0000000000266804 string=0x0000000000266808 ""
 *   insn=0x0000000000266808 string=0x000000000026680C ""
 *   insn=0x0000000000266810 string=0x0000000000266814 ""
 *   insn=0x0000000000266814 string=0x0000000000266818 ""
 *   insn=0x0000000000266828 string=0x000000000026682C "u:@"
 *   insn=0x0000000000266840 string=0x0000000000266844 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::DamageComponent::~DamageComponent(Caver::DamageComponent *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x21
  __int128 v4; // q0
  _DWORD *v5; // x0
  int v6; // w8
  _QWORD *v7; // x20
  _QWORD *v8; // x21
  _DWORD *v9; // x0
  int v10; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 17);
  v3 = (_QWORD *)*((_QWORD *)this + 18);
  *(_QWORD *)&v4 = &off_6BE668;
  *((_QWORD *)&v4 + 1) = &off_6BE6A8;
  *(_QWORD *)this = off_6BE550;
  *((_OWORD *)this + 1) = v4;
  if ( v2 != v3 )
  {
    do
    {
      v5 = (_DWORD *)v2[1];
      if ( v5 )
      {
        v6 = v5[2] - 1;
        v5[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v2 += 8;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 17);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 14);
  v8 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v7 != v8 )
  {
    do
    {
      v9 = (_DWORD *)v7[1];
      if ( v9 )
      {
        v10 = v9[2] - 1;
        v9[2] = v10;
        if ( !v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      }
      v7 += 8;
    }
    while ( v8 != v7 );
    v7 = (_QWORD *)*((_QWORD *)this + 14);
  }
  if ( v7 )
    operator delete(v7);
  Caver::Component::~Component(this);
}

