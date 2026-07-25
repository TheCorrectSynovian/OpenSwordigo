/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027845C
 * Mangled: _ZN5Caver17ItemDropComponent7TriggerEv
 * Demangled: Caver::ItemDropComponent::Trigger(void)
 *
 * Callers: 1
 *   0x00000000001F9780  Caver::ItemDropComponent::Trigger(void)
 *
 * Callees: 2
 *   0x00000000001F71A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000202C70  Caver::ItemDropComponent::DropItemObjects(std::vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>> const&)
 *
 * Referenced strings: 5
 *   insn=0x0000000000278468 string=0x000000000027846C "M"
 *   insn=0x000000000027846C string=0x00000000001F71A0 "0'"
 *   insn=0x0000000000278470 string=0x0000000000278474 "("
 *   insn=0x0000000000278474 string=0x0000000000278478 ")"
 *   insn=0x0000000000278478 string=0x000000000027847C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemDropComponent::Trigger(Caver::ItemDropComponent *this)
{
  Caver::ItemDropComponent::CreateItemObjects(this);
  if ( *((_QWORD *)this + 20) != *((_QWORD *)this + 19) )
    Caver::ItemDropComponent::DropItemObjects();
}

