/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005beb1c
 * Function: std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::~pair
 * Signature: undefined __thiscall ~pair(pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::pair<std::string const, Caver::TargetAction<void (std::string const&, bool, std::string
   const&)> >::~pair() */

void __thiscall
std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::
~pair(pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>
      *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 005beb34 to 006bec3f has its CatchHandler @ 005beb34
                       catch() { ... } // from try @ 005beb34 with catch @ 005beb34
                       catch() { ... } // from try @ 005becc0 with catch @ 005beb34 */
  uVar7 = *(ulong *)(this + 0x18);
  if (uVar7 != 0) {
    if (((uVar7 & 1) == 0) && (*(code **)(uVar7 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar7 & 0xfffffffffffffffe))(this + 0x20,this + 0x20,2);
    }
    *(undefined8 *)(this + 0x18) = 0;
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar8 = plVar4[2], plVar4[2] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x18))();
  }
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar9 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar10 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


