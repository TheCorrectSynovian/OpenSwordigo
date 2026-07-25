/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002876D8
 * Mangled: _ZThn16_N5Caver23MagicExplosionComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000002876E4 string=0x00000000002876E8 "T"
 *   insn=0x00000000002876EC string=0x00000000002876F0 "?"
 *   insn=0x00000000002876FC string=0x0000000000287700 "?"
 *   insn=0x00000000002876FC string=0x0000000000287738 "H"
 *   insn=0x0000000000287700 string=0x0000000000287704 " "
 *   insn=0x0000000000287704 string=0x0000000000287708 "?"
 *   insn=0x0000000000287704 string=0x0000000000287728 "H"
 *   insn=0x000000000028771C string=0x0000000000287720 "`."
 *   insn=0x0000000000287720 string=0x0000000000287724 ""
 *   insn=0x0000000000287728 string=0x000000000028772C ""
 *   insn=0x000000000028772C string=0x0000000000287730 "h"
 *   insn=0x0000000000287730 string=0x0000000000287734 ""
 *   insn=0x0000000000287738 string=0x000000000028773C ""
 *   insn=0x000000000028773C string=0x0000000000287740 "h"
 *   insn=0x000000000028774C string=0x00000000001F9320 "0'"
 *   insn=0x0000000000287770 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::MagicExplosionComponent::SetValueForBindedProperty(
        Caver::MagicExplosionComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 3:
      *((_DWORD *)this + 53) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)this + 52) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      Caver::BindingValue::FloatColorValue(a3);
      *((_OWORD *)v3 + 11) = v4;
      break;
    default:
      Caver::Component::SetValueForBindedProperty((Caver::MagicExplosionComponent *)((char *)this - 16), a2, a3);
      break;
  }
}

