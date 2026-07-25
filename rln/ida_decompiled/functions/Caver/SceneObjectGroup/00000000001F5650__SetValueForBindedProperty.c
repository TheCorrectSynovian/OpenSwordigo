/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5650
 * Mangled: ._ZN5Caver16SceneObjectGroup25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x000000000047653C  `non-virtual thunk to'Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000004760BC  Caver::SceneObjectGroup::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5658 string=0x00000000001F565C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObjectGroup::SetValueForBindedProperty(
        Caver::SceneObjectGroup *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver16SceneObjectGroup25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

