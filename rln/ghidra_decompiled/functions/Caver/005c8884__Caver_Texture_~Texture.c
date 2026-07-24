/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c8884
 * Function: Caver::Texture::~Texture
 * Signature: undefined __thiscall ~Texture(Texture * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Texture::~Texture() */

void __thiscall Caver::Texture::~Texture(Texture *this)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
                    /* try { // try from 005c8890 to 006c8997 has its CatchHandler @ 005c8890
                       catch() { ... } // from try @ 005c8890 with catch @ 005c8890
                       catch() { ... } // from try @ 005c8c34 with catch @ 005c8890
                       catch() { ... } // from try @ 005c8e28 with catch @ 005c8890 */
  lVar5 = tpidr_el0;
  lVar8 = *(long *)(lVar5 + 0x28);
  puVar1 = PTR_vtable_007e6648 + 0x60;
  *(undefined **)this = PTR_vtable_007e6648 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  if ((*(long *)(this + 0x70) == 0) && (*(int *)(this + 0x38) != 0)) {
    glDeleteTextures(1);
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x90));
  }
  plVar11 = *(long **)(this + 0x78);
  plVar2 = *(long **)(this + 0x80);
  if (plVar11 != plVar2) {
    do {
      plVar6 = (long *)*plVar11;
      if ((plVar6 != (long *)0x0) &&
         (iVar10 = (int)plVar6[1] + -1, *(int *)(plVar6 + 1) = iVar10, iVar10 == 0)) {
        (**(code **)(*plVar6 + 8))();
      }
      plVar11 = plVar11 + 1;
    } while (plVar2 != plVar11);
    plVar11 = *(long **)(this + 0x78);
  }
  if (plVar11 != (long *)0x0) {
    operator_delete(plVar11);
  }
  puVar1 = PTR_DAT_007e5de8;
  puVar7 = (undefined *)(*(long *)(this + 0x30) + -0x18);
  if (puVar7 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)(this + 0x30) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* try { // try from 005c8998 to 006c89a3 has its CatchHandler @ 005c8d50 */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar7);
    }
  }
  puVar7 = (undefined *)(*(long *)(this + 0x20) + -0x18);
  if (puVar7 != puVar1) {
    piVar9 = (int *)(*(long *)(this + 0x20) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
                    /* try { // try from 005c89bc to 006c89df has its CatchHandler @ 005c8d4c */
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar7);
    }
  }
  if (*(long *)(lVar5 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


