/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000289980
 * Mangled: _ZN5Caver22MagicHookshotComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MagicHookshotComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 8
 *   insn=0x000000000028998C string=0x0000000000289990 "T"
 *   insn=0x0000000000289998 string=0x000000000028999C "?"
 *   insn=0x00000000002899AC string=0x00000000002899B0 "X"
 *   insn=0x00000000002899B4 string=0x00000000002899B8 "h"
 *   insn=0x00000000002899C4 string=0x00000000002899C8 ":"
 *   insn=0x00000000002899C8 string=0x00000000001F3EB0 "P'"
 *   insn=0x00000000002899D8 string=0x00000000002899EC "9"
 *   insn=0x00000000002899EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicHookshotComponent::SetValueForBindedProperty(
        Caver::MagicHookshotComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 104 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)((char *)this + 296) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

