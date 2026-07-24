/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057474c
 * Function: Caver::SceneObject::GetAllComponents
 * Signature: undefined __thiscall GetAllComponents(SceneObject * this, vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::GetAllComponents(std::vector<boost::intrusive_ptr<Caver::Component>,
   std::allocator<boost::intrusive_ptr<Caver::Component> > >*) const */

void __thiscall Caver::SceneObject::GetAllComponents(SceneObject *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(this + 200);
  for (plVar1 = *(long **)(this + 0xc0); plVar1 != plVar3; plVar1 = plVar1 + 1) {
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == *(long **)(param_1 + 0x10)) {
      std::
      vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::Component>,std::allocator<boost::intrusive_ptr<Caver::Component>>>
                       *)param_1,plVar2,plVar1);
    }
    else {
      lVar4 = *plVar1;
      *plVar2 = lVar4;
      if (lVar4 != 0) {
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      }
      *(long **)(param_1 + 8) = plVar2 + 1;
    }
  }
                    /* catch() { ... } // from try @ 005742d8 with catch @ 005747b4 */
  return;
}


