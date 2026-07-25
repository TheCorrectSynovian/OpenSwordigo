/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282AF0
 * Mangled: _ZThn16_N5Caver19FireBreathComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000282AFC string=0x0000000000282B00 "T"
 *   insn=0x0000000000282B04 string=0x0000000000282B08 "?"
 *   insn=0x0000000000282B24 string=0x0000000000282B28 "`>"
 *   insn=0x0000000000282B34 string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000282B58 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::FireBreathComponent::SetValueForBindedProperty(
        Caver::FireBreathComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 102 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)v3 + 15) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty((Caver::FireBreathComponent *)((char *)this - 16), a2, a3);
  }
}

