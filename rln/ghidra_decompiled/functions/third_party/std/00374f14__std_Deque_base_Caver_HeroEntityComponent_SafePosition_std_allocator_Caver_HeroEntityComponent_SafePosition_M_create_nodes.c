/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374f14
 * Function: std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_create_nodes
 * Signature: undefined __thiscall _M_create_nodes(_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>> * this, SafePosition * * param_1, SafePosition * * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<Caver::HeroEntityComponent::SafePosition,
   std::allocator<Caver::HeroEntityComponent::SafePosition>
   >::_M_create_nodes(Caver::HeroEntityComponent::SafePosition**,
   Caver::HeroEntityComponent::SafePosition**) */

_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
* __thiscall
std::
_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
::_M_create_nodes(_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                  *this,SafePosition **param_1,SafePosition **param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    this = operator_new(0x1e0);
    *param_1 = (SafePosition *)this;
  }
  return this;
}


