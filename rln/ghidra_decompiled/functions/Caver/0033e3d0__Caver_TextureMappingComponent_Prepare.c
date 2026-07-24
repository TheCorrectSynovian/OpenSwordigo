/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033e3d0
 * Function: Caver::TextureMappingComponent::Prepare
 * Signature: undefined __thiscall Prepare(TextureMappingComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TextureMappingComponent::Prepare() */

void __thiscall Caver::TextureMappingComponent::Prepare(TextureMappingComponent *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  long *plVar5;
  long *local_40;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  if (*(long *)(*(long *)(this + 0x70) + -0x18) != 0) {
    psVar3 = (string *)TextureLibrary::sharedLibrary();
    TextureLibrary::TextureForName(psVar3,SUB81(this + 0x70,0));
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    plVar5 = *(long **)(this + 0x78);
    *(long **)(this + 0x78) = local_40;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
    if ((local_40 != (long *)0x0) &&
       (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*local_40 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


