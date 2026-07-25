/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000269968
 * Mangled: _ZN5Caver15EntityComponentD2Ev
 * Demangled: Caver::EntityComponent::~EntityComponent()
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FBE10  Caver::PhysicsObjectState::PhysicsObjectState(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 55
 *   insn=0x0000000000269974 string=0x0000000000269978 "IF"
 *   insn=0x000000000026997C string=0x0000000000269980 "`"
 *   insn=0x0000000000269980 string=0x0000000000269984 "\n"
 *   insn=0x0000000000269984 string=0x0000000000269988 "\tA"
 *   insn=0x0000000000269988 string=0x000000000026998C "@"
 *   insn=0x000000000026998C string=0x0000000000269990 ""
 *   insn=0x0000000000269994 string=0x0000000000269998 "i"
 *   insn=0x0000000000269998 string=0x000000000026999C "`"
 *   insn=0x00000000002699A0 string=0x00000000002699A4 "@"
 *   insn=0x00000000002699A0 string=0x00000000002699C0 "`"
 *   insn=0x00000000002699A4 string=0x00000000002699A8 ""
 *   insn=0x00000000002699A8 string=0x00000000002699AC ""
 *   insn=0x00000000002699B0 string=0x00000000002699B4 ""
 *   insn=0x00000000002699B4 string=0x00000000002699B8 ""
 *   insn=0x00000000002699C4 string=0x00000000001F7640 "0'"
 *   insn=0x00000000002699D4 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002699D8 string=0x00000000002699DC "`"
 *   insn=0x00000000002699F8 string=0x00000000002699FC "T"
 *   insn=0x0000000000269A0C string=0x0000000000269A10 "IF"
 *   insn=0x0000000000269A14 string=0x0000000000269A18 "`"
 *   insn=0x0000000000269A18 string=0x0000000000269A1C "\n"
 *   insn=0x0000000000269A1C string=0x0000000000269A20 "\tA"
 *   insn=0x0000000000269A20 string=0x0000000000269A24 "@"
 *   insn=0x0000000000269A24 string=0x0000000000269A28 ""
 *   insn=0x0000000000269A2C string=0x0000000000269A30 "i"
 *   insn=0x0000000000269A30 string=0x0000000000269A34 "`"
 *   insn=0x0000000000269A38 string=0x0000000000269A3C "@"
 *   insn=0x0000000000269A38 string=0x0000000000269A58 "`"
 *   insn=0x0000000000269A3C string=0x0000000000269A40 ""
 *   insn=0x0000000000269A40 string=0x0000000000269A44 ""
 *   insn=0x0000000000269A48 string=0x0000000000269A4C ""
 *   insn=0x0000000000269A4C string=0x0000000000269A50 ""
 *   insn=0x0000000000269A74 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000269A78 string=0x0000000000269A7C "`"
 *   insn=0x0000000000269AA8 string=0x0000000000269AAC "("
 *   insn=0x0000000000269AC8 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000269AD4 string=0x0000000000269AD8 ""
 *   insn=0x0000000000269ADC string=0x0000000000269AE0 "JIF"
 *   insn=0x0000000000269AE4 string=0x0000000000269AE8 "a"
 *   insn=0x0000000000269AEC string=0x0000000000269AF0 "H"
 *   insn=0x0000000000269B04 string=0x0000000000269B08 "?"
 *   insn=0x0000000000269B08 string=0x0000000000269B0C "hr"
 *   insn=0x0000000000269B0C string=0x0000000000269B10 "H"
 *   insn=0x0000000000269B10 string=0x0000000000269B14 "KA"
 *   insn=0x0000000000269B18 string=0x0000000000269B1C "`"
 *   insn=0x0000000000269B1C string=0x0000000000269B20 "k"
 *   insn=0x0000000000269B24 string=0x0000000000269B28 "i~"
 *   insn=0x0000000000269B28 string=0x0000000000269B2C "`"
 *   insn=0x0000000000269B30 string=0x00000000001FBE10 "0'"
 *   insn=0x0000000000269B38 string=0x0000000000269B3C "h"
 *   insn=0x0000000000269B5C string=0x0000000000269B60 "h""
 *   insn=0x0000000000269B70 string=0x0000000000269B74 "hr"
 *   insn=0x0000000000269B78 string=0x0000000000269B7C "h"
 *   insn=0x0000000000269B90 string=0x0000000000269B94 "OB"
 *   insn=0x0000000000269BA0 string=0x0000000000269BA4 "H_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityComponent::~EntityComponent(Caver::EntityComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 35);
  *(_QWORD *)&v3 = &off_6BE9D8;
  *((_QWORD *)&v3 + 1) = &off_6BEA18;
  *(_QWORD *)this = off_6BE8C0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Caver::PhysicsObjectState::~PhysicsObjectState((Caver::EntityComponent *)((char *)this + 120));
  Caver::Component::~Component(this);
}

