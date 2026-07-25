/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000284638
 * Mangled: _ZThn16_N5Caver18MagicBoltComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MagicBoltComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3EB0  Caver::SpellComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 12
 *   insn=0x0000000000284644 string=0x0000000000284648 "T"
 *   insn=0x000000000028464C string=0x0000000000284650 "?"
 *   insn=0x0000000000284658 string=0x000000000028465C "@"
 *   insn=0x000000000028465C string=0x0000000000284660 "?"
 *   insn=0x000000000028465C string=0x0000000000284684 "H"
 *   insn=0x000000000028466C string=0x0000000000284670 "("
 *   insn=0x0000000000284674 string=0x0000000000284678 "h""
 *   insn=0x000000000028467C string=0x0000000000284680 ""
 *   insn=0x0000000000284684 string=0x0000000000284688 ""
 *   insn=0x0000000000284688 string=0x000000000028468C "h"
 *   insn=0x0000000000284698 string=0x00000000001F3EB0 "P'"
 *   insn=0x00000000002846BC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicBoltComponent::SetValueForBindedProperty(
        Caver::MagicBoltComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 104 )
  {
    *((_DWORD *)this + 66) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 103 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)(v3 + 264) = v4;
  }
  else
  {
    Caver::SpellComponent::SetValueForBindedProperty((Caver::MagicBoltComponent *)((char *)this - 16), a2, a3);
  }
}

