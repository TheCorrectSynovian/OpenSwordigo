/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202C70
 * Mangled: ._ZN5Caver17ItemDropComponent15DropItemObjectsERKSt6vectorIN5boost13intrusive_ptrINS_11SceneObjectEEESaIS5_EE
 * Demangled: Caver::ItemDropComponent::DropItemObjects(std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>> const&)
 *
 * Callers: 2
 *   0x000000000027845C  Caver::ItemDropComponent::Trigger(void)
 *   0x0000000000279D28  sub_279D28
 *
 * Callees: 1
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202C78 string=0x0000000000202C7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ItemDropComponent::DropItemObjects()
{
  JUMPOUT(0x279888);
}

