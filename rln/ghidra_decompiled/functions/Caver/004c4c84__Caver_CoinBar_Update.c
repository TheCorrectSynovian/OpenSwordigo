/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c4c84
 * Function: Caver::CoinBar::Update
 * Signature: undefined __thiscall Update(CoinBar * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CoinBar::Update(float) */

void __thiscall Caver::CoinBar::Update(CoinBar *this,float param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  string *psVar5;
  undefined *puVar6;
  int *piVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  long *local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long *local_48;
  long local_38;
  
  fVar10 = _DAT_00692084;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 004c4524 with catch @ 004c4cb4 */
  iVar9 = *(int *)(this + 0xec);
  iVar1 = *(int *)(this + 0xf0);
  fVar11 = *(float *)(this + 0xf4) + param_1;
  *(float *)(this + 0xf4) = fVar11;
  if (((fVar11 <= fVar10) || (iVar9 <= iVar1)) && ((iVar1 <= iVar9 || (fVar11 <= fVar10))))
  goto LAB_004c4e50;
  if (iVar1 < 0) {
    *(int *)(this + 0xf0) = iVar9;
  }
  else {
                    /* catch() { ... } // from try @ 004c4500 with catch @ 004c4cec */
                    /* catch() { ... } // from try @ 004c449c with catch @ 004c4cf0 */
    fVar10 = ABS((float)(iVar1 - iVar9));
    if (iVar1 - iVar9 == 0 || iVar1 < iVar9) {
      iVar9 = 5;
      if (fVar10 < DAT_00683480) {
        iVar9 = 1;
      }
                    /* catch() { ... } // from try @ 004c4444 with catch @ 004c4dc0 */
      *(int *)(this + 0xf0) = iVar9 + iVar1;
      psVar5 = (string *)AudioSystem::sharedSystem();
      FUN_00666bb8(&local_50,"coin_get",auStack_58);
      AudioSystem::PlaySoundEffectWithName(psVar5,1.0);
      if ((local_60 != (long *)0x0) &&
         (iVar9 = (int)local_60[1] + -1, *(int *)(local_60 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_60 + 8))();
      }
      puVar6 = (undefined *)(local_50 + -0x18);
      if (puVar6 != PTR_DAT_007e5de8) {
        piVar7 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_004c4ea8;
        do {
          iVar9 = *piVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar3) {
            *piVar7 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_004c4eb4;
      }
    }
    else {
      iVar9 = -5;
      if (fVar10 < DAT_00683480) {
        iVar9 = -1;
      }
      *(int *)(this + 0xf0) = iVar9 + iVar1;
      psVar5 = (string *)AudioSystem::sharedSystem();
      FUN_00666bb8(&local_50,"coin_get",auStack_58);
      AudioSystem::PlaySoundEffectWithName(psVar5,1.0);
                    /* catch() { ... } // from try @ 004c4468 with catch @ 004c4d54 */
      if ((local_48 != (long *)0x0) &&
         (iVar9 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*local_48 + 8))();
      }
      puVar6 = (undefined *)(local_50 + -0x18);
      if (puVar6 != PTR_DAT_007e5de8) {
        piVar7 = (int *)(local_50 + -8);
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
LAB_004c4ea8:
          iVar9 = *piVar7;
          *piVar7 = iVar9 + -1;
        }
        else {
          do {
            iVar9 = *piVar7;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar3) {
              *piVar7 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
LAB_004c4eb4:
        if (iVar9 < 1) {
          operator_delete(puVar6);
        }
      }
    }
  }
  *(undefined4 *)(this + 0xf4) = 0;
  UpdateText(this);
  lVar8 = *(long *)(this + 0x168);
  *(undefined4 *)(lVar8 + 0x60) = 0x3ccccccd;
  *(undefined1 *)(lVar8 + 0x54) = 0;
LAB_004c4e50:
  GUIView::Update((GUIView *)this,param_1);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


