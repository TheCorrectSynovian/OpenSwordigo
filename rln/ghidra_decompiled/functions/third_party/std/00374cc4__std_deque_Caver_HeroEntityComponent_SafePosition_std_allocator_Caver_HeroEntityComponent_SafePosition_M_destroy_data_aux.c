/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00374cc4
 * Function: std::deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>::_M_destroy_data_aux
 * Signature: undefined __thiscall _M_destroy_data_aux(deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>> * this, _Deque_iterator param_1, _Deque_iterator param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<Caver::HeroEntityComponent::SafePosition,
   std::allocator<Caver::HeroEntityComponent::SafePosition>
   >::_M_destroy_data_aux(std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>,
   std::_Deque_iterator<Caver::HeroEntityComponent::SafePosition,
   Caver::HeroEntityComponent::SafePosition&, Caver::HeroEntityComponent::SafePosition*>) */

void __thiscall
std::
deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
::_M_destroy_data_aux(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  plVar4 = (long *)param_2[3];
  plVar3 = (long *)param_3[3];
  plVar2 = plVar4 + 1;
  if (plVar2 < plVar3) {
    do {
      lVar5 = *plVar2;
      lVar6 = 0x10;
      do {
        plVar3 = *(long **)(lVar5 + lVar6);
        if ((plVar3 != (long *)0x0) &&
           (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
          (**(code **)(*plVar3 + 8))();
        }
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != 0x1f0);
      plVar3 = (long *)param_3[3];
      plVar2 = plVar2 + 1;
    } while (plVar2 < plVar3);
    plVar4 = (long *)param_2[3];
  }
  lVar6 = *param_2;
  if (plVar4 == plVar3) {
    lVar5 = *param_3;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      plVar2 = *(long **)(lVar6 + 0x10);
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else {
    lVar5 = param_2[2];
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      plVar2 = *(long **)(lVar6 + 0x10);
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
    }
    lVar5 = *param_3;
    for (lVar6 = param_3[1]; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      plVar2 = *(long **)(lVar6 + 0x10);
      if ((plVar2 != (long *)0x0) &&
         (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  return;
}


