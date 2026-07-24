/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b8264
 * Function: boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr
 * Signature: undefined __thiscall ~scoped_ptr(scoped_ptr<Caver::MeshBuilder> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr() */

void __thiscall
boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr(scoped_ptr<Caver::MeshBuilder> *this)

{
  long lVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    if (*(void **)((long)pvVar2 + 0x38) != (void *)0x0) {
      operator_delete(*(void **)((long)pvVar2 + 0x38));
    }
    if (*(void **)((long)pvVar2 + 0x18) != (void *)0x0) {
      operator_delete(*(void **)((long)pvVar2 + 0x18));
    }
    plVar3 = *(long **)((long)pvVar2 + 8);
    if ((plVar3 != (long *)0x0) && (lVar1 = plVar3[1], plVar3[1] = lVar1 + -1, lVar1 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar1 = plVar3[2];
      plVar3[2] = lVar1 + -1;
      if (lVar1 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
    operator_delete(pvVar2);
    return;
  }
  return;
}


