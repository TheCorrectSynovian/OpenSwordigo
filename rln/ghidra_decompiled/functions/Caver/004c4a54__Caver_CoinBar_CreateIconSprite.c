/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c4a54
 * Function: Caver::CoinBar::CreateIconSprite
 * Signature: undefined __thiscall CreateIconSprite(CoinBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CoinBar::CreateIconSprite() */

void __thiscall Caver::CoinBar::CreateIconSprite(CoinBar *this)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  string *psVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_70 [2];
  undefined4 local_68;
  int iStack_64;
  undefined4 local_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  long *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  psVar6 = (string *)TextureLibrary::sharedLibrary();
                    /* catch() { ... } // from try @ 004c475c with catch @ 004c4a90 */
  FUN_00666bb8(&local_68,"ui_inventory_coin",auStack_58);
  TextureLibrary::TextureForName(psVar6,SUB81(&local_68,0));
  puVar7 = (undefined *)(CONCAT44(iStack_64,local_68) + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(CONCAT44(iStack_64,local_68) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 004c4658 with catch @ 004c4bbc */
    if (iVar9 < 1) {
                    /* catch() { ... } // from try @ 004c45fc with catch @ 004c4bc0 */
      operator_delete(puVar7);
    }
  }
  uVar1 = *(undefined4 *)((long)local_50 + 0x54);
  fVar2 = *(float *)(local_50 + 0xb);
  Sprite::Init((Sprite *)(this + 0xf8),(intrusive_ptr *)&local_50,2,4,true);
                    /* catch() { ... } // from try @ 004c4730 with catch @ 004c4aec */
  local_68 = *(undefined4 *)(this + 0x84);
  iStack_64 = (int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) - fVar2 * 0.5);
                    /* catch() { ... } // from try @ 004c470c with catch @ 004c4b24 */
                    /* catch() { ... } // from try @ 004c46b0 with catch @ 004c4b28 */
  local_70[0] = 0xffffffff;
  local_60 = uVar1;
  fStack_5c = fVar2;
  Sprite::AddRectangle
            ((Sprite *)(this + 0xf8),(Rectangle *)&local_68,(Rectangle *)((long)local_50 + 0x5c),
             (Color *)local_70);
  if ((local_50 != (long *)0x0) &&
     (iVar9 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar9, iVar9 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 004c467c with catch @ 004c4b84 */
  return;
}


