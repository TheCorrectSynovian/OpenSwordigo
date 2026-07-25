/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285D48
 * Mangled: _ZThn16_N5Caver18MagicBombComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MagicBombComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 8
 *   insn=0x0000000000285D54 string=0x0000000000285D58 "T"
 *   insn=0x0000000000285D5C string=0x0000000000285D60 "?"
 *   insn=0x0000000000285D74 string=0x0000000000285D78 "f"
 *   insn=0x0000000000285D7C string=0x0000000000285D80 "`6"
 *   insn=0x0000000000285D88 string=0x0000000000285D8C "I"
 *   insn=0x0000000000285D8C string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000285D9C string=0x0000000000285DB0 "H"
 *   insn=0x0000000000285DB0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicBombComponent::SetValueForBindedProperty(
        Caver::MagicBombComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 100 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)v3 + 13) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty((Caver::MagicBombComponent *)((char *)this - 16), a2, a3);
  }
}

