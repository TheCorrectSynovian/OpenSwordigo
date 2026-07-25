/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B87A0
 * Mangled: _ZN5Caver19GroundMeshComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000002B87AC string=0x00000000002B87B0 "T"
 *   insn=0x00000000002B87B8 string=0x00000000002B87BC "?"
 *   insn=0x00000000002B87C4 string=0x00000000002B87C8 "a"
 *   insn=0x00000000002B87C4 string=0x00000000002B87E4 "H"
 *   insn=0x00000000002B87D8 string=0x00000000002B87DC "`."
 *   insn=0x00000000002B87DC string=0x00000000002B87E0 ""
 *   insn=0x00000000002B87E4 string=0x00000000002B87E8 ""
 *   insn=0x00000000002B87E8 string=0x00000000002B87EC "h"
 *   insn=0x00000000002B87F8 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002B881C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GroundMeshComponent::SetValueForBindedProperty(
        Caver::GroundMeshComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 1 )
  {
    *((_BYTE *)this + 192) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
  }
  else
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)this + 11) = v4;
  }
}

