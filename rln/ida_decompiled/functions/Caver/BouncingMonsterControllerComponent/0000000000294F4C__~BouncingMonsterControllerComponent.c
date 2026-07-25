/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294F4C
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponentD2Ev
 * Demangled: Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001F7C00  Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7C00  Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002950D8  Caver::BouncingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 52
 *   insn=0x0000000000294F58 string=0x0000000000294F5C "mD"
 *   insn=0x0000000000294F60 string=0x0000000000294F64 "`"
 *   insn=0x0000000000294F64 string=0x0000000000294F68 "\n"
 *   insn=0x0000000000294F68 string=0x0000000000294F6C "\tA"
 *   insn=0x0000000000294F6C string=0x0000000000294F70 "@"
 *   insn=0x0000000000294F70 string=0x0000000000294F74 ""
 *   insn=0x0000000000294F78 string=0x0000000000294F7C "i"
 *   insn=0x0000000000294F7C string=0x0000000000294F80 "`"
 *   insn=0x0000000000294F84 string=0x0000000000294F88 "@"
 *   insn=0x0000000000294F88 string=0x0000000000294F8C ""
 *   insn=0x0000000000294F8C string=0x0000000000294F90 ""
 *   insn=0x0000000000294F94 string=0x0000000000294F98 ""
 *   insn=0x0000000000294F98 string=0x0000000000294F9C ""
 *   insn=0x0000000000294FA4 string=0x0000000000294FA8 "`~@"
 *   insn=0x0000000000294FA8 string=0x0000000000294FAC ""
 *   insn=0x0000000000294FB0 string=0x0000000000294FB4 "tv"
 *   insn=0x0000000000294FB8 string=0x0000000000294FBC "@"
 *   insn=0x0000000000294FB8 string=0x0000000000294FD8 "`r@"
 *   insn=0x0000000000294FBC string=0x0000000000294FC0 ""
 *   insn=0x0000000000294FC0 string=0x0000000000294FC4 ""
 *   insn=0x0000000000294FC8 string=0x0000000000294FCC ""
 *   insn=0x0000000000294FCC string=0x0000000000294FD0 ""
 *   insn=0x0000000000294FD8 string=0x0000000000294FDC "tj"
 *   insn=0x0000000000294FE0 string=0x0000000000294FE4 "@"
 *   insn=0x0000000000294FE4 string=0x0000000000294FE8 ""
 *   insn=0x0000000000294FE8 string=0x0000000000294FEC ""
 *   insn=0x0000000000294FF0 string=0x0000000000294FF4 ""
 *   insn=0x0000000000294FF4 string=0x0000000000294FF8 ""
 *   insn=0x0000000000295008 string=0x000000000029500C "="
 *   insn=0x0000000000295024 string=0x0000000000295028 "`~@"
 *   insn=0x0000000000295028 string=0x000000000029502C ""
 *   insn=0x000000000029502C string=0x0000000000295030 "A"
 *   insn=0x0000000000295030 string=0x0000000000295034 "hv"
 *   insn=0x0000000000295038 string=0x000000000029503C "@"
 *   insn=0x000000000029503C string=0x0000000000295040 ""
 *   insn=0x0000000000295040 string=0x0000000000295044 ""
 *   insn=0x0000000000295048 string=0x000000000029504C ""
 *   insn=0x000000000029504C string=0x0000000000295050 ""
 *   insn=0x0000000000295058 string=0x000000000029505C "`r@"
 *   insn=0x000000000029505C string=0x0000000000295060 ""
 *   insn=0x0000000000295060 string=0x0000000000295064 "A"
 *   insn=0x0000000000295064 string=0x0000000000295068 "hj"
 *   insn=0x000000000029506C string=0x0000000000295070 "@"
 *   insn=0x0000000000295070 string=0x0000000000295074 ""
 *   insn=0x0000000000295074 string=0x0000000000295078 ""
 *   insn=0x000000000029507C string=0x0000000000295080 ""
 *   insn=0x0000000000295080 string=0x0000000000295084 ""
 *   insn=0x0000000000295094 string=0x0000000000295098 ""
 *   insn=0x00000000002950B0 string=0x00000000001F7C00 "0'"
 *   insn=0x00000000002950BC string=0x00000000002950C0 "|"
 *   insn=0x00000000002950C0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002950C8 string=0x00000000002950CC "y"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BouncingMonsterControllerComponent::~BouncingMonsterControllerComponent(
        Caver::BouncingMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 32);
  *(_QWORD *)&v3 = &off_6C1908;
  *((_QWORD *)&v3 + 1) = &off_6C1948;
  *(_QWORD *)this = off_6C17F0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 29) = &off_6BDF68;
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

