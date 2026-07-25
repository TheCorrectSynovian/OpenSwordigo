/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD3AC
 * Mangled: _ZN5Caver14CharacterState16HasSkillWithNameERKSs
 * Demangled: Caver::CharacterState::HasSkillWithName(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F34C0  Caver::CharacterState::HasSkillWithName(std::string const&)
 *
 * Callees: 5
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 21
 *   insn=0x00000000003AD3C8 string=0x00000000003AD3CC "V"
 *   insn=0x00000000003AD3EC string=0x00000000003AD3F0 "9"
 *   insn=0x00000000003AD3F0 string=0x00000000003AD3F4 "Z?G"
 *   insn=0x00000000003AD3FC string=0x00000000003AD400 "J"
 *   insn=0x00000000003AD40C string=0x00000000003AD410 "a"
 *   insn=0x00000000003AD410 string=0x00000000003AD414 "("
 *   insn=0x00000000003AD414 string=0x00000000003AD418 "_"
 *   insn=0x00000000003AD420 string=0x00000000003AD424 "["
 *   insn=0x00000000003AD424 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003AD434 string=0x00000000003AD438 "\t"
 *   insn=0x00000000003AD450 string=0x00000000003AD454 "!"
 *   insn=0x00000000003AD460 string=0x00000000003AD464 "\t"
 *   insn=0x00000000003AD460 string=0x00000000003AD478 "\t"
 *   insn=0x00000000003AD464 string=0x00000000003AD468 "*"
 *   insn=0x00000000003AD468 string=0x00000000003AD46C "\n"
 *   insn=0x00000000003AD474 string=0x00000000003AD484 "?"
 *   insn=0x00000000003AD478 string=0x00000000003AD47C "*"
 *   insn=0x00000000003AD47C string=0x00000000003AD480 "\n"
 *   insn=0x00000000003AD4B0 string=0x00000000003AD4B4 "!"
 *   insn=0x00000000003AD4B4 string=0x00000000003AD4D8 "~#"
 *   insn=0x00000000003AD4D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::HasSkillWithName(__int64 a1, const void **a2)
{
  _QWORD *v3; // x23
  _QWORD *v4; // x24
  char *v5; // x21
  size_t v6; // x2
  __int64 *v7; // x20
  _BOOL4 v8; // w27
  unsigned int *v9; // x8
  int v10; // w9
  void *v12[3]; // [xsp+8h] [xbp-68h] BYREF

  v12[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *(_QWORD **)(a1 + 64);
  v4 = *(_QWORD **)(a1 + 72);
  while ( v3 != v4 )
  {
    sub_56A528(v12, *v3);
    v5 = (char *)v12[0];
    v7 = (__int64 *)((char *)v12[0] - 24);
    v6 = *((_QWORD *)v12[0] - 3);
    if ( v6 == *((_QWORD *)*a2 - 3) )
    {
      v8 = memcmp(v12[0], *a2, v6) == 0;
      if ( v7 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    else
    {
      v8 = 0;
      if ( v7 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    v9 = (unsigned int *)(v5 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 > 0 )
    {
LABEL_6:
      if ( v8 )
        return 1;
      goto LABEL_7;
    }
    operator delete(v7);
    if ( v8 )
      return 1;
LABEL_7:
    v3 += 2;
  }
  return 0;
}

