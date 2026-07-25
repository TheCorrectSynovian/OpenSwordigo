/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002845B0
 * Mangled: _ZN5Caver18MagicBoltComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 14
 *   insn=0x00000000002845BC string=0x00000000002845C0 "T"
 *   insn=0x00000000002845C8 string=0x00000000002845CC "?"
 *   insn=0x00000000002845D0 string=0x00000000002845D4 "@"
 *   insn=0x00000000002845D4 string=0x00000000002845D8 "?"
 *   insn=0x00000000002845D4 string=0x00000000002845FC "H"
 *   insn=0x00000000002845E4 string=0x00000000002845E8 "J"
 *   insn=0x00000000002845EC string=0x00000000002845F0 "h""
 *   insn=0x00000000002845F4 string=0x00000000002845F8 ""
 *   insn=0x00000000002845FC string=0x0000000000284600 ""
 *   insn=0x0000000000284600 string=0x0000000000284604 "h"
 *   insn=0x000000000028460C string=0x0000000000284610 "("
 *   insn=0x0000000000284610 string=0x00000000001F3EB0 "P'"
 *   insn=0x0000000000284620 string=0x0000000000284634 "'"
 *   insn=0x0000000000284634 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicBoltComponent::SetValueForBindedProperty(
        Caver::MagicBoltComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 104 )
  {
    *((_DWORD *)this + 70) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 103 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)((char *)this + 264) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

