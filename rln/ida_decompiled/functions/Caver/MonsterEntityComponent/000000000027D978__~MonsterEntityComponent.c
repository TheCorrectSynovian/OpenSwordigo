/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027D978
 * Mangled: _ZN5Caver22MonsterEntityComponentD2Ev
 * Demangled: Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callers: 1
 *   0x00000000001FFC40  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *
 * Callees: 6
 *   0x00000000001F7640  Caver::PhysicsObjectState::~PhysicsObjectState()
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x00000000001FFB70  Caver::Program::~Program()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000027DB6C  Caver::MonsterEntityComponent::~MonsterEntityComponent()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 73
 *   insn=0x000000000027D980 string=0x000000000027D984 "(#"
 *   insn=0x000000000027D984 string=0x000000000027D988 ""
 *   insn=0x000000000027D98C string=0x000000000027D990 "`"
 *   insn=0x000000000027D990 string=0x000000000027D994 "\n"
 *   insn=0x000000000027D994 string=0x000000000027D998 "\tA"
 *   insn=0x000000000027D998 string=0x000000000027D99C "@"
 *   insn=0x000000000027D99C string=0x000000000027D9A0 ""
 *   insn=0x000000000027D9A4 string=0x000000000027D9A8 "i"
 *   insn=0x000000000027D9A8 string=0x000000000027D9AC "`"
 *   insn=0x000000000027D9B0 string=0x000000000027D9B4 "@"
 *   insn=0x000000000027D9B0 string=0x000000000027D9D0 "`"
 *   insn=0x000000000027D9B4 string=0x000000000027D9B8 ""
 *   insn=0x000000000027D9B8 string=0x000000000027D9BC ""
 *   insn=0x000000000027D9C0 string=0x000000000027D9C4 ""
 *   insn=0x000000000027D9C4 string=0x000000000027D9C8 ""
 *   insn=0x000000000027D9D4 string=0x000000000027D9D8 "@"
 *   insn=0x000000000027D9D4 string=0x000000000027D9F4 "`b"
 *   insn=0x000000000027D9D8 string=0x000000000027D9DC ""
 *   insn=0x000000000027D9DC string=0x000000000027D9E0 ""
 *   insn=0x000000000027D9E4 string=0x000000000027D9E8 ""
 *   insn=0x000000000027D9E8 string=0x000000000027D9EC ""
 *   insn=0x000000000027D9F4 string=0x000000000027D9F8 "^"
 *   insn=0x000000000027D9F8 string=0x000000000027D9FC "`"
 *   insn=0x000000000027D9FC string=0x000000000027DA00 "\"
 *   insn=0x000000000027DA00 string=0x000000000027DA04 "H#"
 *   insn=0x000000000027DA04 string=0x000000000027DA08 "IF"
 *   insn=0x000000000027DA08 string=0x000000000027DA0C "`"
 *   insn=0x000000000027DA0C string=0x000000000027DA10 "\n"
 *   insn=0x000000000027DA10 string=0x000000000027DA14 "\tA"
 *   insn=0x000000000027DA14 string=0x000000000027DA18 "@"
 *   insn=0x000000000027DA18 string=0x000000000027DA1C ""
 *   insn=0x000000000027DA20 string=0x000000000027DA24 "i"
 *   insn=0x000000000027DA24 string=0x000000000027DA28 "`"
 *   insn=0x000000000027DA2C string=0x000000000027DA30 "@"
 *   insn=0x000000000027DA2C string=0x000000000027DA4C "`"
 *   insn=0x000000000027DA30 string=0x000000000027DA34 ""
 *   insn=0x000000000027DA34 string=0x000000000027DA38 ""
 *   insn=0x000000000027DA3C string=0x000000000027DA40 ""
 *   insn=0x000000000027DA40 string=0x000000000027DA44 ""
 *   insn=0x000000000027DA50 string=0x00000000001F7640 "0'"
 *   insn=0x000000000027DA60 string=0x00000000001FA4D0 "0'"
 *   insn=0x000000000027DA64 string=0x000000000027DA68 "`"
 *   insn=0x000000000027DA78 string=0x000000000027DAA8 "`b"
 *   insn=0x000000000027DA80 string=0x000000000027DA84 "("
 *   insn=0x000000000027DA84 string=0x000000000027DA88 "\t\t@"
 *   insn=0x000000000027DA88 string=0x000000000027DA8C ")"
 *   insn=0x000000000027DA8C string=0x000000000027DA90 "\t\t"
 *   insn=0x000000000027DA94 string=0x000000000027DA98 "\t"
 *   insn=0x000000000027DA98 string=0x000000000027DA9C ")"
 *   insn=0x000000000027DAA0 string=0x000000000027DAA4 " "
 *   insn=0x000000000027DAA8 string=0x000000000027DAAC "1"
 *   insn=0x000000000027DAAC string=0x000000000027DAB0 "\t"
 *   insn=0x000000000027DAB0 string=0x000000000027DAD4 "`"
 *   insn=0x000000000027DACC string=0x000000000027DADC "H#"
 *   insn=0x000000000027DAD4 string=0x000000000027DAD8 "&"
 *   insn=0x000000000027DADC string=0x000000000027DAE0 "IF"
 *   insn=0x000000000027DAE0 string=0x000000000027DAE4 "`"
 *   insn=0x000000000027DAE4 string=0x000000000027DAE8 "\n"
 *   insn=0x000000000027DAE8 string=0x000000000027DAEC "\tA"
 *   insn=0x000000000027DAEC string=0x000000000027DAF0 "@"
 *   insn=0x000000000027DAF0 string=0x000000000027DAF4 ""
 *   insn=0x000000000027DAF8 string=0x000000000027DAFC "i"
 *   insn=0x000000000027DAFC string=0x000000000027DB00 "`"
 *   insn=0x000000000027DB04 string=0x000000000027DB08 "@"
 *   insn=0x000000000027DB04 string=0x000000000027DB24 "`"
 *   insn=0x000000000027DB08 string=0x000000000027DB0C ""
 *   insn=0x000000000027DB0C string=0x000000000027DB10 ""
 *   insn=0x000000000027DB14 string=0x000000000027DB18 ""
 *   insn=0x000000000027DB18 string=0x000000000027DB1C ""
 *   insn=0x000000000027DB2C string=0x000000000027DB30 "h"
 *   insn=0x000000000027DB34 string=0x000000000027DB38 "c"
 *   insn=0x000000000027DB3C string=0x000000000027DB40 "`"
 *   insn=0x000000000027DB50 string=0x000000000027DB54 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MonsterEntityComponent::~MonsterEntityComponent(Caver::MonsterEntityComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  __int128 v8; // q0
  int v9; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 50);
  *(_QWORD *)&v3 = &off_6BF8C8;
  *((_QWORD *)&v3 + 1) = &off_6BF908;
  *(_QWORD *)this = off_6BF7B0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 49);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Program::~Program((Caver::MonsterEntityComponent *)((char *)this + 344));
  Caver::Program::~Program((Caver::MonsterEntityComponent *)((char *)this + 304));
  v7 = (_DWORD *)*((_QWORD *)this + 35);
  *(_QWORD *)&v8 = &off_6BE9D8;
  *((_QWORD *)&v8 + 1) = &off_6BEA18;
  *(_QWORD *)this = off_6BE8C0;
  *((_OWORD *)this + 1) = v8;
  if ( v7 )
  {
    v9 = v7[2] - 1;
    v7[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  Caver::PhysicsObjectState::~PhysicsObjectState((Caver::MonsterEntityComponent *)((char *)this + 120));
  Caver::Component::~Component(this);
}

