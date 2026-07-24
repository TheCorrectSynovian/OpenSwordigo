/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004cc1dc
 * Function: Caver::DebugInfoOverlay::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(DebugInfoOverlay * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DebugInfoOverlay::LayoutSubviews() */

void __thiscall Caver::DebugInfoOverlay::LayoutSubviews(DebugInfoOverlay *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  float fVar5;
  float fVar6;
  undefined4 local_58;
  float local_54;
  undefined8 local_50;
  long local_48;
  long *plVar4;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x130);
  plVar1 = *(long **)(this + 0x138);
  if (plVar3 != plVar1) {
    fVar6 = *(float *)(this + 0x90) + DAT_00688018;
    fVar5 = *(float *)(*(long *)(*plVar3 + 0xf0) + 0x48);
    do {
      plVar4 = plVar3 + 2;
      fVar6 = fVar6 - fVar5;
      local_50 = *(undefined8 *)((GUIView *)*plVar3 + 0x8c);
      local_58 = 0x41200000;
      local_54 = fVar6;
      GUIView::SetFrame((GUIView *)*plVar3,(Rectangle *)&local_58);
      plVar3 = plVar4;
    } while (plVar1 != plVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


