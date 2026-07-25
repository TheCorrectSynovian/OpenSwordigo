/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000473188
 * Mangled: _ZThn16_N5Caver11SceneObject25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA570  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000047318C string=0x00000000001FA570 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SceneObject::SetValueForBindedProperty(
        Caver::SceneObject *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::SceneObject::SetValueForBindedProperty((Caver::SceneObject *)((char *)this - 16), a2, a3);
}

