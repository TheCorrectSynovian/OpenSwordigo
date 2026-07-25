/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ADD8C
 * Mangled: _ZN5Caver21PortalEffectComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::PortalEffectComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4830  Caver::PortalEffectComponent::CreateVertices(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000002ADD98 string=0x00000000002ADD9C "T"
 *   insn=0x00000000002ADDA4 string=0x00000000002ADDA8 "?"
 *   insn=0x00000000002ADDAC string=0x00000000002ADDB0 "`"
 *   insn=0x00000000002ADDB0 string=0x00000000002ADDB4 "?"
 *   insn=0x00000000002ADDB4 string=0x00000000002ADDB8 "!"
 *   insn=0x00000000002ADDC0 string=0x00000000002ADDC4 "SB"
 *   insn=0x00000000002ADDCC string=0x00000000002ADDD0 "`"
 *   insn=0x00000000002ADDD4 string=0x00000000002ADDD8 ""
 *   insn=0x00000000002ADDD4 string=0x00000000001F4830 "P'"
 *   insn=0x00000000002ADDE0 string=0x00000000002ADDE4 "3;"
 *   insn=0x00000000002ADDE4 string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002ADDE8 string=0x00000000002ADDEC "hf"
 *   insn=0x00000000002ADDF0 string=0x00000000002ADDF4 "h"
 *   insn=0x00000000002ADE00 string=0x00000000001FC4E0 "0'"
 *   insn=0x00000000002ADE10 string=0x00000000002ADE24 "+!"
 *   insn=0x00000000002ADE24 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalEffectComponent::SetValueForBindedProperty(
        Caver::PortalEffectComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 103 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *((_QWORD *)this + 25) = v4;
    *((_DWORD *)this + 52) = DWORD2(v4);
  }
  else if ( a2 == 102 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *(_OWORD *)((char *)this + 184) = v4;
    Caver::PortalEffectComponent::CreateVertices(this);
  }
  else
  {
    Caver::GlowComponent::SetValueForBindedProperty(this, a2, a3);
  }
}

