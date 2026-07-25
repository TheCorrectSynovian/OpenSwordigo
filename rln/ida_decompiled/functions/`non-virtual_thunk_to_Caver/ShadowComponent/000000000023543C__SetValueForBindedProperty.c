/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023543C
 * Mangled: _ZThn16_N5Caver15ShadowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::ShadowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *
 * Referenced strings: 17
 *   insn=0x0000000000235448 string=0x000000000023544C "T"
 *   insn=0x0000000000235450 string=0x0000000000235454 "?"
 *   insn=0x0000000000235460 string=0x0000000000235464 "?"
 *   insn=0x0000000000235468 string=0x000000000023546C "!"
 *   insn=0x0000000000235468 string=0x0000000000235480 "H"
 *   insn=0x000000000023546C string=0x0000000000235470 "H"
 *   insn=0x0000000000235470 string=0x0000000000235474 ""
 *   insn=0x0000000000235474 string=0x0000000000235478 "h~"
 *   insn=0x0000000000235480 string=0x0000000000235484 ""
 *   insn=0x0000000000235484 string=0x0000000000235488 "h"
 *   insn=0x0000000000235488 string=0x000000000023548C ""
 *   insn=0x0000000000235498 string=0x00000000001FCAB0 "0'"
 *   insn=0x000000000023549C string=0x00000000002354A0 "hB"
 *   insn=0x00000000002354A4 string=0x00000000002354A8 "h"
 *   insn=0x00000000002354B4 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002354C4 string=0x00000000002354D8 "~"
 *   insn=0x00000000002354D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::ShadowComponent::SetValueForBindedProperty(
        Caver::ShadowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int64 v4; // [xsp+8h] [xbp-28h]
  int v5; // [xsp+10h] [xbp-20h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 2 )
  {
    Caver::BindingValue::Vector3Value(a3);
    *(_QWORD *)(v3 + 132) = v4;
    *((_DWORD *)v3 + 35) = v5;
  }
  else if ( a2 == 1 )
  {
    *((_DWORD *)this + 28) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty((Caver::ShadowComponent *)((char *)this - 16), a2, a3);
  }
  else
  {
    *((_DWORD *)this + 27) = **((_DWORD **)a3 + 1);
  }
}

