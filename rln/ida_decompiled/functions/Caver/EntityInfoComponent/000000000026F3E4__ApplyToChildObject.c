/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026F3E4
 * Mangled: _ZN5Caver19EntityInfoComponent18ApplyToChildObjectEPNS_11SceneObjectE
 * Demangled: Caver::EntityInfoComponent::ApplyToChildObject(Caver::SceneObject *)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001FD500  Caver::EntityInfoComponent::ApplyToObject(Caver::SceneObject *)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026F808  Caver::EntityInfoComponent::className(void)
 *
 * Referenced strings: 4
 *   insn=0x000000000026F3F4 string=0x000000000026F3F8 "!"
 *   insn=0x000000000026F400 string=0x000000000026F404 "wD"
 *   insn=0x000000000026F424 string=0x000000000026F428 "68"
 *   insn=0x000000000026F428 string=0x00000000001FD500 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityInfoComponent::ApplyToChildObject(
        Caver::EntityInfoComponent *this,
        Caver::SceneObject *a2)
{
  if ( !Caver::SceneObject::ComponentWithInterface(a2, (__int64)Caver::EntityInfoComponent::Interface) )
    Caver::EntityInfoComponent::ApplyToObject(this, a2);
}

