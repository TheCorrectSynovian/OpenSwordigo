/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a4f54
 * Function: Caver::ParticleComponent::Prepare
 * Signature: undefined __thiscall Prepare(ParticleComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleComponent::Prepare() */

void __thiscall Caver::ParticleComponent::Prepare(ParticleComponent *this)

{
  int iVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  lVar6 = *(long *)(this + 0x78);
  if (lVar6 != 0) {
    fVar7 = *(float *)(this + 0x80);
    fVar9 = *(float *)(lVar6 + 0x54) / *(float *)(lVar6 + 0x58);
    if (fVar9 <= 1.0) {
      fVar9 = fVar7 * fVar9;
      fVar8 = fVar7;
    }
    else {
      fVar8 = fVar7 / fVar9;
      fVar9 = fVar7;
    }
    *(float *)(this + 0x84) = fVar9;
    *(float *)(this + 0x88) = fVar8;
  }
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


