/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005968cc
 * Function: Caver::GUIControl::RemoveActionTarget
 * Signature: undefined __thiscall RemoveActionTarget(GUIControl * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIControl::RemoveActionTarget(void*) */

void __thiscall Caver::GUIControl::RemoveActionTarget(GUIControl *this,void *param_1)

{
  GUIControl *pGVar1;
  GUIApplication *this_00;
  GUIControl *pGVar2;
  ulong uVar3;
  void *pvVar4;
  
  this_00 = (GUIApplication *)GUIApplication::sharedApplication();
  GUIApplication::CancelEventsWithTargetAndSender(this_00,param_1,this);
  pGVar2 = *(GUIControl **)(this + 0x108);
  while (pGVar1 = pGVar2, this + 0xf8 != pGVar1) {
    pvVar4 = *(void **)(pGVar1 + 0x28);
    pGVar2 = (GUIControl *)FUN_0064c640(pGVar1);
    if (pvVar4 == param_1) {
      pvVar4 = (void *)FUN_0064ca60(pGVar1,this + 0xf8);
      uVar3 = *(ulong *)((long)pvVar4 + 0x30);
      if (((uVar3 != 0) && ((uVar3 & 1) == 0)) &&
         (*(code **)(uVar3 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)(uVar3 & 0xfffffffffffffffe))((long)pvVar4 + 0x38,(long)pvVar4 + 0x38,2);
      }
      operator_delete(pvVar4);
      *(long *)(this + 0x118) = *(long *)(this + 0x118) + -1;
    }
  }
  return;
}


