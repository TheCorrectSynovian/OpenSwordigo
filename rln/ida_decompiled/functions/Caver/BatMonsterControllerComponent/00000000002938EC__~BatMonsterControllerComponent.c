/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002938EC
 * Mangled: _ZN5Caver29BatMonsterControllerComponentD2Ev
 * Demangled: Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *
 * Callers: 1
 *   0x00000000001FFFC0  Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFFC0  Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent()
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000293A24  Caver::BatMonsterControllerComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 39
 *   insn=0x00000000002938F8 string=0x00000000002938FC "q@"
 *   insn=0x0000000000293904 string=0x0000000000293908 "))E"
 *   insn=0x0000000000293908 string=0x000000000029390C "`~@"
 *   insn=0x000000000029390C string=0x0000000000293910 ""
 *   insn=0x0000000000293910 string=0x0000000000293914 "\nA"
 *   insn=0x0000000000293914 string=0x0000000000293918 ""
 *   insn=0x0000000000293918 string=0x000000000029391C "`"
 *   insn=0x000000000029391C string=0x0000000000293920 ")A"
 *   insn=0x0000000000293924 string=0x0000000000293928 "j"
 *   insn=0x0000000000293928 string=0x000000000029392C "`"
 *   insn=0x000000000029392C string=0x0000000000293930 "iv"
 *   insn=0x0000000000293934 string=0x0000000000293938 "@"
 *   insn=0x0000000000293938 string=0x000000000029393C ""
 *   insn=0x000000000029393C string=0x0000000000293940 ""
 *   insn=0x0000000000293944 string=0x0000000000293948 ""
 *   insn=0x0000000000293948 string=0x000000000029394C ""
 *   insn=0x0000000000293954 string=0x0000000000293958 "`r@"
 *   insn=0x0000000000293958 string=0x000000000029395C ""
 *   insn=0x000000000029395C string=0x0000000000293960 "A"
 *   insn=0x0000000000293960 string=0x0000000000293964 "hj"
 *   insn=0x0000000000293968 string=0x000000000029396C "@"
 *   insn=0x000000000029396C string=0x0000000000293970 ""
 *   insn=0x0000000000293970 string=0x0000000000293974 ""
 *   insn=0x0000000000293978 string=0x000000000029397C ""
 *   insn=0x000000000029397C string=0x0000000000293980 ""
 *   insn=0x00000000002939A4 string=0x00000000002939A8 "`r@"
 *   insn=0x00000000002939A8 string=0x00000000002939AC ""
 *   insn=0x00000000002939AC string=0x00000000002939B0 "A"
 *   insn=0x00000000002939B0 string=0x00000000002939B4 "hj"
 *   insn=0x00000000002939B8 string=0x00000000002939BC "@"
 *   insn=0x00000000002939BC string=0x00000000002939C0 ""
 *   insn=0x00000000002939C0 string=0x00000000002939C4 ""
 *   insn=0x00000000002939C8 string=0x00000000002939CC ""
 *   insn=0x00000000002939CC string=0x00000000002939D0 ""
 *   insn=0x00000000002939E4 string=0x00000000002939E8 "Y"
 *   insn=0x00000000002939F8 string=0x00000000002939FC "q"
 *   insn=0x0000000000293A08 string=0x0000000000293A0C ")"
 *   insn=0x0000000000293A0C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000293A14 string=0x0000000000293A18 "&"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BatMonsterControllerComponent::~BatMonsterControllerComponent(
        Caver::BatMonsterControllerComponent *this)
{
  _DWORD *v2; // x0
  __int128 v3; // q0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  v2 = (_DWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)&v3 = &off_6C16C8;
  *((_QWORD *)&v3 + 1) = &off_6C1708;
  *(_QWORD *)this = off_6C15B0;
  *((_OWORD *)this + 1) = v3;
  *((_QWORD *)this + 29) = off_6BE248;
  if ( v2 )
  {
    v4 = v2[2] - 1;
    v2[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 26) = &off_6BDF68;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::MonsterControllerComponent::~MonsterControllerComponent(this);
}

