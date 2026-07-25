/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047653C
 * Mangled: _ZThn16_N5Caver16SceneObjectGroup25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5650  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x000000000047653C string=0x0000000000476540 "D"
 *   insn=0x0000000000476540 string=0x00000000001F5650 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SceneObjectGroup::SetValueForBindedProperty(
        Caver::SceneObjectGroup *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SceneObjectGroup::SetValueForBindedProperty((Caver::SceneObjectGroup *)((char *)this - 16), a2, a3);
}

