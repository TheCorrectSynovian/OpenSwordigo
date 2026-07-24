/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005e2850
 * Function: google::protobuf::internal::StringTypeHandlerBase::Delete
 * Signature: undefined __cdecl Delete(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* google::protobuf::internal::StringTypeHandlerBase::Delete(std::string*) */

void google::protobuf::internal::StringTypeHandlerBase::Delete(string *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int *piVar6;
  int iVar7;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 005e2864 to 006e288b has its CatchHandler @ 005e2968 */
  lVar4 = *(long *)(lVar3 + 0x28);
  if (param_1 != (string *)0x0) {
    puVar5 = (undefined *)(*(long *)param_1 + -0x18);
    if (puVar5 != PTR_DAT_007e5de8) {
      piVar6 = (int *)(*(long *)param_1 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar6;
        *piVar6 = iVar7 + -1;
      }
      else {
        do {
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
        operator_delete(puVar5);
      }
    }
    operator_delete(param_1);
  }
  if (*(long *)(lVar3 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


