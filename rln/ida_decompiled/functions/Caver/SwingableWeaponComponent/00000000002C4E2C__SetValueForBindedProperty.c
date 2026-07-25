/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C4E2C
 * Mangled: _ZN5Caver24SwingableWeaponComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002030E0  Caver::SwingableWeaponComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 5
 *   0x00000000001F4950  Caver::SwingableWeaponComponent::SetGlowColor(Caver::FloatColor)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x00000000001FED20  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Referenced strings: 23
 *   insn=0x00000000002C4E3C string=0x00000000002C4E40 "V"
 *   insn=0x00000000002C4E5C string=0x00000000002C4E60 ""
 *   insn=0x00000000002C4E60 string=0x00000000002C4E64 ")"
 *   insn=0x00000000002C4E64 string=0x00000000002C4E6C "(y"
 *   insn=0x00000000002C4E6C string=0x00000000002C4E70 ""
 *   insn=0x00000000002C4E74 string=0x00000000002C4E98 "`"
 *   insn=0x00000000002C4E78 string=0x00000000002C4E7C "`"
 *   insn=0x00000000002C4E7C string=0x00000000002C4E80 ""
 *   insn=0x00000000002C4E80 string=0x00000000002C4E84 "h"
 *   insn=0x00000000002C4EA0 string=0x00000000002C4EA4 "@"
 *   insn=0x00000000002C4EA4 string=0x00000000002C4EA8 ""
 *   insn=0x00000000002C4EA8 string=0x00000000002C4EAC ""
 *   insn=0x00000000002C4EB0 string=0x00000000002C4EB4 ""
 *   insn=0x00000000002C4EB4 string=0x00000000002C4EB8 ""
 *   insn=0x00000000002C4ECC string=0x00000000001F9320 "0'"
 *   insn=0x00000000002C4ED4 string=0x00000000002C4ED8 "`"
 *   insn=0x00000000002C4ED8 string=0x00000000002C4EDC ""
 *   insn=0x00000000002C4EDC string=0x00000000002C4EE0 "h"
 *   insn=0x00000000002C4EE8 string=0x00000000002C4EEC ""
 *   insn=0x00000000002C4F04 string=0x00000000001F4950 "P'"
 *   insn=0x00000000002C4F0C string=0x00000000002C4F10 ""
 *   insn=0x00000000002C4F10 string=0x00000000002C4F14 "h"
 *   insn=0x00000000002C4F3C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SwingableWeaponComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::Component *v5; // x19
  float v6; // s0
  _DWORD *v7; // x0
  int v8; // w8

  v5 = (Caver::Component *)this;
  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 2:
      v6 = *(float *)(this + 420);
      *(_DWORD *)(this + 412) = **((_DWORD **)a3 + 1);
      return Caver::SwingableWeaponComponent::SetGlowIntensity((Caver::SwingableWeaponComponent *)this, v6);
    case 3:
      v6 = *(float *)(this + 420);
      *(_DWORD *)(this + 416) = **((_DWORD **)a3 + 1);
      return Caver::SwingableWeaponComponent::SetGlowIntensity((Caver::SwingableWeaponComponent *)this, v6);
    case 4:
      v6 = **((float **)a3 + 1);
      return Caver::SwingableWeaponComponent::SetGlowIntensity((Caver::SwingableWeaponComponent *)this, v6);
    case 5:
      Caver::BindingValue::FloatColorValue(a3);
      return Caver::SwingableWeaponComponent::SetGlowColor();
    case 6:
      *(_DWORD *)(this + 444) = **((_DWORD **)a3 + 1);
      return this;
    case 9:
      v7 = *(_DWORD **)(this + 360);
      *((_QWORD *)v5 + 45) = 0;
      if ( v7 )
      {
        v8 = v7[2] - 1;
        v7[2] = v8;
        if ( !v8 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      return Caver::Component::SetValueForBindedProperty(v5, a2, a3);
    default:
      return Caver::Component::SetValueForBindedProperty(v5, a2, a3);
  }
}

