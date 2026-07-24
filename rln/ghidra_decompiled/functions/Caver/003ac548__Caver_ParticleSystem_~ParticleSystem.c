/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ac548
 * Function: Caver::ParticleSystem::~ParticleSystem
 * Signature: undefined __thiscall ~ParticleSystem(ParticleSystem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleSystem::~ParticleSystem() */

void __thiscall Caver::ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  VertexArrayObject::~VertexArrayObject((VertexArrayObject *)(this + 0x48));
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
  plVar4 = *(long **)(this + 8);
  plVar1 = *(long **)(this + 0x10);
  if (plVar4 != plVar1) {
    do {
      plVar3 = (long *)*plVar4;
      if ((plVar3 != (long *)0x0) &&
         (iVar2 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar2, iVar2 == 0)) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar4 = plVar4 + 0xb;
    } while (plVar1 != plVar4);
    plVar4 = *(long **)(this + 8);
  }
  if (plVar4 != (long *)0x0) {
    operator_delete(plVar4);
  }
  plVar4 = *(long **)this;
  if ((plVar4 != (long *)0x0) &&
     (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x003ac5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}


