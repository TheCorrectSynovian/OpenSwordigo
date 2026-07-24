/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005c14bc
 * Function: std::list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>::remove
 * Signature: undefined __thiscall remove(list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>> * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::list<boost::shared_ptr<Caver::ProgramState>,
   std::allocator<boost::shared_ptr<Caver::ProgramState> >
   >::remove(boost::shared_ptr<Caver::ProgramState> const&) */

void __thiscall
std::
list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
::remove(list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
         *this,shared_ptr *param_1)

{
  list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
  *plVar1;
  list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
  *plVar2;
  list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
  *plVar3;
  long lVar4;
  long *plVar5;
  list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
  *plVar6;
  
  plVar6 = *(list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
             **)this;
  plVar3 = this;
  while (plVar2 = plVar3, plVar1 = plVar6, this != plVar1) {
                    /* catch() { ... } // from try @ 005c139c with catch @ 005c14f4 */
    plVar6 = *(list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
               **)plVar1;
                    /* catch() { ... } // from try @ 005c0ffc with catch @ 005c14f8 */
    plVar3 = plVar2;
                    /* catch() { ... } // from try @ 005c1250 with catch @ 005c1504 */
    if ((*(long *)(plVar1 + 0x10) == *(long *)param_1) &&
       (plVar3 = plVar1,
       plVar1 + 0x10 !=
       (list<boost::shared_ptr<Caver::ProgramState>,std::allocator<boost::shared_ptr<Caver::ProgramState>>>
        *)param_1)) {
      FUN_0062a9c8(plVar1);
      plVar5 = *(long **)(plVar1 + 0x18);
      if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* catch() { ... } // from try @ 005c11f8 with catch @ 005c153c */
        lVar4 = plVar5[2];
        plVar5[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      operator_delete(plVar1);
      plVar3 = plVar2;
    }
  }
  if (this == plVar2) {
    return;
  }
  FUN_0062a9c8(plVar2);
  plVar5 = *(long **)(plVar2 + 0x18);
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005c1148 with catch @ 005c15ac */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
                    /* catch() { ... } // from try @ 005c103c with catch @ 005c15e4 */
  operator_delete(plVar2);
  return;
}


