/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2740
 * Mangled: _ZN5Caver18WaterMeshComponent22ValueForBindedPropertyEi
 * Demangled: Caver::WaterMeshComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 4
 *   insn=0x00000000002C2744 string=0x00000000002C2748 "?"
 *   insn=0x00000000002C2750 string=0x00000000002C2754 "K"
 *   insn=0x00000000002C2754 string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002C2758 string=0x00000000002C275C "I"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WaterMeshComponent::ValueForBindedProperty(
        Caver::WaterMeshComponent *this,
        const Caver::FloatColor *a2)
{
  Caver::BindingValue *v2; // x0

  if ( (_DWORD)a2 == 3 )
  {
    v2 = (Caver::WaterMeshComponent *)((char *)this + 192);
    return Caver::BindingValue::ValueWithFloatColor(v2, a2);
  }
  if ( (_DWORD)a2 == 2 )
  {
    v2 = (Caver::WaterMeshComponent *)((char *)this + 176);
    return Caver::BindingValue::ValueWithFloatColor(v2, a2);
  }
  return Caver::Component::ValueForBindedProperty(this, (int)a2);
}

