/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005493b4
 * Function: Caver::MeshInstance::~MeshInstance
 * Signature: undefined __thiscall ~MeshInstance(MeshInstance * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshInstance::~MeshInstance() */

void __thiscall Caver::MeshInstance::~MeshInstance(MeshInstance *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00549104 with catch @ 005493b4 */
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xb8));
  }
  VertexArrayObject::~VertexArrayObject((VertexArrayObject *)(this + 0x68));
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
  }
  plVar2 = *(long **)(this + 8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0054943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2);
      return;
    }
  }
                    /* catch() { ... } // from try @ 005490f4 with catch @ 00549420 */
  return;
}


