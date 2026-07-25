/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD4DC
 * Mangled: _ZN5Caver14CharacterState8AddSkillERKN5boost10shared_ptrINS_5SkillEEE
 * Demangled: Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callers: 1
 *   0x00000000001F3D00  Caver::CharacterState::AddSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 7
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FAA70  std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Skill>*,std::vector<boost::shared_ptr<Caver::Skill>,std::allocator<boost::shared_ptr<Caver::Skill>>>>,boost::shared_ptr<Caver::Skill> const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x00000000003AD4F8 string=0x00000000003AD4FC "W"
 *   insn=0x00000000003AD518 string=0x00000000003AD51C "ynD"
 *   insn=0x00000000003AD51C string=0x00000000003AD520 "?"
 *   insn=0x00000000003AD52C string=0x00000000003AD530 "Z"
 *   insn=0x00000000003AD534 string=0x00000000003AD538 "!"
 *   insn=0x00000000003AD54C string=0x00000000003AD550 "("
 *   insn=0x00000000003AD550 string=0x00000000003AD554 "_"
 *   insn=0x00000000003AD560 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003AD570 string=0x00000000003AD574 "\t"
 *   insn=0x00000000003AD584 string=0x00000000003AD588 "9C"
 *   insn=0x00000000003AD588 string=0x00000000003AD58C "?"
 *   insn=0x00000000003AD58C string=0x00000000003AD590 "A"
 *   insn=0x00000000003AD59C string=0x00000000003AD5A0 "\t"
 *   insn=0x00000000003AD59C string=0x00000000003AD5B4 "\t"
 *   insn=0x00000000003AD5A0 string=0x00000000003AD5A4 "*"
 *   insn=0x00000000003AD5A4 string=0x00000000003AD5A8 "\n"
 *   insn=0x00000000003AD5B0 string=0x00000000003AD5C0 "?"
 *   insn=0x00000000003AD5B4 string=0x00000000003AD5B8 "*"
 *   insn=0x00000000003AD5B8 string=0x00000000003AD5BC "\n"
 *   insn=0x00000000003AD5CC string=0x00000000003AD5D0 "u"
 *   insn=0x00000000003AD5E8 string=0x00000000003AD5EC ")"
 *   insn=0x00000000003AD5FC string=0x00000000003AD64C "a"
 *   insn=0x00000000003AD600 string=0x00000000003AD604 "$"
 *   insn=0x00000000003AD608 string=0x00000000003AD60C ")=G"
 *   insn=0x00000000003AD60C string=0x00000000003AD610 "!"
 *   insn=0x00000000003AD614 string=0x00000000003AD618 "\t"
 *   insn=0x00000000003AD614 string=0x00000000003AD62C "\t"
 *   insn=0x00000000003AD618 string=0x00000000003AD61C "*"
 *   insn=0x00000000003AD61C string=0x00000000003AD620 "\n"
 *   insn=0x00000000003AD628 string=0x00000000003AD638 "?"
 *   insn=0x00000000003AD62C string=0x00000000003AD630 "*"
 *   insn=0x00000000003AD630 string=0x00000000003AD634 "\n"
 *   insn=0x00000000003AD640 string=0x00000000003AD644 "X"
 *   insn=0x00000000003AD64C string=0x00000000003AD650 "?"
 *   insn=0x00000000003AD654 string=0x00000000003AD684 "`"
 *   insn=0x00000000003AD658 string=0x00000000003AD65C "("
 *   insn=0x00000000003AD660 string=0x00000000003AD664 "("
 *   insn=0x00000000003AD668 string=0x00000000003AD66C "\t"
 *   insn=0x00000000003AD668 string=0x00000000003AD678 "(@"
 *   insn=0x00000000003AD66C string=0x00000000003AD670 ")"
 *   insn=0x00000000003AD670 string=0x00000000003AD674 "\t"
 *   insn=0x00000000003AD678 string=0x00000000003AD67C "h&"
 *   insn=0x00000000003AD68C string=0x00000000001FAA70 "0'"
 *   insn=0x00000000003AD69C string=0x00000000003AD6A0 "!"
 *   insn=0x00000000003AD6C4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AD6CC string=0x00000000003AD6D0 "(a"
 *   insn=0x00000000003AD6D8 string=0x00000000003AD6DC ")!"
 *   insn=0x00000000003AD6E0 string=0x00000000003AD6E4 "*"
 *   insn=0x00000000003AD6E0 string=0x00000000003AD710 "*"
 *   insn=0x00000000003AD6E4 string=0x00000000003AD6E8 "K"
 *   insn=0x00000000003AD6E8 string=0x00000000003AD6EC "+"
 *   insn=0x00000000003AD6F0 string=0x00000000003AD6F4 "_"
 *   insn=0x00000000003AD700 string=0x00000000003AD704 "("
 *   insn=0x00000000003AD708 string=0x00000000003AD70C "nP"
 *   insn=0x00000000003AD710 string=0x00000000003AD714 "K"
 *   insn=0x00000000003AD714 string=0x00000000003AD718 "+"
 *   insn=0x00000000003AD718 string=0x00000000003AD71C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharacterState::AddSkill(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // x25
  _QWORD *v5; // x27
  char *v6; // x22
  size_t v7; // x2
  __int64 *v8; // x21
  _BOOL4 v9; // w28
  unsigned int *v10; // x8
  int v11; // w9
  char v12; // w21
  char *v13; // x0
  unsigned int *v15; // x8
  int v16; // w9
  _QWORD *v17; // x1
  __int64 v18; // x8
  char *v19; // [xsp+0h] [xbp-70h] BYREF
  const void *v20[3]; // [xsp+8h] [xbp-68h] BYREF

  v20[2] = *(const void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(&v19, *a2);
  v4 = (_QWORD *)a1[8];
  v5 = (_QWORD *)a1[9];
  if ( v4 == v5 )
  {
LABEL_16:
    v12 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    sub_56A528(v20, *v4);
    v6 = (char *)v20[0];
    v8 = (__int64 *)((char *)v20[0] - 24);
    v7 = *((_QWORD *)v20[0] - 3);
    if ( v7 == *((_QWORD *)v19 - 3) )
    {
      v9 = memcmp(v20[0], v19, v7) == 0;
      if ( v8 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    else
    {
      v9 = 0;
      if ( v8 == &qword_6FD2E0 )
        goto LABEL_6;
    }
    v10 = (unsigned int *)(v6 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      break;
LABEL_6:
    if ( v9 )
      goto LABEL_15;
LABEL_7:
    v4 += 2;
    if ( v4 == v5 )
      goto LABEL_16;
  }
  operator delete(v8);
  if ( !v9 )
    goto LABEL_7;
LABEL_15:
  v12 = 1;
LABEL_17:
  v13 = v19 - 24;
  if ( v19 - 24 == (char *)&qword_6FD2E0 )
    goto LABEL_18;
  v15 = (unsigned int *)(v19 - 8);
  if ( &pthread_create )
  {
    do
      v16 = __ldaxr(v15);
    while ( __stlxr(v16 - 1, v15) );
  }
  else
  {
    v16 = (*v15)--;
  }
  if ( v16 > 0 )
  {
LABEL_18:
    if ( (v12 & 1) == 0 )
      goto LABEL_26;
    return 0;
  }
  operator delete(v13);
  if ( (v12 & 1) != 0 )
    return 0;
LABEL_26:
  v17 = (_QWORD *)a1[9];
  if ( v17 == (_QWORD *)a1[10] )
  {
    std::vector<boost::shared_ptr<Caver::Skill>>::_M_insert_aux();
  }
  else
  {
    *v17 = *a2;
    v18 = a2[1];
    v17[1] = v18;
    if ( v18 )
      ++*(_QWORD *)(v18 + 8);
    a1[9] = v17 + 2;
  }
  return 1;
}

