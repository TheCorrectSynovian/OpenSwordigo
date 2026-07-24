/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005005d0
 * Function: Caver::DraggableMenuItem::InitWithItem
 * Signature: undefined __thiscall InitWithItem(DraggableMenuItem * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::DraggableMenuItem::InitWithItem(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::DraggableMenuItem::InitWithItem(DraggableMenuItem *this,shared_ptr *param_1)

{
  GUITexturedRect *this_00;
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  string *psVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long *local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar7 = *(long *)(param_1 + 8);
  if (lVar7 != 0) {
    *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  }
  plVar10 = *(long **)(this + 0x108);
  *(undefined8 *)(this + 0x100) = uVar1;
  *(long *)(this + 0x108) = lVar7;
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* try { // try from 00500638 to 0060063b has its CatchHandler @ 005006f4 */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* try { // try from 00500654 to 00600657 has its CatchHandler @ 00500748 */
                    /* try { // try from 00500658 to 0060070f has its CatchHandler @ 005005a8 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  psVar6 = (string *)TextureLibrary::sharedLibrary();
  FUN_0066a528(&local_68,*(long *)param_1 + 8);
  FUN_0035a030(&local_60,"item_",&local_68);
  FUN_0066a528(&local_58,&local_60);
  FUN_006677d4(&local_58,"_nobg",5);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_58,0));
  this_00 = (GUITexturedRect *)(this + 0x110);
  local_78 = (long *)0x0;
  local_70 = 0;
  GUITexturedRect::InitWithTexture(this_00,(intrusive_ptr *)&local_50,(Rectangle *)&local_78,false);
  if ((local_50 != (long *)0x0) &&
     (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
                    /* catch() { ... } // from try @ 00500638 with catch @ 005006f4 */
    (**(code **)(*local_50 + 8))();
  }
  puVar5 = PTR_DAT_007e5de8;
                    /* try { // try from 00500710 to 00600713 has its CatchHandler @ 00500744 */
  if ((undefined *)(local_58 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0050074c with catch @ 0050075c */
    piVar8 = (int *)(local_58 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_58 + -0x18));
    }
  }
  if ((undefined *)(local_60 + -0x18) != puVar5) {
    piVar8 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_60 + -0x18));
    }
  }
  if ((undefined *)(local_68 + -0x18) != puVar5) {
    piVar8 = (int *)(local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68 + -0x18));
      plVar10 = *(long **)this_00;
      goto joined_r0x00500824;
    }
  }
  plVar10 = *(long **)this_00;
joined_r0x00500824:
  uVar11 = _DAT_00000054;
  uVar12 = _DAT_00000058;
  if (plVar10 != (long *)0x0) {
    uVar11 = *(undefined4 *)((long)plVar10 + 0x54);
    lVar7 = plVar10[0xb];
                    /* catch() { ... } // from try @ 00500710 with catch @ 00500744 */
    uVar12 = (int)lVar7;
    if ((int)plVar10[1] == 0) {
                    /* catch() { ... } // from try @ 00500654 with catch @ 00500748 */
                    /* try { // try from 0050074c to 00600753 has its CatchHandler @ 0050075c */
      (**(code **)(*plVar10 + 8))();
                    /* try { // try from 00500754 to 0060075f has its CatchHandler @ 005005a8 */
    }
  }
                    /* catch() { ... } // from try @ 00500864 with catch @ 00500850 */
  Vector2::Rounded();
                    /* try { // try from 00500860 to 00600863 has its CatchHandler @ 00500874 */
                    /* try { // try from 00500864 to 00600887 has its CatchHandler @ 00500850 */
  local_78 = local_50;
  local_70 = CONCAT44(uVar12,uVar11);
                    /* catch() { ... } // from try @ 00500860 with catch @ 00500874 */
  GUITexturedRect::CreateWithBounds(this_00,(Rectangle *)&local_78,false);
  (**(code **)(*(long *)this + 0xf8))(this,&local_78);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


