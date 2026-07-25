/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4364
 * Mangled: _ZN5Caver24OrbitControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 19
 *   insn=0x00000000002A4370 string=0x00000000002A4374 "T"
 *   insn=0x00000000002A437C string=0x00000000002A4380 "?"
 *   insn=0x00000000002A4384 string=0x00000000002A4388 " "
 *   insn=0x00000000002A4388 string=0x00000000002A438C "?"
 *   insn=0x00000000002A4388 string=0x00000000002A43EC "H"
 *   insn=0x00000000002A4390 string=0x00000000002A4394 "A"
 *   insn=0x00000000002A4390 string=0x00000000002A43D0 "H"
 *   insn=0x00000000002A43A0 string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002A43BC string=0x00000000002A43C0 "h"
 *   insn=0x00000000002A43C4 string=0x00000000002A43C8 "h"
 *   insn=0x00000000002A43D0 string=0x00000000002A43D4 "\t"
 *   insn=0x00000000002A43D4 string=0x00000000002A43D8 "!"
 *   insn=0x00000000002A43D4 string=0x0000000000584004 "5"
 *   insn=0x00000000002A43E0 string=0x00000000002A43E4 "`"
 *   insn=0x00000000002A43E4 string=0x00000000002A43E8 ""
 *   insn=0x00000000002A43EC string=0x00000000002A43F0 ""
 *   insn=0x00000000002A43F0 string=0x00000000002A43F4 "h"
 *   insn=0x00000000002A4400 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002A4424 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::SetValueForBindedProperty(
        __int64 this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v3; // x19
  __int64 v4; // [xsp+8h] [xbp-38h]
  int v5; // [xsp+10h] [xbp-30h]
  __int64 v6; // [xsp+18h] [xbp-28h] BYREF
  int v7; // [xsp+20h] [xbp-20h]
  __int64 v8; // [xsp+28h] [xbp-18h]

  v3 = this;
  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    *(_DWORD *)(this + 140) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 1 )
  {
    *(float *)(this + 136) = **((float **)a3 + 1) * 0.017453;
  }
  else if ( a2 )
  {
    return Caver::Component::SetValueForBindedProperty((Caver::Component *)this, a2, a3);
  }
  else
  {
    Caver::BindingValue::Vector3Value(a3);
    v6 = v4;
    v7 = v5;
    this = Caver::Vector3::Normalize((Caver::Vector3 *)&v6);
    *(_QWORD *)(v3 + 124) = v6;
    *(_DWORD *)(v3 + 132) = v7;
  }
  return this;
}

