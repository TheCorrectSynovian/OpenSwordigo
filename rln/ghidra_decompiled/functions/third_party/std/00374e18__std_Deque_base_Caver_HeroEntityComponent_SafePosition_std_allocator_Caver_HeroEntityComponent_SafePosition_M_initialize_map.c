/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374e18
 * Function: std::_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_initialize_map
 * Signature: undefined __thiscall _M_initialize_map(_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>> * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::_Deque_base<Caver::HeroEntityComponent::SafePosition,
   std::allocator<Caver::HeroEntityComponent::SafePosition> >::_M_initialize_map(unsigned long) */

void __thiscall
std::
_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
::_M_initialize_map(_Deque_base<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                    *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  SafePosition **ppSVar3;
  SafePosition **ppSVar4;
  void *pvVar5;
  SafePosition *pSVar6;
  
  uVar1 = param_1 / 0xc + 3;
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  *(ulong *)(this + 8) = uVar1;
  if (uVar1 >> 0x3d == 0) {
    lVar2 = param_1 / 0xc + 1;
    pvVar5 = operator_new(uVar1 << 3);
    *(void **)this = pvVar5;
    ppSVar3 = (SafePosition **)
              ((long)pvVar5 + ((*(long *)(this + 8) - lVar2) * 4 & 0xfffffffffffffff8U));
    ppSVar4 = ppSVar3 + lVar2;
    _M_create_nodes(this,ppSVar3,ppSVar4);
    pSVar6 = *ppSVar3;
    *(SafePosition ***)(this + 0x48) = ppSVar4 + -1;
    *(SafePosition **)(this + 0x10) = pSVar6;
    *(SafePosition **)(this + 0x18) = pSVar6;
    *(SafePosition **)(this + 0x20) = pSVar6 + 0x1e0;
    *(SafePosition ***)(this + 0x28) = ppSVar3;
    pSVar6 = ppSVar4[-1];
    *(SafePosition **)(this + 0x30) = pSVar6 + (param_1 % 0xc) * 0x28;
    *(SafePosition **)(this + 0x38) = pSVar6;
    *(SafePosition **)(this + 0x40) = pSVar6 + 0x1e0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00665294();
}


