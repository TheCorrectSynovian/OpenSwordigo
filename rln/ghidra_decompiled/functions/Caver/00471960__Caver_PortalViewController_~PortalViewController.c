/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00471960
 * Function: Caver::PortalViewController::~PortalViewController
 * Signature: undefined __thiscall ~PortalViewController(PortalViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::~PortalViewController() */

void __thiscall Caver::PortalViewController::~PortalViewController(PortalViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0x88);
  puVar1 = PTR_vtable_007e5808 + 0xb0;
  puVar2 = PTR_vtable_007e5808 + 0xf0;
  puVar3 = PTR_vtable_007e5808 + 0xd8;
  puVar4 = PTR_vtable_007e5808 + 0x108;
  *(undefined **)this = PTR_vtable_007e5808 + 0x10;
  *(undefined **)(this + 0x50) = puVar3;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar4;
  *(undefined **)(this + 0x58) = puVar2;
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  plVar6 = *(long **)(this + 0x78);
  if ((plVar6 != (long *)0x0) && (lVar5 = plVar6[1], plVar6[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar5 = plVar6[2];
    plVar6[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


