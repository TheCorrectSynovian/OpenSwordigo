/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b5e68
 * Function: Caver::CharacterState::~CharacterState
 * Signature: undefined __thiscall ~CharacterState(CharacterState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterState::~CharacterState() */

void __thiscall Caver::CharacterState::~CharacterState(CharacterState *this)

{
  void *pvVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
                    /* try { // try from 004b5e80 to 005b5f47 has its CatchHandler @ 004b6080 */
  plVar3 = *(long **)(this + 0x90);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x80);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x70);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 004b5f48 to 005b5f5b has its CatchHandler @ 004b5e1c */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x60);
                    /* try { // try from 004b5f5c to 005b6023 has its CatchHandler @ 004b6070 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  pvVar4 = *(void **)(this + 0x40);
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar4 != pvVar1) {
    do {
      plVar3 = *(long **)((long)pvVar4 + 8);
      if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        lVar2 = plVar3[2];
        plVar3[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
      }
      pvVar4 = (void *)((long)pvVar4 + 0x10);
    } while (pvVar1 != pvVar4);
    pvVar4 = *(void **)(this + 0x40);
  }
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  std::
  _Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,Caver::CharacterState::ItemState>,std::_Select1st<std::pair<std::string_const,Caver::CharacterState::ItemState>>,std::less<std::string>,std::allocator<std::pair<std::string_const,Caver::CharacterState::ItemState>>>
              *)(this + 0x10),*(_Rb_tree_node **)(this + 0x20));
  plVar3 = *(long **)(this + 8);
                    /* try { // try from 004b6024 to 005b6073 has its CatchHandler @ 004b5e1c */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 004b5f5c with catch @ 004b6070 */
                    /* try { // try from 004b6074 to 005b608b has its CatchHandler @ 004b6094 */
                    /* catch() { ... } // from try @ 004b5e80 with catch @ 004b6080 */
                    /* WARNING: Could not recover jumptable at 0x004b6084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


