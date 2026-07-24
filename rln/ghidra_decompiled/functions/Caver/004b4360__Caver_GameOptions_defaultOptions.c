/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b4360
 * Function: Caver::GameOptions::defaultOptions
 * Signature: undefined __thiscall defaultOptions(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::defaultOptions() */

void __thiscall Caver::GameOptions::defaultOptions(GameOptions *this)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  GameOptions *pGVar5;
  long *in_x8;
  long lVar6;
  undefined8 uVar7;
  GameOptions *local_48;
  long *local_40;
  long local_38;
  
                    /* try { // try from 004b4364 to 005b4457 has its CatchHandler @ 004b4318 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_007e9998 == (GameOptions *)0x0) {
    pGVar5 = operator_new(0x58);
    puVar2 = PTR_DAT_007e5de8;
    *(undefined2 *)(pGVar5 + 0x20) = 0x101;
    uVar7 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(pGVar5 + 0x10) = 0;
    *(undefined8 *)(pGVar5 + 0x18) = 0;
    *(undefined8 *)(pGVar5 + 0x40) = 0;
    *(undefined8 *)(pGVar5 + 0x48) = 0;
    *(undefined8 *)(pGVar5 + 0x30) = 0;
    *(undefined8 *)(pGVar5 + 0x38) = 0;
    pGVar5[0x52] = (GameOptions)0x0;
    *(undefined2 *)(pGVar5 + 0x50) = 0;
    *(undefined8 *)(pGVar5 + 0x24) = uVar7;
    *(undefined **)pGVar5 = puVar2 + 0x18;
    *(undefined8 *)(pGVar5 + 8) = 0;
    local_48 = pGVar5;
    boost::detail::shared_count::shared_count<Caver::GameOptions>((shared_count *)&local_40,pGVar5);
                    /* catch() { ... } // from try @ 004b4354 with catch @ 004b43e4 */
    this = (GameOptions *)boost::detail::sp_enable_shared_from_this(&local_48,pGVar5,pGVar5);
    plVar4 = local_40;
    pGVar5 = local_48;
    plVar3 = DAT_007e99a0;
    local_48 = DAT_007e9998;
    local_40 = DAT_007e99a0;
    DAT_007e9998 = pGVar5;
    DAT_007e99a0 = plVar4;
    if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      this = (GameOptions *)(**(code **)(*plVar3 + 0x10))(plVar3);
      lVar6 = plVar3[2];
      plVar3[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
                    /* catch() { ... } // from try @ 004b433c with catch @ 004b4454 */
        this = (GameOptions *)(**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  plVar3 = DAT_007e99a0;
  *in_x8 = (long)DAT_007e9998;
  in_x8[1] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    plVar3[1] = plVar3[1] + 1;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


