/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AE494
 * Mangled: _ZThn16_N5Caver21PortalEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002ADE28  Caver::PortalEffectComponent::CreateVertices(void)
 *
 * Callees: 5
 *   0x00000000001F4830  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 15
 *   insn=0x00000000002AE4A0 string=0x00000000002AE4A4 "T"
 *   insn=0x00000000002AE4A8 string=0x00000000002AE4AC "?"
 *   insn=0x00000000002AE4B4 string=0x00000000002AE4B8 "`"
 *   insn=0x00000000002AE4B8 string=0x00000000002AE4BC "?"
 *   insn=0x00000000002AE4BC string=0x00000000002AE4C0 "!"
 *   insn=0x00000000002AE4D4 string=0x00000000002AE4D8 "`"
 *   insn=0x00000000002AE4DC string=0x00000000002AE4E0 ""
 *   insn=0x00000000002AE4DC string=0x00000000001F4830 "P'"
 *   insn=0x00000000002AE4E8 string=0x00000000002AE4EC "q9"
 *   insn=0x00000000002AE4EC string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002AE4F0 string=0x00000000002AE4F4 "hf"
 *   insn=0x00000000002AE4F8 string=0x00000000002AE4FC "h"
 *   insn=0x00000000002AE508 string=0x00000000001FC4E0 "0'"
 *   insn=0x00000000002AE518 string=0x00000000002AE52C "i"
 *   insn=0x00000000002AE52C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::PortalEffectComponent::SetValueForBindedProperty(
        Caver::PortalEffectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 103 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *((_QWORD *)v3 + 25) = v4;
    *((_DWORD *)v3 + 52) = DWORD2(v4);
  }
  else if ( a2 == 102 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)(v3 + 184) = v4;
    Caver::PortalEffectComponent::CreateVertices((Caver::PortalEffectComponent *)v3);
  }
  else
  {
    Caver::GlowComponent::SetValueForBindedProperty((Caver::PortalEffectComponent *)((char *)this - 16), a2, a3);
  }
}

