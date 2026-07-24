/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00371e60
 * Function: Caver::HeroEntityComponent::HeroEntityComponent
 * Signature: undefined __thiscall HeroEntityComponent(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::HeroEntityComponent() */

void __thiscall Caver::HeroEntityComponent::HeroEntityComponent(HeroEntityComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  EntityComponent::EntityComponent((EntityComponent *)this);
  puVar2 = PTR_vtable_007e7ce8;
  *(undefined **)this = PTR_vtable_007e7ce8 + 0x10;
  puVar1 = PTR_DAT_007e5de8 + 0x18;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined **)(this + 0x150) = puVar1;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined **)(this + 0x18) = puVar2 + 0x168;
  *(undefined **)(this + 0x10) = puVar2 + 0x128;
  memset((_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
          *)(this + 0x180),0,0x50);
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  std::
  _Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
  ::_M_initialize_map((_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                       *)(this + 0x180),0);
  return;
}


