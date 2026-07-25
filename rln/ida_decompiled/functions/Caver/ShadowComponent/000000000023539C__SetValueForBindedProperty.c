/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023539C
 * Mangled: _ZN5Caver15ShadowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *
 * Referenced strings: 16
 *   insn=0x00000000002353A8 string=0x00000000002353AC "T"
 *   insn=0x00000000002353B4 string=0x00000000002353B8 "?"
 *   insn=0x00000000002353C0 string=0x00000000002353C4 "?"
 *   insn=0x00000000002353C8 string=0x00000000002353CC "!"
 *   insn=0x00000000002353C8 string=0x00000000002353E0 "H"
 *   insn=0x00000000002353CC string=0x00000000002353D0 "H"
 *   insn=0x00000000002353D0 string=0x00000000002353D4 ""
 *   insn=0x00000000002353D4 string=0x00000000002353D8 "h~"
 *   insn=0x00000000002353E0 string=0x00000000002353E4 ""
 *   insn=0x00000000002353E4 string=0x00000000002353E8 "h"
 *   insn=0x00000000002353E8 string=0x00000000002353EC ""
 *   insn=0x00000000002353F8 string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002353FC string=0x0000000000235400 "hB"
 *   insn=0x0000000000235404 string=0x0000000000235408 "h"
 *   insn=0x0000000000235414 string=0x00000000001F9320 "0'"
 *   insn=0x0000000000235438 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ShadowComponent::SetValueForBindedProperty(
        Caver::ShadowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v4; // [xsp+8h] [xbp-28h]
  int v5; // [xsp+10h] [xbp-20h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 2 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *(_QWORD *)((char *)this + 132) = v4;
    *((_DWORD *)this + 35) = v5;
  }
  else if ( a2 == 1 )
  {
    *((_DWORD *)this + 32) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    *((_DWORD *)this + 31) = **((_DWORD **)a3 + 1);
  }
}

