/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AD908
 * Mangled: _ZN5Caver14CharacterState17WeaponDamageRangeEv
 * Demangled: Caver::CharacterState::WeaponDamageRange(void)
 *
 * Callers: 1
 *   0x00000000001F7920  Caver::CharacterState::WeaponDamageRange(void)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F86E0  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F9F30  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005689E0  sub_5689E0
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 85
 *   insn=0x00000000003AD91C string=0x00000000003AD920 "T"
 *   insn=0x00000000003AD934 string=0x00000000003AD938 "~1"
 *   insn=0x00000000003AD938 string=0x00000000001F9F30 "0'"
 *   insn=0x00000000003AD93C string=0x00000000003AD940 "("
 *   insn=0x00000000003AD944 string=0x00000000003AD948 ")H@"
 *   insn=0x00000000003AD948 string=0x00000000003AD94C ")"
 *   insn=0x00000000003AD94C string=0x00000000003AD950 "!"
 *   insn=0x00000000003AD950 string=0x00000000003AD954 "  "
 *   insn=0x00000000003AD958 string=0x00000000003AD95C "(!"
 *   insn=0x00000000003AD964 string=0x00000000003AD968 "^+"
 *   insn=0x00000000003AD968 string=0x00000000003AD96C "\t "
 *   insn=0x00000000003AD968 string=0x00000000001F86E0 "0'"
 *   insn=0x00000000003AD970 string=0x00000000003AD974 "\n%F-3"
 *   insn=0x00000000003AD974 string=0x00000000003AD978 "3"
 *   insn=0x00000000003AD978 string=0x00000000003AD97C "h"
 *   insn=0x00000000003AD97C string=0x00000000003AD980 ""
 *   insn=0x00000000003AD980 string=0x00000000003AD984 "h"
 *   insn=0x00000000003AD988 string=0x00000000003AD98C "h"
 *   insn=0x00000000003AD990 string=0x00000000003AD994 "\t@"
 *   insn=0x00000000003AD998 string=0x00000000003AD99C "h\n@"
 *   insn=0x00000000003AD99C string=0x00000000003AD9A0 ""
 *   insn=0x00000000003AD9A0 string=0x00000000003AD9A4 "h\n"
 *   insn=0x00000000003AD9A8 string=0x00000000003AD9AC "h"
 *   insn=0x00000000003AD9B0 string=0x00000000003AD9B4 "@"
 *   insn=0x00000000003AD9C8 string=0x00000000003AD9CC "@"
 *   insn=0x00000000003AD9C8 string=0x00000000003ADA00 "4""
 *   insn=0x00000000003AD9CC string=0x00000000003AD9D0 "!"
 *   insn=0x00000000003AD9EC string=0x00000000003AD9F0 "("
 *   insn=0x00000000003ADA00 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003ADA08 string=0x00000000003ADA0C "4"
 *   insn=0x00000000003ADA10 string=0x00000000003ADA14 ""
 *   insn=0x00000000003ADA20 string=0x00000000003ADA24 "\t@"
 *   insn=0x00000000003ADA30 string=0x00000000003ADA34 ""
 *   insn=0x00000000003ADA40 string=0x00000000003ADA44 "@"
 *   insn=0x00000000003ADA54 string=0x00000000003ADA58 "="
 *   insn=0x00000000003ADA6C string=0x00000000003ADA70 "T"
 *   insn=0x00000000003ADA7C string=0x00000000003ADA80 "h"
 *   insn=0x00000000003ADA94 string=0x000000000058FA78 "platearmor"
 *   insn=0x00000000003ADAAC string=0x00000000003ADAB0 "(a"
 *   insn=0x00000000003ADAB4 string=0x00000000003ADAB8 "A"
 *   insn=0x00000000003ADABC string=0x00000000003ADAC0 "h"
 *   insn=0x00000000003ADAD0 string=0x000000000058FA8F "magicarmor"
 *   insn=0x00000000003ADAF0 string=0x00000000003ADAF4 "S"
 *   insn=0x00000000003ADAF8 string=0x00000000003ADAFC ")"
 *   insn=0x00000000003ADB00 string=0x00000000003ADB04 "J=G"
 *   insn=0x00000000003ADB04 string=0x00000000003ADB08 ")!"
 *   insn=0x00000000003ADB0C string=0x00000000003ADB10 "*"
 *   insn=0x00000000003ADB0C string=0x00000000003ADB48 "*"
 *   insn=0x00000000003ADB10 string=0x00000000003ADB14 "K"
 *   insn=0x00000000003ADB14 string=0x00000000003ADB18 "+"
 *   insn=0x00000000003ADB1C string=0x00000000003ADB20 ""
 *   insn=0x00000000003ADB20 string=0x00000000003ADB54 "_"
 *   insn=0x00000000003ADB24 string=0x00000000003ADB28 ")=G"
 *   insn=0x00000000003ADB28 string=0x00000000003ADB2C "!"
 *   insn=0x00000000003ADB2C string=0x00000000003ADB30 "i"
 *   insn=0x00000000003ADB30 string=0x00000000003ADB34 "\t"
 *   insn=0x00000000003ADB30 string=0x00000000003ADB7C "\t"
 *   insn=0x00000000003ADB34 string=0x00000000003ADB38 "*"
 *   insn=0x00000000003ADB38 string=0x00000000003ADB3C "\n"
 *   insn=0x00000000003ADB44 string=0x00000000003ADB88 "?"
 *   insn=0x00000000003ADB48 string=0x00000000003ADB4C "K"
 *   insn=0x00000000003ADB4C string=0x00000000003ADB50 "+"
 *   insn=0x00000000003ADB54 string=0x00000000003ADB58 ","
 *   insn=0x00000000003ADB74 string=0x00000000003ADB78 "\n"
 *   insn=0x00000000003ADB7C string=0x00000000003ADB80 "*"
 *   insn=0x00000000003ADB80 string=0x00000000003ADB84 "\n"
 *   insn=0x00000000003ADB88 string=0x00000000003ADB8C "L"
 *   insn=0x00000000003ADBCC string=0x00000000003ADBD0 "(a"
 *   insn=0x00000000003ADBDC string=0x00000000003ADBE0 "J=G"
 *   insn=0x00000000003ADBE0 string=0x00000000003ADBE4 ")!"
 *   insn=0x00000000003ADBE8 string=0x00000000003ADBEC "*"
 *   insn=0x00000000003ADBE8 string=0x00000000003ADC58 "*"
 *   insn=0x00000000003ADBEC string=0x00000000003ADBF0 "K"
 *   insn=0x00000000003ADBF0 string=0x00000000003ADBF4 "+"
 *   insn=0x00000000003ADBFC string=0x00000000003ADC3C "_"
 *   insn=0x00000000003ADC04 string=0x00000000003ADC08 "J"
 *   insn=0x00000000003ADC0C string=0x00000000003ADC10 "(a"
 *   insn=0x00000000003ADC1C string=0x00000000003ADC20 "J=G"
 *   insn=0x00000000003ADC20 string=0x00000000003ADC24 ")!"
 *   insn=0x00000000003ADC28 string=0x00000000003ADC2C "*"
 *   insn=0x00000000003ADC2C string=0x00000000003ADC30 "K"
 *   insn=0x00000000003ADC30 string=0x00000000003ADC34 "+"
 *   insn=0x00000000003ADC58 string=0x00000000003ADC5C "K"
 *   insn=0x00000000003ADC5C string=0x00000000003ADC60 "+"
 *   insn=0x00000000003ADC60 string=0x00000000003ADC64 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall Caver::CharacterState::WeaponDamageRange(Caver::CharacterState *this)
{
  float v2; // s8
  float v3; // s0
  int v4; // s9
  int v5; // s10
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v9; // [xsp+54h] [xbp-48h]
  _QWORD *v10; // [xsp+5Ch] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::CharacterState::HighestLevelItemOfType();
  v2 = (float)((float)(*((_DWORD *)this + 44) - 1) * 0.5) + 1.0;
  if ( *((_QWORD *)this + 13) )
  {
    Caver::CharacterState::TrinketDamageMultiplier();
    v2 = v2 * v3;
  }
  v5 = *(_DWORD *)(v9 + 48);
  v4 = *(_DWORD *)(v9 + 52);
  if ( v10 )
  {
    v6 = v10[1] - 1LL;
    v10[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)())(*v10 + 16LL))();
      v7 = v10[2] - 1LL;
      v10[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)())(*v10 + 24LL))();
    }
  }
  return llroundf(v2 * (float)v5) | ((unsigned __int64)llroundf(v2 * (float)v4) << 32);
}

