/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AE518
 * Mangled: _ZN5Caver14CharacterState21TrinketBonusForSkillsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 2
 *   0x00000000001F9390  Caver::CharacterState::TrinketBonusForSkills(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003AE1C4  Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000003AE86C  __gnu_cxx::new_allocator<std::pair<std::string const,Caver::CharacterState::ItemState>>::destroy(std::pair<std::string const,Caver::CharacterState::ItemState>*)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 84
 *   insn=0x00000000003AE528 string=0x00000000003AE52C "U"
 *   insn=0x00000000003AE540 string=0x00000000003AE544 "\t"
 *   insn=0x00000000003AE544 string=0x00000000003AE548 "!!"
 *   insn=0x00000000003AE554 string=0x000000000058EB23 "firetrinket"
 *   insn=0x00000000003AE55C string=0x00000000003AE560 " "
 *   insn=0x00000000003AE56C string=0x00000000003AE570 "(a"
 *   insn=0x00000000003AE574 string=0x00000000003AE578 "!"
 *   insn=0x00000000003AE590 string=0x000000000058EB35 "icetrinket"
 *   insn=0x00000000003AE5A0 string=0x00000000003AE5A4 "(a"
 *   insn=0x00000000003AE5AC string=0x00000000003AE5B0 "@\n"
 *   insn=0x00000000003AE5C4 string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x00000000003AE5E0 string=0x00000000003AE5E4 "!"
 *   insn=0x00000000003AE5E4 string=0x00000000003AE5E8 "T\n"
 *   insn=0x00000000003AE5F8 string=0x00000000003AE5FC "o"
 *   insn=0x00000000003AE5FC string=0x00000000003AE600 "Q"
 *   insn=0x00000000003AE610 string=0x00000000003AE614 "i"
 *   insn=0x00000000003AE614 string=0x00000000003AE618 "K"
 *   insn=0x00000000003AE61C string=0x00000000003AE620 "J=G"
 *   insn=0x00000000003AE620 string=0x00000000003AE624 ")!"
 *   insn=0x00000000003AE628 string=0x00000000003AE62C "*"
 *   insn=0x00000000003AE628 string=0x00000000003AE664 "*"
 *   insn=0x00000000003AE62C string=0x00000000003AE630 "K"
 *   insn=0x00000000003AE630 string=0x00000000003AE634 "+"
 *   insn=0x00000000003AE638 string=0x00000000003AE63C ""
 *   insn=0x00000000003AE63C string=0x00000000003AE670 "_"
 *   insn=0x00000000003AE640 string=0x00000000003AE644 "J=G"
 *   insn=0x00000000003AE644 string=0x00000000003AE648 ")!"
 *   insn=0x00000000003AE648 string=0x00000000003AE64C "\n"
 *   insn=0x00000000003AE64C string=0x00000000003AE650 "*"
 *   insn=0x00000000003AE64C string=0x00000000003AE6CC "*"
 *   insn=0x00000000003AE650 string=0x00000000003AE654 "K"
 *   insn=0x00000000003AE654 string=0x00000000003AE658 "+"
 *   insn=0x00000000003AE660 string=0x00000000003AE6D8 "_"
 *   insn=0x00000000003AE664 string=0x00000000003AE668 "K"
 *   insn=0x00000000003AE668 string=0x00000000003AE66C "+"
 *   insn=0x00000000003AE670 string=0x00000000003AE674 "L"
 *   insn=0x00000000003AE680 string=0x00000000003AE684 "H"
 *   insn=0x00000000003AE690 string=0x0000000000591B60 "+Fire damage"
 *   insn=0x00000000003AE69C string=0x00000000003AE6A0 "F"
 *   insn=0x00000000003AE6A0 string=0x00000000003AE6A4 "("
 *   insn=0x00000000003AE6A8 string=0x00000000003AE6AC ")=G"
 *   insn=0x00000000003AE6AC string=0x00000000003AE6B0 "!"
 *   insn=0x00000000003AE6B4 string=0x00000000003AE6B8 "\t"
 *   insn=0x00000000003AE6B4 string=0x00000000003AE710 "\t"
 *   insn=0x00000000003AE6B8 string=0x00000000003AE6BC "*"
 *   insn=0x00000000003AE6BC string=0x00000000003AE6C0 "\n"
 *   insn=0x00000000003AE6C8 string=0x00000000003AE71C "?"
 *   insn=0x00000000003AE6CC string=0x00000000003AE6D0 "K"
 *   insn=0x00000000003AE6D0 string=0x00000000003AE6D4 "+"
 *   insn=0x00000000003AE6E8 string=0x00000000003AE6EC "."
 *   insn=0x00000000003AE6F8 string=0x0000000000591B6D "+Freezing damage"
 *   insn=0x00000000003AE704 string=0x00000000003AE708 ","
 *   insn=0x00000000003AE710 string=0x00000000003AE714 "*"
 *   insn=0x00000000003AE714 string=0x00000000003AE718 "\n"
 *   insn=0x00000000003AE71C string=0x00000000003AE720 "L"
 *   insn=0x00000000003AE730 string=0x0000000000591BC8 "+Energy regeneration"
 *   insn=0x00000000003AE768 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AE780 string=0x00000000003AE784 "(a"
 *   insn=0x00000000003AE790 string=0x00000000003AE794 "J=G"
 *   insn=0x00000000003AE794 string=0x00000000003AE798 ")!"
 *   insn=0x00000000003AE79C string=0x00000000003AE7A0 "*"
 *   insn=0x00000000003AE79C string=0x00000000003AE850 "*"
 *   insn=0x00000000003AE7A0 string=0x00000000003AE7A4 "K"
 *   insn=0x00000000003AE7A4 string=0x00000000003AE7A8 "+"
 *   insn=0x00000000003AE7AC string=0x00000000003AE7B0 "!"
 *   insn=0x00000000003AE7B0 string=0x00000000003AE834 "_"
 *   insn=0x00000000003AE7B8 string=0x00000000003AE7BC "BL"
 *   insn=0x00000000003AE7C4 string=0x00000000003AE7C8 "(a"
 *   insn=0x00000000003AE7D4 string=0x00000000003AE7D8 "J=G"
 *   insn=0x00000000003AE7D8 string=0x00000000003AE7DC ")!"
 *   insn=0x00000000003AE7E0 string=0x00000000003AE7E4 "*"
 *   insn=0x00000000003AE7E4 string=0x00000000003AE7E8 "K"
 *   insn=0x00000000003AE7E8 string=0x00000000003AE7EC "+"
 *   insn=0x00000000003AE7FC string=0x00000000003AE800 "J"
 *   insn=0x00000000003AE804 string=0x00000000003AE808 "(a"
 *   insn=0x00000000003AE814 string=0x00000000003AE818 "J=G"
 *   insn=0x00000000003AE818 string=0x00000000003AE81C ")!"
 *   insn=0x00000000003AE820 string=0x00000000003AE824 "*"
 *   insn=0x00000000003AE824 string=0x00000000003AE828 "K"
 *   insn=0x00000000003AE828 string=0x00000000003AE82C "+"
 *   insn=0x00000000003AE834 string=0x00000000003AE838 "l"
 *   insn=0x00000000003AE850 string=0x00000000003AE854 "K"
 *   insn=0x00000000003AE854 string=0x00000000003AE858 "+"
 *   insn=0x00000000003AE858 string=0x00000000003AE85C "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharacterState::TrinketBonusForSkills@<X0>(_QWORD *a1@<X1>, int a2@<W8>)
{
  int v4; // w0
  void *v5; // x8
  int v6; // w0
  void *v7; // x8
  int v8; // w20
  void *v9; // x0
  unsigned int *v11; // x9
  int v12; // w10
  unsigned int *v13; // x9
  int v14; // w10
  unsigned int *v15; // x8
  int v16; // w9
  int v17; // [xsp+4h] [xbp-3Ch]
  int v18; // [xsp+4h] [xbp-3Ch]
  _QWORD v19[3]; // [xsp+8h] [xbp-38h] BYREF

  v19[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*a1 )
    return sub_566BB8(a2, "");
  sub_56A528(v19, *a1 + 8LL);
  v4 = sub_5689E0((int)v19, "firetrinket");
  v5 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v11 = (unsigned int *)(v19[0] - 8LL);
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
  if ( v12 > 0 )
  {
LABEL_3:
    if ( !v4 )
      return sub_566BB8(a2, "+Fire damage");
  }
  else
  {
    v17 = v4;
    operator delete(v5);
    if ( !v17 )
      return sub_566BB8(a2, "+Fire damage");
  }
  sub_56A528(v19, *a1 + 8LL);
  v6 = sub_5689E0((int)v19, "icetrinket");
  v7 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_5;
  v13 = (unsigned int *)(v19[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v14 = __ldaxr(v13);
    while ( __stlxr(v14 - 1, v13) );
  }
  else
  {
    v14 = (*v13)--;
  }
  if ( v14 > 0 )
  {
LABEL_5:
    if ( !v6 )
      return sub_566BB8(a2, "+Freezing damage");
  }
  else
  {
    v18 = v6;
    operator delete(v7);
    if ( !v18 )
      return sub_566BB8(a2, "+Freezing damage");
  }
  sub_56A528(v19, *a1 + 8LL);
  v8 = sub_5689E0((int)v19, "shadowtrinket");
  v9 = (void *)(v19[0] - 24LL);
  if ( (__int64 *)(v19[0] - 24LL) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(v19[0] - 8LL);
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
    if ( v16 <= 0 )
    {
      operator delete(v9);
      if ( !v8 )
        return sub_566BB8(a2, "+Energy regeneration");
      return sub_566BB8(a2, "");
    }
  }
  if ( v8 )
    return sub_566BB8(a2, "");
  return sub_566BB8(a2, "+Energy regeneration");
}

