/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2764
 * Mangled: _ZThn16_N5Caver18WaterMeshComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::WaterMeshComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000002C276C string=0x00000000002C2770 "?"
 *   insn=0x00000000002C2778 string=0x00000000002C277C "A"
 *   insn=0x00000000002C277C string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002C2780 string=0x00000000002C2784 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WaterMeshComponent::ValueForBindedProperty(
        Caver::WaterMeshComponent *this,
        const Caver::FloatColor *a2)
{
  Caver::Component *v2; // x0
  Caver::BindingValue *v3; // x0

  v2 = (Caver::WaterMeshComponent *)((char *)this - 16);
  if ( (_DWORD)a2 == 3 )
  {
    v3 = (Caver::Component *)((char *)v2 + 192);
    return Caver::BindingValue::ValueWithFloatColor(v3, a2);
  }
  if ( (_DWORD)a2 == 2 )
  {
    v3 = (Caver::Component *)((char *)v2 + 176);
    return Caver::BindingValue::ValueWithFloatColor(v3, a2);
  }
  return Caver::Component::ValueForBindedProperty(v2, (int)a2);
}

