/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ba50
 * Function: Caver::RenderingContext::~RenderingContext
 * Signature: undefined __thiscall ~RenderingContext(RenderingContext * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::~RenderingContext() */

void __thiscall Caver::RenderingContext::~RenderingContext(RenderingContext *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 0x138);
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x40);
  if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar3 = plVar2[2];
    plVar2[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>,std::_Select1st<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
              *)(this + 8),*(_Rb_tree_node **)(this + 0x18));
  return;
}


