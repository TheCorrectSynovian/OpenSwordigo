/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B875C
 * Mangled: _ZN5Caver19GroundMeshComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GroundMeshComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *
 * Referenced strings: 3
 *   insn=0x00000000002B8768 string=0x00000000002B876C "E"
 *   insn=0x00000000002B876C string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002B8770 string=0x00000000002B8774 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundMeshComponent::ValueForBindedProperty(
        Caver::GroundMeshComponent *this,
        const Caver::FloatColor *a2)
{
  if ( (_DWORD)a2 == 1 )
    return Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 192), 1);
  if ( (_DWORD)a2 )
    return Caver::Component::ValueForBindedProperty(this, (int)a2);
  return Caver::BindingValue::ValueWithFloatColor((Caver::GroundMeshComponent *)((char *)this + 176), a2);
}

