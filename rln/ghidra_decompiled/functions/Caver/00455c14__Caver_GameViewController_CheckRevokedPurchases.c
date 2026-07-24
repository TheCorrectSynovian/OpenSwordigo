/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00455c14
 * Function: Caver::GameViewController::CheckRevokedPurchases
 * Signature: undefined __thiscall CheckRevokedPurchases(GameViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::CheckRevokedPurchases() */

void __thiscall Caver::GameViewController::CheckRevokedPurchases(GameViewController *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_38;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  GameOptions::sharedOptions((GameOptions *)this);
  lVar3 = *(long *)(this + 0xa8);
  if ((*(char *)(lVar3 + 0x1c8) != '\0') && (*(char *)(local_38 + 0x50) == '\0')) {
    *(undefined1 *)(lVar3 + 0x1c8) = 0;
    UpdateGuideTarget(this,false);
    lVar3 = *(long *)(this + 0xa8);
  }
  if ((*(char *)(lVar3 + 0x1ca) != '\0') && (*(char *)(local_38 + 0x51) == '\0')) {
    *(undefined1 *)(lVar3 + 0x1ca) = 0;
  }
  if ((local_30 != (long *)0x0) && (lVar3 = local_30[1], local_30[1] = lVar3 + -1, lVar3 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar3 = local_30[2];
    local_30[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


