/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004637f4
 * Function: boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>
 * Signature: undefined __thiscall shared_ptr<Caver::QuestText>(shared_ptr<Caver::QuestText> * this, QuestText * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText*) */

void __thiscall
boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>
          (shared_ptr<Caver::QuestText> *this,QuestText *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(QuestText **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
                    /* catch() { ... } // from try @ 004636b0 with catch @ 00463824 */
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e78e8;
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)(this + 8) = plVar3;
  detail::sp_enable_shared_from_this(this,param_1,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


