/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000296B90
 * Mangled: _ZN5Caver34ChargingMonsterControllerComponentD2Ev
 * Demangled: Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *
 * Callers: 1
 *   0x0000000000203840  Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x0000000000203840  Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000296E38  Caver::ChargingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 100
 *   insn=0x0000000000296B9C string=0x0000000000296BA0 "h""
 *   insn=0x0000000000296BA0 string=0x0000000000296BA4 "ED"
 *   insn=0x0000000000296BA8 string=0x0000000000296BAC "`"
 *   insn=0x0000000000296BAC string=0x0000000000296BB0 "\n"
 *   insn=0x0000000000296BB0 string=0x0000000000296BB4 "\tA"
 *   insn=0x0000000000296BB4 string=0x0000000000296BB8 "@"
 *   insn=0x0000000000296BB8 string=0x0000000000296BBC ""
 *   insn=0x0000000000296BC0 string=0x0000000000296BC4 "i"
 *   insn=0x0000000000296BC4 string=0x0000000000296BC8 "`"
 *   insn=0x0000000000296BCC string=0x0000000000296BD0 "@"
 *   insn=0x0000000000296BCC string=0x0000000000296BEC "`"
 *   insn=0x0000000000296BD0 string=0x0000000000296BD4 ""
 *   insn=0x0000000000296BD4 string=0x0000000000296BD8 ""
 *   insn=0x0000000000296BDC string=0x0000000000296BE0 ""
 *   insn=0x0000000000296BE0 string=0x0000000000296BE4 ""
 *   insn=0x0000000000296BF0 string=0x0000000000296BF4 "@"
 *   insn=0x0000000000296BF0 string=0x0000000000296C10 "`"
 *   insn=0x0000000000296BF4 string=0x0000000000296BF8 ""
 *   insn=0x0000000000296BF8 string=0x0000000000296BFC ""
 *   insn=0x0000000000296C00 string=0x0000000000296C04 ""
 *   insn=0x0000000000296C04 string=0x0000000000296C08 ""
 *   insn=0x0000000000296C14 string=0x0000000000296C18 "@"
 *   insn=0x0000000000296C14 string=0x0000000000296C34 "t""
 *   insn=0x0000000000296C18 string=0x0000000000296C1C ""
 *   insn=0x0000000000296C1C string=0x0000000000296C20 ""
 *   insn=0x0000000000296C24 string=0x0000000000296C28 ""
 *   insn=0x0000000000296C28 string=0x0000000000296C2C ""
 *   insn=0x0000000000296C34 string=0x0000000000296C38 "`"
 *   insn=0x0000000000296C40 string=0x0000000000296C44 "u"
 *   insn=0x0000000000296C48 string=0x0000000000296C4C "@"
 *   insn=0x0000000000296C48 string=0x0000000000296C68 "`~@"
 *   insn=0x0000000000296C4C string=0x0000000000296C50 ""
 *   insn=0x0000000000296C50 string=0x0000000000296C54 ""
 *   insn=0x0000000000296C58 string=0x0000000000296C5C ""
 *   insn=0x0000000000296C5C string=0x0000000000296C60 ""
 *   insn=0x0000000000296C68 string=0x0000000000296C6C "uv"
 *   insn=0x0000000000296C70 string=0x0000000000296C74 "@"
 *   insn=0x0000000000296C70 string=0x0000000000296C90 "`r@"
 *   insn=0x0000000000296C74 string=0x0000000000296C78 ""
 *   insn=0x0000000000296C78 string=0x0000000000296C7C ""
 *   insn=0x0000000000296C80 string=0x0000000000296C84 ""
 *   insn=0x0000000000296C84 string=0x0000000000296C88 ""
 *   insn=0x0000000000296C94 string=0x0000000000296C98 "hj"
 *   insn=0x0000000000296C9C string=0x0000000000296CA0 "@"
 *   insn=0x0000000000296CA0 string=0x0000000000296CA4 ""
 *   insn=0x0000000000296CA4 string=0x0000000000296CA8 ""
 *   insn=0x0000000000296CAC string=0x0000000000296CB0 ""
 *   insn=0x0000000000296CB0 string=0x0000000000296CB4 ""
 *   insn=0x0000000000296CC8 string=0x0000000000296CCC ""
 *   insn=0x0000000000296CD0 string=0x0000000000296CD4 "F"
 *   insn=0x0000000000296CD8 string=0x0000000000296CDC "7"
 *   insn=0x0000000000296CDC string=0x0000000000296DB8 "h""
 *   insn=0x0000000000296CE0 string=0x0000000000296CE4 "("
 *   insn=0x0000000000296CE4 string=0x0000000000296D84 "h""
 *   insn=0x0000000000296CEC string=0x0000000000296D50 "h""
 *   insn=0x0000000000296CF0 string=0x0000000000296CF4 "`"
 *   insn=0x0000000000296CF8 string=0x0000000000296D34 "@"
 *   insn=0x0000000000296D04 string=0x0000000000296D08 "("
 *   insn=0x0000000000296D08 string=0x0000000000296D0C "\t\t@"
 *   insn=0x0000000000296D08 string=0x0000000000296D2C "`"
 *   insn=0x0000000000296D0C string=0x0000000000296D10 ")"
 *   insn=0x0000000000296D10 string=0x0000000000296D14 "\t\t"
 *   insn=0x0000000000296D18 string=0x0000000000296D1C "\t"
 *   insn=0x0000000000296D1C string=0x0000000000296D20 ")"
 *   insn=0x0000000000296D24 string=0x0000000000296D28 " "
 *   insn=0x0000000000296D34 string=0x0000000000296D38 ""
 *   insn=0x0000000000296D38 string=0x0000000000296D3C ""
 *   insn=0x0000000000296D40 string=0x0000000000296D44 ""
 *   insn=0x0000000000296D44 string=0x0000000000296D48 ""
 *   insn=0x0000000000296D50 string=0x0000000000296D54 "`"
 *   insn=0x0000000000296D54 string=0x0000000000296D58 ""
 *   insn=0x0000000000296D58 string=0x0000000000296D5C "A"
 *   insn=0x0000000000296D5C string=0x0000000000296D60 "h"
 *   insn=0x0000000000296D64 string=0x0000000000296D68 "@"
 *   insn=0x0000000000296D68 string=0x0000000000296D6C ""
 *   insn=0x0000000000296D6C string=0x0000000000296D70 ""
 *   insn=0x0000000000296D74 string=0x0000000000296D78 ""
 *   insn=0x0000000000296D78 string=0x0000000000296D7C ""
 *   insn=0x0000000000296D84 string=0x0000000000296D88 "`~@"
 *   insn=0x0000000000296D88 string=0x0000000000296D8C ""
 *   insn=0x0000000000296D8C string=0x0000000000296D90 "A"
 *   insn=0x0000000000296D90 string=0x0000000000296D94 "hv"
 *   insn=0x0000000000296D98 string=0x0000000000296D9C "@"
 *   insn=0x0000000000296D9C string=0x0000000000296DA0 ""
 *   insn=0x0000000000296DA0 string=0x0000000000296DA4 ""
 *   insn=0x0000000000296DA8 string=0x0000000000296DAC ""
 *   insn=0x0000000000296DAC string=0x0000000000296DB0 ""
 *   insn=0x0000000000296DB8 string=0x0000000000296DBC "`r@"
 *   insn=0x0000000000296DBC string=0x0000000000296DC0 ""
 *   insn=0x0000000000296DC0 string=0x0000000000296DC4 "A"
 *   insn=0x0000000000296DC4 string=0x0000000000296DC8 "hj"
 *   insn=0x0000000000296DCC string=0x0000000000296DD0 "@"
 *   insn=0x0000000000296DD0 string=0x0000000000296DD4 ""
 *   insn=0x0000000000296DD4 string=0x0000000000296DD8 ""
 *   insn=0x0000000000296DDC string=0x0000000000296DE0 ""
 *   insn=0x0000000000296DE0 string=0x0000000000296DE4 ""
 *   insn=0x0000000000296DF8 string=0x0000000000296DFC "T"
 *   insn=0x0000000000296E1C string=0x0000000000296E20 "$"
 *   insn=0x0000000000296E20 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000296E28 string=0x0000000000296E2C "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ChargingMonsterControllerComponent::~ChargingMonsterControllerComponent(
        Caver::ChargingMonsterControllerComponent *this)
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
  _DWORD *v13; // x0
  int v14; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)&v3 = &off_6C1AA8;
  *((_QWORD *)&v3 + 1) = &off_6C1AE8;
  *(_QWORD *)this = off_6C1990;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 36);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 35);
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 32) = &off_6BDF68;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  v11 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 29) = &off_6BDF68;
  if ( v11 )
  {
    v12 = v11[2] - 1;
    v11[2] = v12;
    if ( !v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  v13 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v13 )
  {
    v14 = v13[2] - 1;
    v13[2] = v14;
    if ( !v14 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

