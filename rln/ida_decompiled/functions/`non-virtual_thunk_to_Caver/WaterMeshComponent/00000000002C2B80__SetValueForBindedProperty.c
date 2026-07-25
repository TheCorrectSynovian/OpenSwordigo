/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2B80
 * Mangled: _ZThn16_N5Caver18WaterMeshComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F3AA0  Caver::WaterMeshComponent::CreateMesh(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F9320  Caver::Component::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *
 * Referenced strings: 9
 *   insn=0x00000000002C2B90 string=0x00000000002C2B94 "U"
 *   insn=0x00000000002C2BA8 string=0x00000000002C2BAC " "
 *   insn=0x00000000002C2BC4 string=0x00000000002C2BC8 "`."
 *   insn=0x00000000002C2BDC string=0x00000000002C2BE0 "`2"
 *   insn=0x00000000002C2BE0 string=0x00000000002C2BE4 ""
 *   insn=0x00000000002C2BF0 string=0x00000000001F9320 "0'"
 *   insn=0x00000000002C2BF4 string=0x00000000002C2BF8 "a"
 *   insn=0x00000000002C2C00 string=0x00000000001F3AA0 "P'"
 *   insn=0x00000000002C2C28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::WaterMeshComponent::SetValueForBindedProperty(
        Caver::WaterMeshComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::WaterMeshComponent *v4; // x19
  __int128 v5; // [xsp+8h] [xbp-38h]

  v4 = (Caver::WaterMeshComponent *)((char *)this - 16);
  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 3 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)v4 + 12) = v5;
  }
  else if ( a2 == 2 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)v4 + 11) = v5;
  }
  else
  {
    Caver::Component::SetValueForBindedProperty((Caver::WaterMeshComponent *)((char *)this - 16), a2, a3);
    if ( a2 == 1 )
      Caver::WaterMeshComponent::CreateMesh(v4);
  }
}

