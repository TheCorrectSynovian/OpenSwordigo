/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ADE70
 * Mangled: _ZN5Caver14CharacterState22TrinketBonusForWeaponsERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F3C20  Caver::CharacterState::TrinketBonusForWeapons(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000003AE1C4  Caver::CharacterState::TrinketBonusForArmors(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 77
 *   insn=0x00000000003ADE80 string=0x00000000003ADE84 "U"
 *   insn=0x00000000003ADE98 string=0x00000000003ADE9C "\t"
 *   insn=0x00000000003ADE9C string=0x00000000003ADEA0 "!!"
 *   insn=0x00000000003ADEAC string=0x000000000058EB23 "firetrinket"
 *   insn=0x00000000003ADEC4 string=0x00000000003ADEC8 "(a"
 *   insn=0x00000000003ADECC string=0x00000000003ADED0 "!"
 *   insn=0x00000000003ADED4 string=0x00000000003ADFE8 "!"
 *   insn=0x00000000003ADEE8 string=0x000000000058EB35 "icetrinket"
 *   insn=0x00000000003ADEF8 string=0x00000000003ADEFC "(a"
 *   insn=0x00000000003ADF04 string=0x00000000003ADF08 "@\n"
 *   insn=0x00000000003ADF1C string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x00000000003ADF38 string=0x00000000003ADF3C "!"
 *   insn=0x00000000003ADF3C string=0x00000000003ADF40 "T\n"
 *   insn=0x00000000003ADF54 string=0x00000000003ADF58 "Q"
 *   insn=0x00000000003ADF6C string=0x00000000003ADF70 "K"
 *   insn=0x00000000003ADF74 string=0x00000000003ADF78 "J=G"
 *   insn=0x00000000003ADF78 string=0x00000000003ADF7C ")!"
 *   insn=0x00000000003ADF80 string=0x00000000003ADF84 "*"
 *   insn=0x00000000003ADF80 string=0x00000000003ADFBC "*"
 *   insn=0x00000000003ADF84 string=0x00000000003ADF88 "K"
 *   insn=0x00000000003ADF88 string=0x00000000003ADF8C "+"
 *   insn=0x00000000003ADF90 string=0x00000000003ADF94 ""
 *   insn=0x00000000003ADF94 string=0x00000000003ADFC8 "_"
 *   insn=0x00000000003ADF98 string=0x00000000003ADF9C "J=G"
 *   insn=0x00000000003ADF9C string=0x00000000003ADFA0 ")!"
 *   insn=0x00000000003ADFA0 string=0x00000000003ADFA4 "\n"
 *   insn=0x00000000003ADFA4 string=0x00000000003ADFA8 "*"
 *   insn=0x00000000003ADFA4 string=0x00000000003AE024 "*"
 *   insn=0x00000000003ADFA8 string=0x00000000003ADFAC "K"
 *   insn=0x00000000003ADFAC string=0x00000000003ADFB0 "+"
 *   insn=0x00000000003ADFB8 string=0x00000000003AE030 "_"
 *   insn=0x00000000003ADFBC string=0x00000000003ADFC0 "K"
 *   insn=0x00000000003ADFC0 string=0x00000000003ADFC4 "+"
 *   insn=0x00000000003ADFC8 string=0x00000000003ADFCC "L"
 *   insn=0x00000000003ADFE8 string=0x0000000000591B60 "+Fire damage"
 *   insn=0x00000000003ADFF8 string=0x00000000003ADFFC "("
 *   insn=0x00000000003AE000 string=0x00000000003AE004 ")=G"
 *   insn=0x00000000003AE004 string=0x00000000003AE008 "!"
 *   insn=0x00000000003AE00C string=0x00000000003AE010 "\t"
 *   insn=0x00000000003AE00C string=0x00000000003AE068 "\t"
 *   insn=0x00000000003AE010 string=0x00000000003AE014 "*"
 *   insn=0x00000000003AE014 string=0x00000000003AE018 "\n"
 *   insn=0x00000000003AE020 string=0x00000000003AE074 "?"
 *   insn=0x00000000003AE024 string=0x00000000003AE028 "K"
 *   insn=0x00000000003AE028 string=0x00000000003AE02C "+"
 *   insn=0x00000000003AE050 string=0x0000000000591B6D "+Freezing damage"
 *   insn=0x00000000003AE068 string=0x00000000003AE06C "*"
 *   insn=0x00000000003AE06C string=0x00000000003AE070 "\n"
 *   insn=0x00000000003AE074 string=0x00000000003AE078 "L"
 *   insn=0x00000000003AE088 string=0x0000000000591B7E "+Energy stealing"
 *   insn=0x00000000003AE0C0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AE0D8 string=0x00000000003AE0DC "(a"
 *   insn=0x00000000003AE0E8 string=0x00000000003AE0EC "J=G"
 *   insn=0x00000000003AE0EC string=0x00000000003AE0F0 ")!"
 *   insn=0x00000000003AE0F4 string=0x00000000003AE0F8 "*"
 *   insn=0x00000000003AE0F4 string=0x00000000003AE1A8 "*"
 *   insn=0x00000000003AE0F8 string=0x00000000003AE0FC "K"
 *   insn=0x00000000003AE0FC string=0x00000000003AE100 "+"
 *   insn=0x00000000003AE104 string=0x00000000003AE108 "!"
 *   insn=0x00000000003AE108 string=0x00000000003AE18C "_"
 *   insn=0x00000000003AE11C string=0x00000000003AE120 "(a"
 *   insn=0x00000000003AE12C string=0x00000000003AE130 "J=G"
 *   insn=0x00000000003AE130 string=0x00000000003AE134 ")!"
 *   insn=0x00000000003AE138 string=0x00000000003AE13C "*"
 *   insn=0x00000000003AE13C string=0x00000000003AE140 "K"
 *   insn=0x00000000003AE140 string=0x00000000003AE144 "+"
 *   insn=0x00000000003AE154 string=0x00000000003AE158 "J"
 *   insn=0x00000000003AE15C string=0x00000000003AE160 "(a"
 *   insn=0x00000000003AE16C string=0x00000000003AE170 "J=G"
 *   insn=0x00000000003AE170 string=0x00000000003AE174 ")!"
 *   insn=0x00000000003AE178 string=0x00000000003AE17C "*"
 *   insn=0x00000000003AE17C string=0x00000000003AE180 "K"
 *   insn=0x00000000003AE180 string=0x00000000003AE184 "+"
 *   insn=0x00000000003AE18C string=0x00000000003AE190 "l"
 *   insn=0x00000000003AE1A8 string=0x00000000003AE1AC "K"
 *   insn=0x00000000003AE1AC string=0x00000000003AE1B0 "+"
 *   insn=0x00000000003AE1B0 string=0x00000000003AE1B4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::CharacterState::TrinketBonusForWeapons@<X0>(_QWORD *a1@<X1>, int a2@<W8>)
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
        return sub_566BB8(a2, "+Energy stealing");
      return sub_566BB8(a2, "");
    }
  }
  if ( v8 )
    return sub_566BB8(a2, "");
  return sub_566BB8(a2, "+Energy stealing");
}

