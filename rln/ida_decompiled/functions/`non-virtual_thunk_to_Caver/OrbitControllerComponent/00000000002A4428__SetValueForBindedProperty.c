/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4428
 * Mangled: _ZThn16_N5Caver24OrbitControllerComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::OrbitControllerComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FCAB0  Caver::BindingValue::Vector3Value(void)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 20
 *   insn=0x00000000002A4434 string=0x00000000002A4438 "T"
 *   insn=0x00000000002A443C string=0x00000000002A4440 "?"
 *   insn=0x00000000002A4448 string=0x00000000002A444C " "
 *   insn=0x00000000002A444C string=0x00000000002A4450 "?"
 *   insn=0x00000000002A444C string=0x00000000002A44B0 "H"
 *   insn=0x00000000002A4454 string=0x00000000002A4458 "A"
 *   insn=0x00000000002A4454 string=0x00000000002A4494 "H"
 *   insn=0x00000000002A4464 string=0x00000000001FCAB0 "0'"
 *   insn=0x00000000002A4480 string=0x00000000002A4484 "h"
 *   insn=0x00000000002A4488 string=0x00000000002A448C "h"
 *   insn=0x00000000002A4494 string=0x00000000002A4498 "\t"
 *   insn=0x00000000002A4498 string=0x00000000002A449C "!"
 *   insn=0x00000000002A4498 string=0x0000000000584004 "5"
 *   insn=0x00000000002A44A4 string=0x00000000002A44A8 "`"
 *   insn=0x00000000002A44A8 string=0x00000000002A44AC ""
 *   insn=0x00000000002A44B0 string=0x00000000002A44B4 ""
 *   insn=0x00000000002A44B4 string=0x00000000002A44B8 "h"
 *   insn=0x00000000002A44C4 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002A44D4 string=0x00000000002A44E8 "zG"
 *   insn=0x00000000002A44E8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::OrbitControllerComponent::SetValueForBindedProperty(
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

  v3 = this - 16;
  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 == 2 )
  {
    *(_DWORD *)(this + 124) = **((_DWORD **)a3 + 1);
  }
  else if ( a2 == 1 )
  {
    *(float *)(this + 120) = **((float **)a3 + 1) * 0.017453;
  }
  else if ( a2 )
  {
    return Caver::Component::SetValueForBindedProperty((Caver::Component *)(this - 16), a2, a3);
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

