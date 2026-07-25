/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003B0C20
 * Mangled: _ZN5Caver8GameData12SkillForNameERKSs
 * Demangled: Caver::GameData::SkillForName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001FFE10  Caver::GameData::SkillForName(std::string const&)
 *
 * Callees: 5
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 26
 *   insn=0x00000000003B0C3C string=0x00000000003B0C40 "W"
 *   insn=0x00000000003B0C64 string=0x00000000003B0C68 "Z"
 *   insn=0x00000000003B0C68 string=0x00000000003B0C6C "{?G"
 *   insn=0x00000000003B0C74 string=0x00000000003B0C78 ","
 *   insn=0x00000000003B0C84 string=0x00000000003B0C88 "a"
 *   insn=0x00000000003B0C88 string=0x00000000003B0C8C "("
 *   insn=0x00000000003B0C8C string=0x00000000003B0C90 "_"
 *   insn=0x00000000003B0C98 string=0x00000000003B0C9C "="
 *   insn=0x00000000003B0C9C string=0x00000000001F5190 "P'"
 *   insn=0x00000000003B0CAC string=0x00000000003B0CB0 "\t"
 *   insn=0x00000000003B0CC0 string=0x00000000003B0D14 ""
 *   insn=0x00000000003B0CC8 string=0x00000000003B0CCC "!"
 *   insn=0x00000000003B0CD8 string=0x00000000003B0CDC "\t"
 *   insn=0x00000000003B0CD8 string=0x00000000003B0CF0 "\t"
 *   insn=0x00000000003B0CDC string=0x00000000003B0CE0 "*"
 *   insn=0x00000000003B0CE0 string=0x00000000003B0CE4 "\n"
 *   insn=0x00000000003B0CEC string=0x00000000003B0CFC "?"
 *   insn=0x00000000003B0CF0 string=0x00000000003B0CF4 "*"
 *   insn=0x00000000003B0CF4 string=0x00000000003B0CF8 "\n"
 *   insn=0x00000000003B0D18 string=0x00000000003B0D1C "@"
 *   insn=0x00000000003B0D24 string=0x00000000003B0D28 "\t"
 *   insn=0x00000000003B0D28 string=0x00000000003B0D2C ")"
 *   insn=0x00000000003B0D2C string=0x00000000003B0D30 "\t"
 *   insn=0x00000000003B0D44 string=0x00000000003B0D48 "!"
 *   insn=0x00000000003B0D48 string=0x00000000003B0D6C "Y"
 *   insn=0x00000000003B0D6C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::GameData::SkillForName(__int64 a1@<X0>, const void **a2@<X1>, _QWORD *a3@<X8>)
{
  _QWORD *v5; // x24
  _QWORD *v6; // x25
  char *v7; // x22
  size_t v8; // x2
  __int64 *v9; // x21
  _BOOL4 v10; // w28
  unsigned int *v11; // x8
  int v12; // w9
  __int64 v13; // x8
  void *v14[3]; // [xsp+8h] [xbp-68h] BYREF

  v14[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD **)(a1 + 48);
  v6 = *(_QWORD **)(a1 + 56);
  if ( v5 == v6 )
  {
LABEL_17:
    *a3 = 0;
    a3[1] = 0;
    return;
  }
  while ( 1 )
  {
    sub_56A528(v14, *v5);
    v7 = (char *)v14[0];
    v9 = (__int64 *)((char *)v14[0] - 24);
    v8 = *((_QWORD *)v14[0] - 3);
    if ( v8 == *((_QWORD *)*a2 - 3) )
    {
      v10 = memcmp(v14[0], *a2, v8) == 0;
      if ( v9 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    else
    {
      v10 = 0;
      if ( v9 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    v11 = (unsigned int *)(v7 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      break;
LABEL_6:
    if ( v10 )
      goto LABEL_15;
LABEL_7:
    v5 += 2;
    if ( v5 == v6 )
      goto LABEL_17;
  }
  operator delete(v9);
  if ( !v10 )
    goto LABEL_7;
LABEL_15:
  *a3 = *v5;
  v13 = v5[1];
  a3[1] = v13;
  if ( v13 )
    ++*(_QWORD *)(v13 + 8);
}

