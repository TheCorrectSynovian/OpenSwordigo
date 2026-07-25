/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285CDC
 * Mangled: _ZN5Caver18MagicBombComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000285CE8 string=0x0000000000285CEC "T"
 *   insn=0x0000000000285CF4 string=0x0000000000285CF8 "?"
 *   insn=0x0000000000285D10 string=0x0000000000285D14 "`6"
 *   insn=0x0000000000285D1C string=0x0000000000285D20 "d"
 *   insn=0x0000000000285D20 string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000285D30 string=0x0000000000285D44 "c"
 *   insn=0x0000000000285D44 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBombComponent::SetValueForBindedProperty(
        Caver::MagicBombComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 100 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)this + 13) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

