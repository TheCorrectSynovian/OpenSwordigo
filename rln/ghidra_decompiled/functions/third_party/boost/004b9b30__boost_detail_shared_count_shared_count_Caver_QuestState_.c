/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b9b30
 * Function: boost::detail::shared_count::shared_count<Caver::QuestState>
 * Signature: undefined __thiscall shared_count<Caver::QuestState>(shared_count * this, QuestState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::QuestState>(Caver::QuestState*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::QuestState>(shared_count *this,QuestState *param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
                    /* try { // try from 004b9b38 to 005b9b83 has its CatchHandler @ 004b9df8 */
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e7258;
  plVar3[3] = (long)param_1;
  plVar3[2] = 1;
  plVar3[1] = 1;
  *plVar3 = (long)(puVar2 + 0x10);
  *(long **)this = plVar3;
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


