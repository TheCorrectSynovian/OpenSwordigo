/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b3c18
 * Function: Caver::StringByAppendingPathComponent
 * Signature: undefined __thiscall StringByAppendingPathComponent(Caver * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StringByAppendingPathComponent(std::string const&, std::string const&) */

void __thiscall Caver::StringByAppendingPathComponent(Caver *this,string *param_1,string *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long local_48 [2];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(*(long *)this + -0x18);
  if ((lVar6 == 0) || (*(long *)(*(long *)param_1 + -0x18) == 0)) {
    FUN_0066a528();
  }
  else if (*(char *)(*(long *)this + lVar6 + -1) == '/') {
    FUN_0066a528();
    FUN_00667614();
  }
  else {
                    /* catch() { ... } // from try @ 005b3bd4 with catch @ 005b3cac */
    FUN_0066a528(local_48,this);
    FUN_006677d4(local_48,&DAT_00693eee,1);
                    /* try { // try from 005b3ccc to 006b3cf3 has its CatchHandler @ 005b3cfc */
    FUN_0066a528();
    FUN_00667614();
    if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar4 = (int *)(local_48[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar4;
        *piVar4 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar2) {
            *piVar4 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_48[0] + -0x18));
      }
    }
  }
                    /* try { // try from 005b3cf4 to 006b3cff has its CatchHandler @ 005b3b84 */
                    /* catch() { ... } // from try @ 005b3ccc with catch @ 005b3cfc */
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


