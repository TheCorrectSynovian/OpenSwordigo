/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036963C
 * Mangled: _ZN5Caver20HeroEquipmentManager20ApplyTrinketToWeaponERKN5boost13intrusive_ptrINS_11SceneObjectEEERKNS1_10shared_ptrINS_4ItemEEE
 * Demangled: Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callers: 1
 *   0x00000000001FD820  Caver::HeroEquipmentManager::ApplyTrinketToWeapon(boost::intrusive_ptr<Caver::SceneObject> const&,boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 14
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *   0x00000000001F4950  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7920  Caver::CharacterState::WeaponDamageRange(void)
 *   0x00000000001FAC60  Caver::CharacterState::ItemCount(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001FED20  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000021C148  Caver::DamageComponent::Interface(void)
 *   0x000000000029EB14  Caver::SwingableWeaponComponent::Interface(void)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 122
 *   insn=0x0000000000369658 string=0x000000000036965C "Y"
 *   insn=0x000000000036965C string=0x0000000000369660 "("
 *   insn=0x0000000000369674 string=0x0000000000369678 "!"
 *   insn=0x0000000000369678 string=0x000000000029EB14 "@""
 *   insn=0x0000000000369688 string=0x000000000036968C "U"
 *   insn=0x000000000036968C string=0x0000000000369690 "h"
 *   insn=0x000000000036968C string=0x00000000003699B4 "("
 *   insn=0x000000000036969C string=0x00000000003696A0 "pE"
 *   insn=0x00000000003696A0 string=0x00000000001FAC60 "0'"
 *   insn=0x00000000003696B4 string=0x00000000003696B8 "!hF"
 *   insn=0x00000000003696B8 string=0x000000000021C148 "@&"
 *   insn=0x00000000003696BC string=0x00000000003696C0 ""
 *   insn=0x00000000003696C8 string=0x00000000003696CC ""
 *   insn=0x00000000003696E0 string=0x00000000001F4950 "P'"
 *   insn=0x00000000003696EC string=0x00000000003696F0 ""
 *   insn=0x00000000003696F0 string=0x00000000003696F4 "H"
 *   insn=0x00000000003696F4 string=0x00000000003697FC "W"
 *   insn=0x0000000000369700 string=0x0000000000369704 "!"
 *   insn=0x0000000000369704 string=0x000000000058EB23 "firetrinket"
 *   insn=0x0000000000369718 string=0x000000000036971C "Z"
 *   insn=0x000000000036971C string=0x0000000000369720 "(a"
 *   insn=0x000000000036972C string=0x0000000000369730 ""
 *   insn=0x0000000000369734 string=0x0000000000369738 "1"
 *   insn=0x000000000036973C string=0x0000000000369740 "J=G"
 *   insn=0x0000000000369740 string=0x0000000000369744 ")!"
 *   insn=0x0000000000369748 string=0x000000000036974C "*"
 *   insn=0x0000000000369748 string=0x0000000000369760 "*"
 *   insn=0x000000000036974C string=0x0000000000369750 "K"
 *   insn=0x0000000000369750 string=0x0000000000369754 "+"
 *   insn=0x000000000036975C string=0x000000000036976C "_"
 *   insn=0x0000000000369760 string=0x0000000000369764 "K"
 *   insn=0x0000000000369764 string=0x0000000000369768 "+"
 *   insn=0x000000000036977C string=0x0000000000369780 "\t"
 *   insn=0x0000000000369784 string=0x0000000000369788 "@"
 *   insn=0x000000000036978C string=0x0000000000583C38 "\n"
 *   insn=0x0000000000369790 string=0x0000000000369794 ""
 *   insn=0x00000000003697A4 string=0x00000000003697A8 "~*"
 *   insn=0x00000000003697A8 string=0x00000000001F41A0 "P'"
 *   insn=0x00000000003697B0 string=0x00000000003697B4 "g,"
 *   insn=0x00000000003697BC string=0x00000000003697C0 "XU"
 *   insn=0x00000000003697C0 string=0x00000000003697C4 ""
 *   insn=0x00000000003697D0 string=0x00000000003697D4 "U"
 *   insn=0x00000000003697D4 string=0x00000000003697D8 "!"
 *   insn=0x00000000003697D8 string=0x000000000058EB35 "icetrinket"
 *   insn=0x00000000003697E8 string=0x00000000003697EC "(a"
 *   insn=0x00000000003697F4 string=0x00000000003697F8 "@"
 *   insn=0x00000000003697F8 string=0x0000000000369860 "("
 *   insn=0x00000000003697FC string=0x00000000003698A4 ""
 *   insn=0x0000000000369800 string=0x0000000000369804 ""
 *   insn=0x0000000000369804 string=0x0000000000369808 "("
 *   insn=0x0000000000369808 string=0x000000000036980C "7"
 *   insn=0x0000000000369810 string=0x0000000000369814 "J=G"
 *   insn=0x0000000000369814 string=0x0000000000369818 ")!"
 *   insn=0x000000000036981C string=0x0000000000369820 "*"
 *   insn=0x000000000036981C string=0x0000000000369834 "*"
 *   insn=0x0000000000369820 string=0x0000000000369824 "K"
 *   insn=0x0000000000369824 string=0x0000000000369828 "+"
 *   insn=0x0000000000369830 string=0x0000000000369840 "_"
 *   insn=0x0000000000369834 string=0x0000000000369838 "K"
 *   insn=0x0000000000369838 string=0x000000000036983C "+"
 *   insn=0x0000000000369860 string=0x000000000058FA6C ")\"
 *   insn=0x0000000000369868 string=0x000000000036986C """
 *   insn=0x000000000036986C string=0x0000000000369870 ""
 *   insn=0x000000000036987C string=0x0000000000369880 "H*"
 *   insn=0x0000000000369888 string=0x000000000036988C "1,"
 *   insn=0x0000000000369894 string=0x0000000000369898 ""U"
 *   insn=0x0000000000369898 string=0x000000000036989C "W"
 *   insn=0x00000000003698A4 string=0x00000000003698A8 ""
 *   insn=0x00000000003698B4 string=0x00000000003698B8 "!"
 *   insn=0x00000000003698B8 string=0x000000000058EB45 "shadowtrinket"
 *   insn=0x00000000003698C0 string=0x00000000003698C4 "G"
 *   insn=0x00000000003698D0 string=0x00000000003698D4 ")"
 *   insn=0x00000000003698EC string=0x00000000003698F0 "#"
 *   insn=0x00000000003698F4 string=0x00000000003698F8 ")=G"
 *   insn=0x00000000003698F8 string=0x00000000003698FC "!"
 *   insn=0x0000000000369900 string=0x0000000000369904 "\t"
 *   insn=0x0000000000369900 string=0x0000000000369918 "\t"
 *   insn=0x0000000000369904 string=0x0000000000369908 "*"
 *   insn=0x0000000000369908 string=0x000000000036990C "\n"
 *   insn=0x0000000000369914 string=0x0000000000369924 "?"
 *   insn=0x0000000000369918 string=0x000000000036991C "*"
 *   insn=0x000000000036991C string=0x0000000000369920 "\n"
 *   insn=0x0000000000369938 string=0x0000000000584430 "333?"
 *   insn=0x0000000000369940 string=0x0000000000369944 """
 *   insn=0x0000000000369944 string=0x0000000000369948 ""
 *   insn=0x0000000000369970 string=0x0000000000369974 "W"
 *   insn=0x0000000000369980 string=0x0000000000369984 "!hF"
 *   insn=0x000000000036998C string=0x0000000000369990 "4"
 *   insn=0x0000000000369990 string=0x0000000000369994 "h"
 *   insn=0x00000000003699A0 string=0x00000000003699A4 ""
 *   insn=0x00000000003699A0 string=0x00000000001F7920 "0'"
 *   insn=0x00000000003699A4 string=0x00000000003699A8 ""
 *   insn=0x00000000003699BC string=0x00000000003699C0 "!"
 *   insn=0x00000000003699C0 string=0x00000000003699E4 ";2"
 *   insn=0x00000000003699E4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003699EC string=0x00000000003699F0 "(a"
 *   insn=0x00000000003699FC string=0x0000000000369A00 "J=G"
 *   insn=0x0000000000369A00 string=0x0000000000369A04 ")!"
 *   insn=0x0000000000369A08 string=0x0000000000369A0C "*"
 *   insn=0x0000000000369A08 string=0x0000000000369AB8 "*"
 *   insn=0x0000000000369A0C string=0x0000000000369A10 "K"
 *   insn=0x0000000000369A10 string=0x0000000000369A14 "+"
 *   insn=0x0000000000369A18 string=0x0000000000369A1C " "
 *   insn=0x0000000000369A1C string=0x0000000000369A9C "_"
 *   insn=0x0000000000369A24 string=0x0000000000369A28 "J"
 *   insn=0x0000000000369A2C string=0x0000000000369A30 "(a"
 *   insn=0x0000000000369A3C string=0x0000000000369A40 "J=G"
 *   insn=0x0000000000369A40 string=0x0000000000369A44 ")!"
 *   insn=0x0000000000369A48 string=0x0000000000369A4C "*"
 *   insn=0x0000000000369A4C string=0x0000000000369A50 "K"
 *   insn=0x0000000000369A50 string=0x0000000000369A54 "+"
 *   insn=0x0000000000369A64 string=0x0000000000369A68 "J"
 *   insn=0x0000000000369A6C string=0x0000000000369A70 "(a"
 *   insn=0x0000000000369A7C string=0x0000000000369A80 "J=G"
 *   insn=0x0000000000369A80 string=0x0000000000369A84 ")!"
 *   insn=0x0000000000369A88 string=0x0000000000369A8C "*"
 *   insn=0x0000000000369A8C string=0x0000000000369A90 "K"
 *   insn=0x0000000000369A90 string=0x0000000000369A94 "+"
 *   insn=0x0000000000369AA8 string=0x0000000000369AAC ">"
 *   insn=0x0000000000369AB8 string=0x0000000000369ABC "K"
 *   insn=0x0000000000369ABC string=0x0000000000369AC0 "+"
 *   insn=0x0000000000369AC0 string=0x0000000000369AC4 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::HeroEquipmentManager::ApplyTrinketToWeapon(__int64 a1, Caver::SceneObject **a2, __int64 *a3)
{
  __int64 result; // x0
  Caver::SwingableWeaponComponent *v7; // x21
  int v8; // w22
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 v11; // x23
  Caver::FloatColor *v12; // x0
  void *v13; // x8
  __int64 v14; // x8
  unsigned int *v15; // x9
  int v16; // w10
  unsigned __int64 v17; // x0
  void *v18; // x8
  __int64 v19; // x8
  unsigned int *v20; // x9
  int v21; // w10
  unsigned int v22; // w26
  int v23; // w24
  void *v24; // x0
  unsigned int *v25; // x8
  int v26; // w9
  _DWORD *v27; // x20
  _DWORD v28[5]; // [xsp+4h] [xbp-ACh] BYREF
  __int64 v29; // [xsp+18h] [xbp-98h] BYREF
  __int64 v30; // [xsp+28h] [xbp-88h] BYREF
  __int64 v31; // [xsp+38h] [xbp-78h] BYREF
  __int128 v32; // [xsp+40h] [xbp-70h]
  __int64 v33; // [xsp+58h] [xbp-58h]

  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = Caver::SceneObject::ComponentWithInterface(*a2, (__int64)Caver::SwingableWeaponComponent::Interface);
  v7 = (Caver::SwingableWeaponComponent *)result;
  if ( !result )
    return result;
  if ( *(_QWORD *)a1 )
    v8 = Caver::CharacterState::ItemCount();
  else
    v8 = 1;
  v9 = Caver::SceneObject::ComponentWithInterface(*a2, (__int64)Caver::DamageComponent::Interface);
  v10 = *a3;
  v11 = v9;
  if ( !*a3 )
  {
    v32 = xmmword_589600;
    Caver::SwingableWeaponComponent::SetGlowColor();
    Caver::SwingableWeaponComponent::SetGlowIntensity(v7, 0.0);
    v10 = *a3;
    if ( !*a3 )
      goto LABEL_20;
  }
  sub_56A528(&v31, v10 + 8);
  v12 = (Caver::FloatColor *)sub_5689E0((int)&v31, "firetrinket");
  v13 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) == &qword_6FD2E0 )
    goto LABEL_8;
  v15 = (unsigned int *)(v31 - 8);
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
LABEL_8:
    if ( !(_DWORD)v12 )
      goto LABEL_17;
LABEL_9:
    v14 = *a3;
    if ( !*a3 )
      goto LABEL_20;
    goto LABEL_18;
  }
  v28[0] = (_DWORD)v12;
  operator delete(v13);
  v12 = (Caver::FloatColor *)v28[0];
  if ( v28[0] )
    goto LABEL_9;
LABEL_17:
  Caver::FloatColor::FromHSLA(&v30, v12, 0.08, 1.0, 0.5, 0.0);
  Caver::SwingableWeaponComponent::SetGlowColor();
  Caver::SwingableWeaponComponent::SetGlowIntensity(v7, 1.0);
  v14 = *a3;
  if ( !*a3 )
    goto LABEL_20;
LABEL_18:
  sub_56A528(&v31, v14 + 8);
  v17 = sub_5689E0((int)&v31, "icetrinket");
  v18 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) == &qword_6FD2E0 )
    goto LABEL_19;
  v20 = (unsigned int *)(v31 - 8);
  if ( &pthread_create )
  {
    do
      v21 = __ldaxr(v20);
    while ( __stlxr(v21 - 1, v20) );
  }
  else
  {
    v21 = (*v20)--;
  }
  if ( v21 > 0 )
  {
LABEL_19:
    if ( !(_DWORD)v17 )
      goto LABEL_29;
  }
  else
  {
    v22 = v17;
    operator delete(v18);
    v17 = v22;
    if ( !v22 )
    {
LABEL_29:
      Caver::FloatColor::FromHSLA(&v29, (Caver::FloatColor *)v17, 0.56, 1.0, 0.4, 0.0);
      Caver::SwingableWeaponComponent::SetGlowColor();
      Caver::SwingableWeaponComponent::SetGlowIntensity(v7, 1.0);
      if ( v11 )
        *(_DWORD *)(v11 + 192) = v8;
LABEL_31:
      v19 = *a3;
      if ( !*a3 )
        goto LABEL_34;
      goto LABEL_32;
    }
  }
LABEL_20:
  if ( !v11 )
    goto LABEL_31;
  *(_DWORD *)(v11 + 192) = 0;
  v19 = *a3;
  if ( !*a3 )
    goto LABEL_34;
LABEL_32:
  sub_56A528(&v31, v19 + 8);
  v23 = sub_5689E0((int)&v31, "shadowtrinket");
  v24 = (void *)(v31 - 24);
  if ( (__int64 *)(v31 - 24) == &qword_6FD2E0 )
    goto LABEL_33;
  v25 = (unsigned int *)(v31 - 8);
  if ( &pthread_create )
  {
    do
      v26 = __ldaxr(v25);
    while ( __stlxr(v26 - 1, v25) );
  }
  else
  {
    v26 = (*v25)--;
  }
  if ( v26 > 0 )
  {
LABEL_33:
    if ( !v23 )
      goto LABEL_42;
LABEL_34:
    if ( v11 )
      *(_DWORD *)(v11 + 196) = 0;
    goto LABEL_44;
  }
  operator delete(v24);
  if ( v23 )
    goto LABEL_34;
LABEL_42:
  Caver::FloatColor::FromHSLA((__int64 *)&v28[1], (Caver::FloatColor *)v24, 0.7, 1.0, 0.4, 0.0);
  Caver::SwingableWeaponComponent::SetGlowColor();
  Caver::SwingableWeaponComponent::SetGlowIntensity(v7, 1.0);
  if ( v11 )
    *(_DWORD *)(v11 + 196) = v8;
LABEL_44:
  result = Caver::SceneObject::ComponentWithInterface(*a2, (__int64)Caver::DamageComponent::Interface);
  v27 = (_DWORD *)result;
  if ( result )
  {
    if ( *(_QWORD *)a1 )
    {
      result = Caver::CharacterState::WeaponDamageRange((Caver::CharacterState *)(*(_QWORD *)a1 + 16LL));
      v27[41] = result;
      v27[42] = HIDWORD(result) - result;
      v27[43] = result;
      v27[44] = result;
    }
  }
  return result;
}

