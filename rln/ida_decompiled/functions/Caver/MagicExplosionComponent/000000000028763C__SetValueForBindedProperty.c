/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028763C
 * Mangled: _ZN5Caver23MagicExplosionComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::MagicExplosionComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 17
 *   insn=0x0000000000287648 string=0x000000000028764C "T"
 *   insn=0x0000000000287654 string=0x0000000000287658 "?"
 *   insn=0x0000000000287660 string=0x0000000000287664 "?"
 *   insn=0x0000000000287660 string=0x000000000028769C "H"
 *   insn=0x0000000000287664 string=0x0000000000287668 " "
 *   insn=0x0000000000287668 string=0x000000000028766C "?"
 *   insn=0x0000000000287668 string=0x000000000028768C "H"
 *   insn=0x0000000000287678 string=0x000000000028767C "%"
 *   insn=0x0000000000287680 string=0x0000000000287684 "`."
 *   insn=0x0000000000287684 string=0x0000000000287688 ""
 *   insn=0x000000000028768C string=0x0000000000287690 ""
 *   insn=0x0000000000287690 string=0x0000000000287694 "h"
 *   insn=0x0000000000287694 string=0x0000000000287698 ""
 *   insn=0x000000000028769C string=0x00000000002876A0 ""
 *   insn=0x00000000002876A0 string=0x00000000002876A4 "h"
 *   insn=0x00000000002876B0 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002876D4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MagicExplosionComponent::SetValueForBindedProperty(
        Caver::MagicExplosionComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 3:
      *((_DWORD *)this + 57) = **((_DWORD **)a3 + 1);
      break;
    case 2:
      *((_DWORD *)this + 56) = **((_DWORD **)a3 + 1);
      break;
    case 1:
      Caver::BindingValue::FloatColorValue(a3);
      *((_OWORD *)this + 11) = v4;
      break;
    default:
      Caver::Component::SetValueForBindedProperty(this, a2, a3);
      break;
  }
}

