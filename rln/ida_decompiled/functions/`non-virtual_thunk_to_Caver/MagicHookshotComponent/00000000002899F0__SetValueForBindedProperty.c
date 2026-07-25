/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002899F0
 * Mangled: _ZThn16_N5Caver22MagicHookshotComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002899FC string=0x0000000000289A00 "T"
 *   insn=0x0000000000289A04 string=0x0000000000289A08 "?"
 *   insn=0x0000000000289A1C string=0x0000000000289A20 "<"
 *   insn=0x0000000000289A24 string=0x0000000000289A28 "h"
 *   insn=0x0000000000289A38 string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000289A5C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicHookshotComponent::SetValueForBindedProperty(
        Caver::MagicHookshotComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 104 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)(v3 + 296) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty((Caver::MagicHookshotComponent *)((char *)this - 16), a2, a3);
  }
}

