/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b660
 * Function: Caver::RenderingContext::WhiteTexture
 * Signature: undefined __cdecl WhiteTexture(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::WhiteTexture() */

void Caver::RenderingContext::WhiteTexture(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long in_x0;
  string *psVar4;
  long *in_x8;
  long *plVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  undefined1 auStack_58 [8];
  long local_50;
  long *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar8 = *(long *)(in_x0 + 0x138);
  if (lVar8 == 0) {
    psVar4 = (string *)TextureLibrary::sharedLibrary();
    FUN_00666bb8(&local_50,"white",auStack_58);
                    /* try { // try from 0058b6b8 to 0068b6df has its CatchHandler @ 0058b7d0 */
    TextureLibrary::TextureForName(psVar4,SUB81(&local_50,0));
    if (local_48 != (long *)0x0) {
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    }
    plVar5 = *(long **)(in_x0 + 0x138);
    *(long **)(in_x0 + 0x138) = local_48;
                    /* try { // try from 0058b6e8 to 0068b74f has its CatchHandler @ 0058b82c */
    if ((plVar5 != (long *)0x0) &&
       (iVar7 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((local_48 != (long *)0x0) &&
       (iVar7 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar7, iVar7 == 0)) {
      (**(code **)(*local_48 + 8))();
    }
    if ((undefined *)(local_50 + -0x18) != PTR_DAT_007e5de8) {
      piVar6 = (int *)(local_50 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar2) {
            *piVar6 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_50 + -0x18));
      }
    }
    lVar8 = *(long *)(in_x0 + 0x138);
                    /* try { // try from 0058b750 to 0068b893 has its CatchHandler @ 0058b644 */
    *in_x8 = lVar8;
    if (lVar8 == 0) goto LAB_0058b764;
  }
  else {
    *in_x8 = lVar8;
  }
  *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
LAB_0058b764:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


