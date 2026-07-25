/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036924C
 * Mangled: _ZN5Caver20HeroEquipmentManager17ModelNameForArmorERKN5boost10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001F8E20  Caver::HeroEquipmentManager::ModelNameForArmor(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000003694AC  Caver::HeroEquipmentManager::EquipArmor(boost::shared_ptr<Caver::Item> const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 60
 *   insn=0x000000000036925C string=0x0000000000369260 "U"
 *   insn=0x0000000000369278 string=0x000000000036927C "!!"
 *   insn=0x0000000000369278 string=0x00000000003692EC "!"
 *   insn=0x0000000000369284 string=0x0000000000369288 "!"
 *   insn=0x0000000000369288 string=0x000000000058FA78 "platearmor"
 *   insn=0x00000000003692A0 string=0x00000000003692A4 "(a"
 *   insn=0x00000000003692AC string=0x00000000003692B0 "@"
 *   insn=0x00000000003692B0 string=0x0000000000369378 "!"
 *   insn=0x00000000003692C0 string=0x00000000003692C4 "!"
 *   insn=0x00000000003692C4 string=0x000000000058FA8F "magicarmor"
 *   insn=0x00000000003692E0 string=0x00000000003692E4 "!"
 *   insn=0x00000000003692E4 string=0x00000000003692E8 "T"
 *   insn=0x00000000003692E8 string=0x00000000003693B0 "!"
 *   insn=0x00000000003692EC string=0x000000000058EA92 "hiro"
 *   insn=0x00000000003692F8 string=0x00000000003692FC "/"
 *   insn=0x00000000003692FC string=0x0000000000369300 "1"
 *   insn=0x0000000000369304 string=0x0000000000369308 "J=G"
 *   insn=0x0000000000369308 string=0x000000000036930C ")!"
 *   insn=0x0000000000369310 string=0x0000000000369314 "*"
 *   insn=0x0000000000369310 string=0x000000000036934C "*"
 *   insn=0x0000000000369314 string=0x0000000000369318 "K"
 *   insn=0x0000000000369318 string=0x000000000036931C "+"
 *   insn=0x0000000000369320 string=0x0000000000369324 ""
 *   insn=0x0000000000369324 string=0x0000000000369358 "_"
 *   insn=0x0000000000369328 string=0x000000000036932C ")=G"
 *   insn=0x000000000036932C string=0x0000000000369330 "!"
 *   insn=0x0000000000369334 string=0x0000000000369338 "\t"
 *   insn=0x0000000000369334 string=0x0000000000369390 "\t"
 *   insn=0x0000000000369338 string=0x000000000036933C "*"
 *   insn=0x000000000036933C string=0x0000000000369340 "\n"
 *   insn=0x0000000000369348 string=0x000000000036939C "?"
 *   insn=0x000000000036934C string=0x0000000000369350 "K"
 *   insn=0x0000000000369350 string=0x0000000000369354 "+"
 *   insn=0x0000000000369378 string=0x000000000058FA83 "hiro_plated"
 *   insn=0x0000000000369390 string=0x0000000000369394 "*"
 *   insn=0x0000000000369394 string=0x0000000000369398 "\n"
 *   insn=0x000000000036939C string=0x00000000003693A0 "L"
 *   insn=0x00000000003693B0 string=0x000000000058FA9A "hiro_magicplated"
 *   insn=0x00000000003693E8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003693F8 string=0x00000000003693FC "(a"
 *   insn=0x0000000000369408 string=0x000000000036940C "J=G"
 *   insn=0x000000000036940C string=0x0000000000369410 ")!"
 *   insn=0x0000000000369414 string=0x0000000000369418 "*"
 *   insn=0x0000000000369414 string=0x0000000000369490 "*"
 *   insn=0x0000000000369418 string=0x000000000036941C "K"
 *   insn=0x000000000036941C string=0x0000000000369420 "+"
 *   insn=0x0000000000369428 string=0x0000000000369474 "_"
 *   insn=0x0000000000369430 string=0x0000000000369434 "$a"
 *   insn=0x000000000036943C string=0x0000000000369440 "J"
 *   insn=0x0000000000369444 string=0x0000000000369448 "(a"
 *   insn=0x0000000000369454 string=0x0000000000369458 "J=G"
 *   insn=0x0000000000369458 string=0x000000000036945C ")!"
 *   insn=0x0000000000369460 string=0x0000000000369464 "*"
 *   insn=0x0000000000369464 string=0x0000000000369468 "K"
 *   insn=0x0000000000369468 string=0x000000000036946C "+"
 *   insn=0x0000000000369474 string=0x0000000000369478 "l"
 *   insn=0x0000000000369490 string=0x0000000000369494 "K"
 *   insn=0x0000000000369494 string=0x0000000000369498 "+"
 *   insn=0x0000000000369498 string=0x000000000036949C "_"
 *   insn=0x00000000003694A4 string=0x00000000003694A8 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::HeroEquipmentManager::ModelNameForArmor@<X0>(_QWORD *a1@<X1>, int a2@<W8>)
{
  int v4; // w0
  void *v5; // x8
  int v6; // w20
  void *v7; // x0
  unsigned int *v9; // x9
  int v10; // w10
  unsigned int *v11; // x8
  int v12; // w9
  int v13; // [xsp+4h] [xbp-3Ch]
  _QWORD v14[3]; // [xsp+8h] [xbp-38h] BYREF

  v14[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*a1 )
    return sub_566BB8(a2, "hiro");
  sub_56A528(v14, *a1 + 8LL);
  v4 = sub_5689E0((int)v14, "platearmor");
  v5 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) == &qword_6FD2E0 )
    goto LABEL_3;
  v9 = (unsigned int *)(v14[0] - 8LL);
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
LABEL_3:
    if ( !v4 )
      return sub_566BB8(a2, "hiro_plated");
  }
  else
  {
    v13 = v4;
    operator delete(v5);
    if ( !v13 )
      return sub_566BB8(a2, "hiro_plated");
  }
  sub_56A528(v14, *a1 + 8LL);
  v6 = sub_5689E0((int)v14, "magicarmor");
  v7 = (void *)(v14[0] - 24LL);
  if ( (__int64 *)(v14[0] - 24LL) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(v14[0] - 8LL);
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
    {
      operator delete(v7);
      if ( !v6 )
        return sub_566BB8(a2, "hiro_magicplated");
      return sub_566BB8(a2, "hiro");
    }
  }
  if ( v6 )
    return sub_566BB8(a2, "hiro");
  return sub_566BB8(a2, "hiro_magicplated");
}

