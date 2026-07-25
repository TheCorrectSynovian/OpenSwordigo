/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B877C
 * Mangled: _ZThn16_N5Caver19GroundMeshComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B878C string=0x00000000002B8790 "<"
 *   insn=0x00000000002B8790 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002B8794 string=0x00000000002B8798 "V"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GroundMeshComponent::ValueForBindedProperty(
        Caver::GroundMeshComponent *this,
        const Caver::FloatColor *a2)
{
  unsigned __int8 *v2; // x0

  v2 = (unsigned __int8 *)this - 16;
  if ( (_DWORD)a2 == 1 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)v2[192], 1);
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty((Caver::Component *)v2, (int)a2);
  return Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)(v2 + 176), a2);
}

