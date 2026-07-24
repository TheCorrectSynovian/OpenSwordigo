/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00593aa4
 * Function: std::deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::_M_erase
 * Signature: undefined __cdecl _M_erase(_Deque_iterator param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<Caver::GUIApplication::QueuedEvent, std::allocator<Caver::GUIApplication::QueuedEvent>
   >::_M_erase(std::_Deque_iterator<Caver::GUIApplication::QueuedEvent,
   Caver::GUIApplication::QueuedEvent&, Caver::GUIApplication::QueuedEvent*>) */

void std::
     deque<Caver::GUIApplication::QueuedEvent,std::allocator<Caver::GUIApplication::QueuedEvent>>::
     _M_erase(long *param_1,long param_2,long *param_3)

{
  QueuedEvent *pQVar1;
  QueuedEvent *pQVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  QueuedEvent *pQVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  QueuedEvent *pQVar13;
  QueuedEvent *pQVar14;
  QueuedEvent *pQVar15;
  QueuedEvent *pQVar16;
  QueuedEvent *pQVar17;
  QueuedEvent *pQVar18;
  QueuedEvent *this;
  ulong uVar19;
  undefined1 auStack_d8 [32];
  QueuedEvent *local_b8;
  QueuedEvent *pQStack_b0;
  QueuedEvent *local_a8;
  undefined8 *puStack_a0;
  QueuedEvent *local_98;
  QueuedEvent *pQStack_90;
  QueuedEvent *local_88;
  undefined8 *local_80;
  QueuedEvent *local_78;
  QueuedEvent *local_70;
  QueuedEvent *local_68;
  undefined8 *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  this = (QueuedEvent *)*param_3;
  pQVar2 = (QueuedEvent *)param_3[1];
  pQVar1 = (QueuedEvent *)param_3[2];
  puVar3 = (undefined8 *)param_3[3];
  pQVar13 = this + 0x48;
  puVar11 = puVar3;
  pQVar14 = pQVar1;
  pQVar15 = pQVar2;
  if (pQVar13 == pQVar1) {
    puVar11 = puVar3 + 1;
    pQVar13 = (QueuedEvent *)*puVar11;
    pQVar14 = pQVar13 + 0x1f8;
    pQVar15 = pQVar13;
  }
  pQVar18 = *(QueuedEvent **)(param_2 + 0x10);
  pQVar16 = *(QueuedEvent **)(param_2 + 0x20);
  puVar4 = *(undefined8 **)(param_2 + 0x28);
  pQVar17 = *(QueuedEvent **)(param_2 + 0x30);
  pQVar6 = *(QueuedEvent **)(param_2 + 0x38);
  lVar8 = (long)*(undefined8 **)(param_2 + 0x48) - (long)puVar4;
  lVar7 = ((long)pQVar16 - (long)pQVar18 >> 3) * -0x71c71c71c71c71c7;
  uVar19 = (lVar7 + ((long)this - (long)pQVar2 >> 3) * -0x71c71c71c71c71c7 +
           (((long)puVar3 - (long)puVar4) - ((long)puVar3 - (long)puVar4 >> 3))) - 7;
  if (uVar19 < (lVar7 + (lVar8 - (lVar8 >> 3)) +
               ((long)pQVar17 - (long)pQVar6 >> 3) * -0x71c71c71c71c71c7) - 7U >> 1) {
    if (this != pQVar18) {
      local_70 = *(QueuedEvent **)(param_2 + 0x18);
      local_b8 = pQVar13;
      pQStack_b0 = pQVar15;
      local_a8 = pQVar14;
      puStack_a0 = puVar11;
      local_98 = this;
      pQStack_90 = pQVar2;
      local_88 = pQVar1;
      local_80 = puVar3;
      local_78 = pQVar18;
      local_68 = pQVar16;
      local_60 = puVar4;
      copy_backward<Caver::GUIApplication::QueuedEvent>(auStack_d8,&local_78,&local_98,&local_b8);
      this = *(QueuedEvent **)(param_2 + 0x10);
      pQVar16 = *(QueuedEvent **)(param_2 + 0x20);
    }
    Caver::GUIApplication::QueuedEvent::~QueuedEvent(this);
    if (this == pQVar16 + -0x48) {
      operator_delete(*(void **)(param_2 + 0x18));
      lVar7 = *(long *)(param_2 + 0x28);
      *(long *)(param_2 + 0x28) = lVar7 + 8;
      lVar7 = *(long *)(lVar7 + 8);
      *(long *)(param_2 + 0x10) = lVar7;
      *(long *)(param_2 + 0x18) = lVar7;
      *(long *)(param_2 + 0x20) = lVar7 + 0x1f8;
    }
    else {
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 0x48;
    }
  }
  else {
    if (pQVar13 == pQVar17) {
      if (pQVar17 != pQVar6) goto LAB_00593c08;
LAB_00593c48:
      operator_delete(pQVar6);
      lVar7 = *(long *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar7 + -8;
      lVar7 = *(long *)(lVar7 + -8);
      pQVar17 = (QueuedEvent *)(lVar7 + 0x1b0);
      *(QueuedEvent **)(param_2 + 0x30) = pQVar17;
      *(long *)(param_2 + 0x38) = lVar7;
      *(long *)(param_2 + 0x40) = lVar7 + 0x1f8;
    }
    else {
      local_88 = *(QueuedEvent **)(param_2 + 0x40);
      local_b8 = this;
      pQStack_b0 = pQVar2;
      local_a8 = pQVar1;
      puStack_a0 = puVar3;
      local_98 = pQVar17;
      pQStack_90 = pQVar6;
      local_80 = *(undefined8 **)(param_2 + 0x48);
      local_78 = pQVar13;
      local_70 = pQVar15;
      local_68 = pQVar14;
      local_60 = puVar11;
      copy<Caver::GUIApplication::QueuedEvent>(auStack_d8,&local_78,&local_98,&local_b8);
      pQVar17 = *(QueuedEvent **)(param_2 + 0x30);
      pQVar6 = *(QueuedEvent **)(param_2 + 0x38);
      if (pQVar17 == pQVar6) goto LAB_00593c48;
LAB_00593c08:
      pQVar17 = pQVar17 + -0x48;
      *(QueuedEvent **)(param_2 + 0x30) = pQVar17;
    }
    Caver::GUIApplication::QueuedEvent::~QueuedEvent(pQVar17);
  }
  lVar7 = *(long *)(param_2 + 0x18);
  plVar9 = *(long **)(param_2 + 0x28);
  uVar10 = uVar19 + (*(long *)(param_2 + 0x10) - lVar7 >> 3) * -0x71c71c71c71c71c7;
  if ((long)uVar10 < 0) {
    uVar19 = ~uVar10 / 7 ^ 0xffffffffffffffff;
  }
  else {
    if ((long)uVar10 < 7) {
      lVar8 = *(long *)(param_2 + 0x20);
      lVar12 = *(long *)(param_2 + 0x10) + uVar19 * 0x48;
      goto LAB_00593d44;
    }
    uVar19 = uVar10 / 7;
  }
  plVar9 = plVar9 + uVar19;
  lVar7 = *plVar9;
  lVar8 = lVar7 + 0x1f8;
  lVar12 = lVar7 + (uVar19 * -7 + uVar10) * 0x48;
LAB_00593d44:
  *param_1 = lVar12;
  param_1[1] = lVar7;
  param_1[2] = lVar8;
  param_1[3] = (long)plVar9;
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


