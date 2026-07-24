/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032bef8
 * Function: Caver::OverlayTargetArrowComponent::AddTargetObject
 * Signature: undefined __thiscall AddTargetObject(OverlayTargetArrowComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OverlayTargetArrowComponent::AddTargetObject(boost::intrusive_ptr<Caver::SceneObject>
   const&) */

void __thiscall
Caver::OverlayTargetArrowComponent::AddTargetObject
          (OverlayTargetArrowComponent *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1;
  if (lVar2 != 0) {
    plVar1 = *(long **)(this + 0x80);
    if (plVar1 == *(long **)(this + 0x88)) {
      std::
      vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
      ::_M_insert_aux((vector<boost::intrusive_ptr<Caver::SceneObject>,std::allocator<boost::intrusive_ptr<Caver::SceneObject>>>
                       *)(this + 0x78),plVar1,param_1);
      return;
    }
    *plVar1 = lVar2;
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    *(long **)(this + 0x80) = plVar1 + 1;
  }
  return;
}


