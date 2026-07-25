/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0CD0
 * Mangled: _ZN5Caver32StaticMonsterControllerComponentD2Ev
 * Demangled: Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *
 * Callers: 1
 *   0x0000000000201220  Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000201220  Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002A0E98  Caver::StaticMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x00000000002A0CE0 string=0x00000000002A0CE4 "(""
 *   insn=0x00000000002A0CE4 string=0x00000000002A0CE8 ""
 *   insn=0x00000000002A0CE8 string=0x00000000002A0CEC "5""
 *   insn=0x00000000002A0CF4 string=0x00000000002A0CF8 "`"
 *   insn=0x00000000002A0CF8 string=0x00000000002A0CFC "\n"
 *   insn=0x00000000002A0CFC string=0x00000000002A0D00 "\tA"
 *   insn=0x00000000002A0D00 string=0x00000000002A0D04 ""
 *   insn=0x00000000002A0D04 string=0x00000000002A0D08 "@"
 *   insn=0x00000000002A0D08 string=0x00000000002A0D0C "t"
 *   insn=0x00000000002A0D14 string=0x00000000002A0D18 "i"
 *   insn=0x00000000002A0D18 string=0x00000000002A0D1C "`"
 *   insn=0x00000000002A0D1C string=0x00000000002A0D20 "w"
 *   insn=0x00000000002A0D20 string=0x00000000002A0D24 " "
 *   insn=0x00000000002A0D24 string=0x00000000002A0D28 "@"
 *   insn=0x00000000002A0D28 string=0x00000000002A0D2C ""
 *   insn=0x00000000002A0D2C string=0x00000000002A0D30 ""
 *   insn=0x00000000002A0D34 string=0x00000000002A0D38 ""
 *   insn=0x00000000002A0D38 string=0x00000000002A0D3C "v"
 *   insn=0x00000000002A0D3C string=0x00000000002A0D40 ""
 *   insn=0x00000000002A0D54 string=0x00000000002A0D58 "@"
 *   insn=0x00000000002A0D54 string=0x00000000002A0D74 "(""
 *   insn=0x00000000002A0D58 string=0x00000000002A0D5C ""
 *   insn=0x00000000002A0D5C string=0x00000000002A0D60 ""
 *   insn=0x00000000002A0D64 string=0x00000000002A0D68 ""
 *   insn=0x00000000002A0D68 string=0x00000000002A0D6C ""
 *   insn=0x00000000002A0D74 string=0x00000000002A0D78 "`r@"
 *   insn=0x00000000002A0D78 string=0x00000000002A0D7C ""
 *   insn=0x00000000002A0D7C string=0x00000000002A0D80 "A"
 *   insn=0x00000000002A0D80 string=0x00000000002A0D84 "hj"
 *   insn=0x00000000002A0D88 string=0x00000000002A0D8C "@"
 *   insn=0x00000000002A0D8C string=0x00000000002A0D90 ""
 *   insn=0x00000000002A0D90 string=0x00000000002A0D94 ""
 *   insn=0x00000000002A0D98 string=0x00000000002A0D9C ""
 *   insn=0x00000000002A0D9C string=0x00000000002A0DA0 ""
 *   insn=0x00000000002A0DE0 string=0x00000000002A0E20 "(""
 *   insn=0x00000000002A0DF4 string=0x00000000002A0DF8 "@"
 *   insn=0x00000000002A0DF8 string=0x00000000002A0DFC ""
 *   insn=0x00000000002A0DFC string=0x00000000002A0E00 ""
 *   insn=0x00000000002A0E04 string=0x00000000002A0E08 ""
 *   insn=0x00000000002A0E08 string=0x00000000002A0E0C ""
 *   insn=0x00000000002A0E20 string=0x00000000002A0E24 "`r@"
 *   insn=0x00000000002A0E24 string=0x00000000002A0E28 ""
 *   insn=0x00000000002A0E28 string=0x00000000002A0E2C "A"
 *   insn=0x00000000002A0E2C string=0x00000000002A0E30 "hj"
 *   insn=0x00000000002A0E34 string=0x00000000002A0E38 "@"
 *   insn=0x00000000002A0E38 string=0x00000000002A0E3C ""
 *   insn=0x00000000002A0E3C string=0x00000000002A0E40 ""
 *   insn=0x00000000002A0E44 string=0x00000000002A0E48 ""
 *   insn=0x00000000002A0E48 string=0x00000000002A0E4C ""
 *   insn=0x00000000002A0E58 string=0x00000000002A0E5C "<"
 *   insn=0x00000000002A0E80 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002A0E88 string=0x00000000002A0E8C "\tY"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StaticMonsterControllerComponent::~StaticMonsterControllerComponent(
        Caver::StaticMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)&v3 = &off_6C2AA8;
  *((_QWORD *)&v3 + 1) = &off_6C2AE8;
  *(_QWORD *)this = off_6C2990;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 32) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  *((_QWORD *)this + 29) = off_6BE248;
  v5 = (_DWORD *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

