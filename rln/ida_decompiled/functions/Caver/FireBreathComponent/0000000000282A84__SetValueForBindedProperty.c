/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000282A84
 * Mangled: _ZN5Caver19FireBreathComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::FireBreathComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000282A90 string=0x0000000000282A94 "T"
 *   insn=0x0000000000282A9C string=0x0000000000282AA0 "?"
 *   insn=0x0000000000282AB8 string=0x0000000000282ABC "`>"
 *   insn=0x0000000000282AC8 string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000282AEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FireBreathComponent::SetValueForBindedProperty(
        Caver::FireBreathComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 102 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)this + 15) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

