/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C278C
 * Mangled: _ZN5Caver18WaterMeshComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::WaterMeshComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
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
 *   insn=0x00000000002C279C string=0x00000000002C27A0 "U"
 *   insn=0x00000000002C27B4 string=0x00000000002C27B8 " "
 *   insn=0x00000000002C27D0 string=0x00000000002C27D4 "`."
 *   insn=0x00000000002C27E8 string=0x00000000002C27EC "`2"
 *   insn=0x00000000002C27EC string=0x00000000002C27F0 ""
 *   insn=0x00000000002C27FC string=0x00000000001F9320 "0'"
 *   insn=0x00000000002C2800 string=0x00000000002C2804 "a"
 *   insn=0x00000000002C280C string=0x00000000001F3AA0 "P'"
 *   insn=0x00000000002C2834 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WaterMeshComponent::SetValueForBindedProperty(
        Caver::WaterMeshComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int128 v5; // [xsp+8h] [xbp-38h]

  _ReadStatusReg(TPIDR_EL0);
  if ( a2 == 3 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)this + 12) = v5;
  }
  else if ( a2 == 2 )
  {
    Caver::BindingValue::FloatColorValue(a3);
    *((_OWORD *)this + 11) = v5;
  }
  else
  {
    Caver::Component::SetValueForBindedProperty(this, a2, a3);
    if ( a2 == 1 )
      Caver::WaterMeshComponent::CreateMesh(this);
  }
}

