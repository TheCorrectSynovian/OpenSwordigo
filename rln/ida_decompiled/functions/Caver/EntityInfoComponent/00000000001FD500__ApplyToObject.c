/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD500
 * Mangled: ._ZN5Caver19EntityInfoComponent13ApplyToObjectEPNS_11SceneObjectE
 * Demangled: Caver::EntityInfoComponent::ApplyToObject(Caver::SceneObject *)
 *
 * Callers: 3
 *   0x000000000026EED8  Caver::EntityInfoComponent::Prepare(void)
 *   0x000000000026F3E4  Caver::EntityInfoComponent::ApplyToChildObject(Caver::SceneObject *)
 *   0x000000000026F4DC  Caver::EntityInfoComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000026F200  Caver::SceneObject::GetComponentsWithInterface<Caver::EntityInfoComponent>(std::vector<Caver::EntityInfoComponent *,std::allocator<Caver::EntityInfoComponent *>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD508 string=0x00000000001FD50C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::EntityInfoComponent::ApplyToObject(Caver::EntityInfoComponent *this, Caver::SceneObject *a2)
{
  JUMPOUT(0x26F324);
}

