/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B8820
 * Mangled: _ZThn16_N5Caver19GroundMeshComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::GroundMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000002B882C string=0x00000000002B8830 "T"
 *   insn=0x00000000002B8834 string=0x00000000002B8838 "?"
 *   insn=0x00000000002B8844 string=0x00000000002B8848 "a"
 *   insn=0x00000000002B8844 string=0x00000000002B8864 "H"
 *   insn=0x00000000002B8858 string=0x00000000002B885C "`."
 *   insn=0x00000000002B885C string=0x00000000002B8860 ""
 *   insn=0x00000000002B8864 string=0x00000000002B8868 ""
 *   insn=0x00000000002B8868 string=0x00000000002B886C "h"
 *   insn=0x00000000002B8878 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002B889C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::GroundMeshComponent::SetValueForBindedProperty(
        Caver::GroundMeshComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  char *v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (char *)this - 16;
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 1 )
  {
    *((_BYTE *)this + 176) = **((_BYTE **)a3 + 1);
  }
  else if ( a2 )
  {
    Caver::Component::SetValueForBindedProperty((Caver::GroundMeshComponent *)((char *)this - 16), a2, a3);
  }
  else
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)v3 + 11) = v4;
  }
}

