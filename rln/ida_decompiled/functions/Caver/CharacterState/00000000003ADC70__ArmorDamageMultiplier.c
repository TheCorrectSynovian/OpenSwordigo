/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003ADC70
 * Mangled: _ZN5Caver14CharacterState21ArmorDamageMultiplierEv
 * Demangled: Caver::CharacterState::ArmorDamageMultiplier(void)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F86E0  Caver::CharacterState::TrinketDamageMultiplier(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000001F9F30  Caver::CharacterState::HighestLevelItemOfType(Caver::ItemType)
 *   0x00000000001FF8A0  Caver::CharacterState::ArmorDamageMultiplierWithItem(boost::shared_ptr<Caver::Item> const&,boost::shared_ptr<Caver::Item> const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 34
 *   insn=0x00000000003ADC80 string=0x00000000003ADC84 "T"
 *   insn=0x00000000003ADC98 string=0x00000000001F9F30 "0'"
 *   insn=0x00000000003ADCA0 string=0x00000000003ADCA4 ""
 *   insn=0x00000000003ADCA8 string=0x00000000003ADCAC "3"
 *   insn=0x00000000003ADCAC string=0x00000000003ADCB0 "h"
 *   insn=0x00000000003ADCB0 string=0x00000000003ADCB4 ""
 *   insn=0x00000000003ADCB4 string=0x00000000003ADCB8 "h"
 *   insn=0x00000000003ADCBC string=0x00000000003ADCC0 "h"
 *   insn=0x00000000003ADCC4 string=0x00000000003ADCC8 "\t@"
 *   insn=0x00000000003ADCCC string=0x00000000003ADCD0 "h\n@"
 *   insn=0x00000000003ADCD0 string=0x00000000003ADCD4 ""
 *   insn=0x00000000003ADCD4 string=0x00000000003ADCD8 "h\n"
 *   insn=0x00000000003ADCDC string=0x00000000003ADCE0 "h"
 *   insn=0x00000000003ADCE4 string=0x00000000003ADCE8 "@"
 *   insn=0x00000000003ADCFC string=0x00000000003ADD18 "n!"
 *   insn=0x00000000003ADD18 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003ADD20 string=0x00000000003ADD24 "4"
 *   insn=0x00000000003ADD28 string=0x00000000003ADD2C ""
 *   insn=0x00000000003ADD38 string=0x00000000003ADD3C "\t@"
 *   insn=0x00000000003ADD48 string=0x00000000003ADD4C ""
 *   insn=0x00000000003ADD58 string=0x00000000003ADD5C "@"
 *   insn=0x00000000003ADD6C string=0x00000000003ADD70 "w"
 *   insn=0x00000000003ADD80 string=0x00000000003ADD84 ""
 *   insn=0x00000000003ADD88 string=0x00000000003ADD8C " "
 *   insn=0x00000000003ADD8C string=0x00000000003ADD90 "I"
 *   insn=0x00000000003ADD90 string=0x00000000003ADD94 ""
 *   insn=0x00000000003ADD98 string=0x00000000003ADD9C "  "
 *   insn=0x00000000003ADDA4 string=0x00000000003ADDA8 "(!"
 *   insn=0x00000000003ADDAC string=0x00000000003ADDBC "h"
 *   insn=0x00000000003ADDB0 string=0x00000000003ADDB4 "K*"
 *   insn=0x00000000003ADDB4 string=0x00000000003ADDB8 "\t "
 *   insn=0x00000000003ADDB4 string=0x00000000001F86E0 "0'"
 *   insn=0x00000000003ADDCC string=0x00000000003ADDD0 "!"
 *   insn=0x00000000003ADDDC string=0x00000000003ADDE0 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::CharacterState::ArmorDamageMultiplier(Caver::CharacterState *this)
{
  long double v1; // q0
  long double v2; // q8
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v6; // [xsp+30h] [xbp-30h]

  _ReadStatusReg(TPIDR_EL0);
  Caver::CharacterState::HighestLevelItemOfType();
  Caver::CharacterState::ArmorDamageMultiplierWithItem();
  v2 = v1;
  if ( v6 )
  {
    v3 = v6[1] - 1LL;
    v6[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)())(*v6 + 16LL))();
      v4 = v6[2] - 1LL;
      v6[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)())(*v6 + 24LL))();
    }
  }
  return v2;
}

