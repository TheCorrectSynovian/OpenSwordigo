/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00330bdc
 * Function: Caver::PortalComponent::Enter
 * Signature: undefined __thiscall Enter(PortalComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalComponent::Enter() */

void __thiscall Caver::PortalComponent::Enter(PortalComponent *this)

{
  int iVar1;
  long *plVar2;
  DidEnterPortalGameEvent *this_00;
  
  if ((*(long *)(*(long *)(this + 0x88) + -0x18) != 0) &&
     (plVar2 = *(long **)(this + 0xa0), plVar2 != (long *)0x0)) {
    *(undefined1 *)(plVar2 + 0x1d) = 1;
    *(undefined8 *)(this + 0xa0) = 0;
    iVar1 = (int)plVar2[1] + -1;
    *(int *)(plVar2 + 1) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  this_00 = operator_new(0x80);
  DidEnterPortalGameEvent::DidEnterPortalGameEvent
            (this_00,(string *)(this + 0x88),(string *)(this + 0x90));
  FUN_0066a6a8(this_00 + 0x78,*(long *)(this + 0x28) + 0x50);
  GameEvent::SendEvent((GameEvent *)this_00);
  return;
}


