/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330cb8
 * Function: Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent
 * Signature: undefined __thiscall DidEnterPortalGameEvent(DidEnterPortalGameEvent * this, string * param_1, string * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent(std::string const&, std::string const&)
    */

void __thiscall
Caver::DidEnterPortalGameEvent::DidEnterPortalGameEvent
          (DidEnterPortalGameEvent *this,string *param_1,string *param_2)

{
  long lVar1;
  long lVar2;
  DidEnterPortalGameEvent *pDVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)this = 4;
  pDVar3 = this + 0x10;
  *(undefined8 *)pDVar3 = 0;
  *(DidEnterPortalGameEvent **)(this + 0x20) = pDVar3;
  *(DidEnterPortalGameEvent **)(this + 0x28) = pDVar3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  pDVar3 = this + 0x40;
  *(undefined8 *)pDVar3 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(DidEnterPortalGameEvent **)(this + 0x50) = pDVar3;
  *(DidEnterPortalGameEvent **)(this + 0x58) = pDVar3;
  *(undefined8 *)(this + 0x60) = 0;
  FUN_0066a528(this + 0x68);
  FUN_0066a528(this + 0x70,param_2);
  *(undefined **)(this + 0x78) = PTR_DAT_007e5de8 + 0x18;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


