/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bf2f4
 * Function: std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux
 * Signature: undefined __thiscall _M_insert_aux(vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>> * this, __normal_iterator param_1, Portal * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::vector<Caver::MapNode::Portal, std::allocator<Caver::MapNode::Portal>
   >::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MapNode::Portal*,
   std::vector<Caver::MapNode::Portal, std::allocator<Caver::MapNode::Portal> > >,
   Caver::MapNode::Portal const&) */

void __thiscall
std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux
          (vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>> *this,
          Portal *param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  Portal *pPVar8;
  Portal *pPVar9;
  undefined *puVar10;
  int *piVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long local_80;
  undefined8 local_78;
  undefined2 local_70;
  long local_68;
  
                    /* try { // try from 004bf310 to 005bf323 has its CatchHandler @ 004bf6a8 */
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar16 = *(long *)(this + 8);
                    /* try { // try from 004bf334 to 005bf33f has its CatchHandler @ 004bf670 */
  if (lVar16 == *(long *)(this + 0x10)) {
    lVar15 = *(long *)this;
    lVar16 = lVar16 - lVar15;
    uVar14 = (lVar16 >> 3) * -0x5555555555555555;
    uVar13 = uVar14;
    if (lVar16 == 0) {
      uVar13 = 1;
    }
    uVar1 = 0xaaaaaaaaaaaaaaa;
    if (!CARRY8(uVar13,uVar14) && uVar13 + uVar14 < 0xaaaaaaaaaaaaaab) {
      uVar1 = uVar13 + uVar14;
    }
    if (uVar1 == 0) {
      pPVar8 = (Portal *)0x0;
    }
    else {
      if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00665294();
      }
      pPVar8 = operator_new(uVar1 * 0x18);
    }
    lVar16 = (long)param_2 - lVar15 >> 3;
    FUN_0066a528(pPVar8 + lVar16 * 8,param_3);
    *(undefined2 *)(pPVar8 + lVar16 * 8 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    *(undefined8 *)(pPVar8 + lVar16 * 8 + 8) = *(undefined8 *)(param_3 + 8);
    pPVar9 = __uninitialized_copy<false>::
             __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
                       (*(Portal **)this,param_2,pPVar8);
    pPVar9 = __uninitialized_copy<false>::
             __uninit_copy<Caver::MapNode::Portal*,Caver::MapNode::Portal*>
                       (param_2,*(Portal **)(this + 8),pPVar9 + 0x18);
    puVar7 = PTR_DAT_007e5de8;
    puVar6 = PTR_pthread_create_007e4e78;
    plVar17 = *(long **)this;
    plVar2 = *(long **)(this + 8);
    if (plVar17 != plVar2) {
      do {
        puVar10 = (undefined *)(*plVar17 + -0x18);
        if (puVar10 != puVar7) {
          piVar11 = (int *)(*plVar17 + -8);
          if (puVar6 == (undefined *)0x0) {
            iVar12 = *piVar11;
            *piVar11 = iVar12 + -1;
          }
          else {
            do {
              iVar12 = *piVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar4) {
                *piVar11 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar12 < 1) {
            operator_delete(puVar10);
          }
        }
        plVar17 = plVar17 + 3;
      } while (plVar17 != plVar2);
      plVar17 = *(long **)this;
    }
    if (plVar17 != (long *)0x0) {
      operator_delete(plVar17);
    }
    *(Portal **)this = pPVar8;
    *(Portal **)(this + 8) = pPVar9;
    *(Portal **)(this + 0x10) = pPVar8 + uVar1 * 0x18;
  }
  else {
    FUN_0066a528(lVar16,lVar16 + -0x18);
    *(undefined2 *)(lVar16 + 0x10) = *(undefined2 *)(lVar16 + -8);
    *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar16 + -0x10);
                    /* try { // try from 004bf368 to 005bf3a3 has its CatchHandler @ 004bf614 */
    *(long *)(this + 8) = *(long *)(this + 8) + 0x18;
    FUN_0066a528(&local_80,param_3);
    local_70 = *(undefined2 *)(param_3 + 0x10);
    local_78 = *(undefined8 *)(param_3 + 8);
    uVar13 = (*(long *)(this + 8) + -0x30) - (long)param_2;
    if (0 < (long)uVar13) {
                    /* try { // try from 004bf3a4 to 005bf8af has its CatchHandler @ 004bf0c8 */
      lVar16 = uVar13 / 0x18 + 1;
      lVar15 = *(long *)(this + 8) + -0x48;
      do {
        FUN_0066a6a8(lVar15 + 0x18,lVar15);
        lVar16 = lVar16 + -1;
        *(undefined2 *)(lVar15 + 0x28) = *(undefined2 *)(lVar15 + 0x10);
        *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar15 + 8);
        lVar15 = lVar15 + -0x18;
      } while (1 < lVar16);
    }
    FUN_0066a6a8(param_2,&local_80);
    *(undefined2 *)(param_2 + 0x10) = local_70;
    *(undefined8 *)(param_2 + 8) = local_78;
    if ((undefined *)(local_80 + -0x18) != PTR_DAT_007e5de8) {
      piVar11 = (int *)(local_80 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar12 = *piVar11;
        *piVar11 = iVar12 + -1;
      }
      else {
        do {
          iVar12 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar12 < 1) {
        operator_delete((undefined *)(local_80 + -0x18));
      }
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


