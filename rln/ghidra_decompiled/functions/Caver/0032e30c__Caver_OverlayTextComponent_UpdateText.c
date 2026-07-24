/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e30c
 * Function: Caver::OverlayTextComponent::UpdateText
 * Signature: undefined __thiscall UpdateText(OverlayTextComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTextComponent::UpdateText() */

void __thiscall Caver::OverlayTextComponent::UpdateText(OverlayTextComponent *this)

{
  undefined8 uVar1;
  long lVar2;
  FontText *pFVar3;
  undefined8 *puVar4;
  FontLibrary *this_00;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this[0x80] = (OverlayTextComponent)0x0;
  if (*(long *)(*(long *)(this + 0x70) + -0x18) == 0) {
    pFVar3 = *(FontText **)(this + 0x88);
    *(undefined8 *)(this + 0x88) = 0;
    if (pFVar3 != (FontText *)0x0) {
      FontText::~FontText(pFVar3);
      operator_delete(pFVar3);
    }
  }
  else {
    pFVar3 = *(FontText **)(this + 0x88);
    if (pFVar3 == (FontText *)0x0) {
      puVar4 = operator_new(0xf0);
      *(undefined4 *)(puVar4 + 2) = 0xff000000;
      *(undefined1 *)((long)puVar4 + 0x2c) = 0xff;
      *(undefined4 *)(puVar4 + 5) = 0;
      *(undefined4 *)(puVar4 + 0x11) = 0;
      *(undefined1 *)(puVar4 + 0x15) = 0;
      puVar4[0x14] = 0;
      *(undefined4 *)(puVar4 + 10) = 0;
      puVar4[0x1c] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[4] = 0;
      puVar4[3] = 0;
      puVar4[0x10] = 0;
      puVar4[0xf] = 0;
      puVar4[0xe] = 0;
      puVar4[0xd] = 0;
      puVar4[0xc] = 0;
      puVar4[0xb] = 0;
      puVar4[0x13] = 0;
      puVar4[0x12] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0x19] = 0;
      puVar4[0x18] = 0;
      puVar4[0x1b] = 0;
      puVar4[0x1a] = 0;
      puVar4[0x17] = 0;
      puVar4[0x16] = 0;
      *(undefined4 *)(puVar4 + 0x1d) = 0xffffffff;
      *(undefined8 **)(this + 0x88) = puVar4;
      this_00 = (FontLibrary *)FontLibrary::sharedLibrary();
      FontLibrary::LargeDefaultFont(this_00);
      if (local_50 != (long *)0x0) {
        local_50[1] = local_50[1] + 1;
      }
      plVar7 = (long *)puVar4[1];
      *puVar4 = local_58;
      puVar4[1] = local_50;
      if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      if ((local_50 != (long *)0x0) &&
         (lVar5 = local_50[1], local_50[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*local_50 + 0x10))(local_50);
        lVar5 = local_50[2];
        local_50[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*local_50 + 0x18))(local_50);
        }
      }
      FontText::SetColor(*(FontText **)(this + 0x88),(Color *)(this + 0xc0));
      uVar1 = *(undefined8 *)(this + 200);
      lVar5 = *(long *)(this + 0xd0);
      lVar6 = *(long *)(this + 0x88);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
      }
      plVar7 = *(long **)(lVar6 + 0x20);
      *(undefined8 *)(lVar6 + 0x18) = uVar1;
      *(long *)(lVar6 + 0x20) = lVar5;
      if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        lVar5 = plVar7[2];
        plVar7[2] = lVar5 + -1;
        if (lVar5 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
      }
      uVar1 = DAT_00683728;
      lVar5 = *(long *)(this + 0x88);
      *(undefined1 *)(lVar5 + 0x28) = 1;
      *(undefined4 *)(lVar5 + 0x29) = 0xff000000;
      *(undefined8 *)(lVar5 + 0x30) = uVar1;
      pFVar3 = *(FontText **)(this + 0x88);
    }
    local_58 = 0;
    FontText::AddText(pFVar3,(string *)(this + 0x70),0.0,(Vector2 *)&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


