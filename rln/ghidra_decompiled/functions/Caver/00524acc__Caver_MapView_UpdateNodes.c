/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00524acc
 * Function: Caver::MapView::UpdateNodes
 * Signature: undefined __thiscall UpdateNodes(MapView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::UpdateNodes() */

void __thiscall Caver::MapView::UpdateNodes(MapView *this)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_60 = 0;
  uStack_58 = 0;
  plVar3 = *(long **)(this + 0xf8);
  if (plVar3[1] != *plVar3) {
    lVar4 = 0;
    bVar2 = false;
    uVar5 = 0;
    uVar7 = NEON_fmov(0xc1800000,4);
    do {
      if ((char)(*(long **)(*(long *)(this + 0x118) + lVar4))[3] != '\0') {
        uVar6 = *(undefined8 *)(**(long **)(*(long *)(this + 0x118) + lVar4) + 8);
        local_70 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                            (float)uVar6 + (float)uVar7);
        uStack_68 = 0x4200000042000000;
        if (bVar2) {
          Rectangle::ExpandToincludeRectangle((Rectangle *)&local_60,(Rectangle *)&local_70);
          plVar3 = *(long **)(this + 0xf8);
        }
        else {
          uStack_58 = 0x4200000042000000;
          local_60 = local_70;
        }
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < (ulong)(plVar3[1] - *plVar3 >> 4));
  }
  (**(code **)(*(long *)this + 0xf8))(this,&local_60);
  UpdateNodesSprite(this);
  UpdatePathsSprite(this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


