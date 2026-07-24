/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058b9d8
 * Function: Caver::RenderingContext::AddProgram
 * Signature: undefined __thiscall AddProgram(RenderingContext * this, uint param_1, shared_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::RenderingContext::AddProgram(unsigned int, boost::shared_ptr<Caver::RenderingProgram>
   const&) */

void __thiscall
Caver::RenderingContext::AddProgram(RenderingContext *this,uint param_1,shared_ptr *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  uint local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_2c = param_1;
  puVar3 = (undefined8 *)
           std::
           map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
           ::operator[]((map<unsigned_int,boost::shared_ptr<Caver::RenderingProgram>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,boost::shared_ptr<Caver::RenderingProgram>>>>
                         *)(this + 8),&local_2c);
  uVar1 = *(undefined8 *)param_2;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 8) = *(long *)(lVar4 + 8) + 1;
  }
  plVar5 = (long *)puVar3[1];
  *puVar3 = uVar1;
  puVar3[1] = lVar4;
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


