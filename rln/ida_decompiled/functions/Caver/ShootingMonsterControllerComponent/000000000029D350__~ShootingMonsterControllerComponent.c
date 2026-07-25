/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029D350
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponentD2Ev
 * Demangled: Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *
 * Callers: 1
 *   0x0000000000202130  Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202130  Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000029D530  Caver::ShootingMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 70
 *   insn=0x000000000029D358 string=0x000000000029D35C "H""
 *   insn=0x000000000029D35C string=0x000000000029D360 ""
 *   insn=0x000000000029D364 string=0x000000000029D368 "`"
 *   insn=0x000000000029D368 string=0x000000000029D36C "\n"
 *   insn=0x000000000029D36C string=0x000000000029D370 "\tA"
 *   insn=0x000000000029D370 string=0x000000000029D374 "@"
 *   insn=0x000000000029D374 string=0x000000000029D378 ""
 *   insn=0x000000000029D37C string=0x000000000029D380 "i"
 *   insn=0x000000000029D380 string=0x000000000029D384 "`"
 *   insn=0x000000000029D388 string=0x000000000029D38C "@"
 *   insn=0x000000000029D388 string=0x000000000029D3A8 "`"
 *   insn=0x000000000029D38C string=0x000000000029D390 ""
 *   insn=0x000000000029D390 string=0x000000000029D394 ""
 *   insn=0x000000000029D398 string=0x000000000029D39C ""
 *   insn=0x000000000029D39C string=0x000000000029D3A0 ""
 *   insn=0x000000000029D3AC string=0x000000000029D3B0 "@"
 *   insn=0x000000000029D3AC string=0x000000000029D3CC "H""
 *   insn=0x000000000029D3B0 string=0x000000000029D3B4 ""
 *   insn=0x000000000029D3B4 string=0x000000000029D3B8 ""
 *   insn=0x000000000029D3BC string=0x000000000029D3C0 ""
 *   insn=0x000000000029D3C0 string=0x000000000029D3C4 ""
 *   insn=0x000000000029D3CC string=0x000000000029D3D0 "`~@"
 *   insn=0x000000000029D3D0 string=0x000000000029D3D4 ""
 *   insn=0x000000000029D3D8 string=0x000000000029D3DC "tv"
 *   insn=0x000000000029D3E0 string=0x000000000029D3E4 "@"
 *   insn=0x000000000029D3E0 string=0x000000000029D400 "`r@"
 *   insn=0x000000000029D3E4 string=0x000000000029D3E8 ""
 *   insn=0x000000000029D3E8 string=0x000000000029D3EC ""
 *   insn=0x000000000029D3F0 string=0x000000000029D3F4 ""
 *   insn=0x000000000029D3F4 string=0x000000000029D3F8 ""
 *   insn=0x000000000029D400 string=0x000000000029D404 "tj"
 *   insn=0x000000000029D408 string=0x000000000029D40C "@"
 *   insn=0x000000000029D40C string=0x000000000029D410 ""
 *   insn=0x000000000029D410 string=0x000000000029D414 ""
 *   insn=0x000000000029D418 string=0x000000000029D41C ""
 *   insn=0x000000000029D41C string=0x000000000029D420 ""
 *   insn=0x000000000029D430 string=0x000000000029D434 "3"
 *   insn=0x000000000029D438 string=0x000000000029D43C "*"
 *   insn=0x000000000029D440 string=0x000000000029D444 ""
 *   insn=0x000000000029D444 string=0x000000000029D4B0 "H""
 *   insn=0x000000000029D44C string=0x000000000029D47C "H""
 *   insn=0x000000000029D454 string=0x000000000029D458 "("
 *   insn=0x000000000029D458 string=0x000000000029D45C "\t\t@"
 *   insn=0x000000000029D45C string=0x000000000029D460 ")"
 *   insn=0x000000000029D460 string=0x000000000029D464 "\t\t"
 *   insn=0x000000000029D468 string=0x000000000029D46C "\t"
 *   insn=0x000000000029D46C string=0x000000000029D470 ")"
 *   insn=0x000000000029D474 string=0x000000000029D478 " "
 *   insn=0x000000000029D47C string=0x000000000029D480 "`~@"
 *   insn=0x000000000029D480 string=0x000000000029D484 ""
 *   insn=0x000000000029D484 string=0x000000000029D488 "A"
 *   insn=0x000000000029D488 string=0x000000000029D48C "hv"
 *   insn=0x000000000029D490 string=0x000000000029D494 "@"
 *   insn=0x000000000029D494 string=0x000000000029D498 ""
 *   insn=0x000000000029D498 string=0x000000000029D49C ""
 *   insn=0x000000000029D4A0 string=0x000000000029D4A4 ""
 *   insn=0x000000000029D4A4 string=0x000000000029D4A8 ""
 *   insn=0x000000000029D4B0 string=0x000000000029D4B4 "`r@"
 *   insn=0x000000000029D4B4 string=0x000000000029D4B8 ""
 *   insn=0x000000000029D4B8 string=0x000000000029D4BC "A"
 *   insn=0x000000000029D4BC string=0x000000000029D4C0 "hj"
 *   insn=0x000000000029D4C4 string=0x000000000029D4C8 "@"
 *   insn=0x000000000029D4C8 string=0x000000000029D4CC ""
 *   insn=0x000000000029D4CC string=0x000000000029D4D0 ""
 *   insn=0x000000000029D4D4 string=0x000000000029D4D8 ""
 *   insn=0x000000000029D4D8 string=0x000000000029D4DC ""
 *   insn=0x000000000029D504 string=0x000000000029D508 "\n"
 *   insn=0x000000000029D514 string=0x000000000029D518 "fg"
 *   insn=0x000000000029D518 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000029D520 string=0x000000000029D524 "cg"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShootingMonsterControllerComponent::~ShootingMonsterControllerComponent(
        Caver::ShootingMonsterControllerComponent *this)
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

  v2 = (_DWORD *)*((_QWORD *)this + 34);
  *(_QWORD *)&v3 = &off_6C2508;
  *((_QWORD *)&v3 + 1) = &off_6C2548;
  *(_QWORD *)this = off_6C23F0;
  *((_OWORD *)this + 1) = v3;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 32);
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v7 = (_DWORD *)*((_QWORD *)this + 31);
  *((_QWORD *)this + 29) = &off_6BDF68;
  if ( v7 )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v9 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v9 )
  {
    v10 = v9[2] - 1;
    v9[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

