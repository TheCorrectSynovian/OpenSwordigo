/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047d7fc
 * Function: std::deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::~deque
 * Signature: undefined __thiscall ~deque(deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::deque<boost::shared_ptr<Caver::Achievement>,
   std::allocator<boost::shared_ptr<Caver::Achievement> > >::~deque() */

void __thiscall
std::
deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::
~deque(deque<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>
       *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_50 = *(undefined8 *)(this + 0x18);
  local_58 = *(undefined8 *)(this + 0x10);
  local_48 = *(undefined8 *)(this + 0x20);
  uStack_40 = *(undefined8 *)(this + 0x28);
  uStack_70 = *(undefined8 *)(this + 0x38);
  local_78 = *(undefined8 *)(this + 0x30);
  local_68 = *(undefined8 *)(this + 0x40);
  uStack_60 = *(undefined8 *)(this + 0x48);
  _M_destroy_data_aux(this,&local_58,&local_78);
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
                    /* catch() { ... } // from try @ 0047c460 with catch @ 0047d854 */
    puVar3 = *(undefined8 **)(this + 0x48);
                    /* catch() { ... } // from try @ 0047c384 with catch @ 0047d858 */
                    /* catch() { ... } // from try @ 0047c368 with catch @ 0047d85c */
    if (*(undefined8 **)(this + 0x28) < puVar3 + 1) {
                    /* catch() { ... } // from try @ 0047c358 with catch @ 0047d868 */
      puVar4 = *(undefined8 **)(this + 0x28) + -1;
      do {
        puVar4 = puVar4 + 1;
        operator_delete((void *)*puVar4);
      } while (puVar4 < puVar3);
                    /* catch() { ... } // from try @ 0047c878 with catch @ 0047d87c
                       catch() { ... } // from try @ 0047c88c with catch @ 0047d87c
                       catch() { ... } // from try @ 0047c968 with catch @ 0047d87c */
      pvVar2 = *(void **)this;
    }
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


