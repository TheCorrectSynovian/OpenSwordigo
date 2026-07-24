/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b6bf0
 * Function: boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>
 * Signature: undefined __thiscall shared_ptr<Caver::LevelState>(shared_ptr<Caver::LevelState> * this, LevelState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>(Caver::LevelState*) */

void __thiscall
boost::shared_ptr<Caver::LevelState>::shared_ptr<Caver::LevelState>
          (shared_ptr<Caver::LevelState> *this,LevelState *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(LevelState **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7808;
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)(this + 8) = plVar3;
                    /* try { // try from 004b6c48 to 005b6c7f has its CatchHandler @ 004b6c48
                       catch(type#1 @ 00000000) { ... } // from try @ 004b6c48 with catch @ 004b6c48
                       catch(type#1 @ 00000000) { ... } // from try @ 004b6ca0 with catch @ 004b6c48
                       catch(type#1 @ 00000000) { ... } // from try @ 004b6cdc with catch @ 004b6c48
                        */
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


