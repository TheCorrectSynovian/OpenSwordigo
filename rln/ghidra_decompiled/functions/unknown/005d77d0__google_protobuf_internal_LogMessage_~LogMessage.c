/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d77d0
 * Function: google::protobuf::internal::LogMessage::~LogMessage
 * Signature: undefined __thiscall ~LogMessage(LogMessage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::LogMessage::~LogMessage() */

void __thiscall google::protobuf::internal::LogMessage::~LogMessage(LogMessage *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
                    /* try { // try from 005d77dc to 006d7803 has its CatchHandler @ 005d78a0 */
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 0x18) + -0x18);
  if (puVar4 != PTR_DAT_007e5de8) {
    piVar6 = (int *)(*(long *)(this + 0x18) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 005d77b0 with catch @ 005d7848 */
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
                    /* catch() { ... } // from try @ 005d774c with catch @ 005d7834 */
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
  }
                    /* try { // try from 005d7804 to 006d786b has its CatchHandler @ 005d7714 */
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


