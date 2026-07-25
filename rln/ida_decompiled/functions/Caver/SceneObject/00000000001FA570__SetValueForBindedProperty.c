/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA570
 * Mangled: ._ZN5Caver11SceneObject25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000473188  `non-virtual thunk to'Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA578 string=0x00000000001FA57C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::SetValueForBindedProperty(
        Caver::SceneObject *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver11SceneObject25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

