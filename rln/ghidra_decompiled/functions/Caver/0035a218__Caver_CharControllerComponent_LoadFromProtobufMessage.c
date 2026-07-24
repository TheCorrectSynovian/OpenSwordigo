/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035a218
 * Function: Caver::CharControllerComponent::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(CharControllerComponent * this, Component * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Type propagation algorithm not settling */
/* Caver::CharControllerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&) */

void __thiscall
Caver::CharControllerComponent::LoadFromProtobufMessage
          (CharControllerComponent *this,Component *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  CharControllerComponent *pCVar6;
  
  Component::LoadFromProtobufMessage((Component *)this,param_1);
  lVar3 = google::protobuf::internal::ExtensionSet::GetMessage
                    ((ExtensionSet *)(param_1 + 8),*(int *)PTR_extension_007e75c0,
                     *(MessageLite **)(PTR_extension_007e75c0 + 8));
  if (*(int *)(this + 0x78) != *(int *)(lVar3 + 0xc)) {
    plVar4 = *(long **)(this + 0x80);
    *(int *)(this + 0x78) = *(int *)(lVar3 + 0xc);
    *(undefined8 *)(this + 0x80) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x90) != *(int *)(lVar3 + 0x10)) {
    plVar4 = *(long **)(this + 0x98);
    *(int *)(this + 0x90) = *(int *)(lVar3 + 0x10);
    *(undefined8 *)(this + 0x98) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xa8) != *(int *)(lVar3 + 0x14)) {
    plVar4 = *(long **)(this + 0xb0);
    *(int *)(this + 0xa8) = *(int *)(lVar3 + 0x14);
    *(undefined8 *)(this + 0xb0) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xc0) != *(int *)(lVar3 + 0x18)) {
    plVar4 = *(long **)(this + 200);
    *(int *)(this + 0xc0) = *(int *)(lVar3 + 0x18);
    *(undefined8 *)(this + 200) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xd8) != *(int *)(lVar3 + 0x1c)) {
    plVar4 = *(long **)(this + 0xe0);
    *(int *)(this + 0xd8) = *(int *)(lVar3 + 0x1c);
    *(undefined8 *)(this + 0xe0) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0xf0) != *(int *)(lVar3 + 0x20)) {
    plVar4 = *(long **)(this + 0xf8);
    *(int *)(this + 0xf0) = *(int *)(lVar3 + 0x20);
    *(undefined8 *)(this + 0xf8) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x108) != *(int *)(lVar3 + 0x24)) {
    plVar4 = *(long **)(this + 0x110);
    *(int *)(this + 0x108) = *(int *)(lVar3 + 0x24);
    *(undefined8 *)(this + 0x110) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x120) != *(int *)(lVar3 + 0x28)) {
    plVar4 = *(long **)(this + 0x128);
    *(int *)(this + 0x120) = *(int *)(lVar3 + 0x28);
    *(undefined8 *)(this + 0x128) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x138) != *(int *)(lVar3 + 0x2c)) {
    plVar4 = *(long **)(this + 0x140);
    *(int *)(this + 0x138) = *(int *)(lVar3 + 0x2c);
    *(undefined8 *)(this + 0x140) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x150) != *(int *)(lVar3 + 0x30)) {
    plVar4 = *(long **)(this + 0x158);
    *(int *)(this + 0x150) = *(int *)(lVar3 + 0x30);
    *(undefined8 *)(this + 0x158) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x168) != *(int *)(lVar3 + 0x34)) {
    plVar4 = *(long **)(this + 0x170);
    *(int *)(this + 0x168) = *(int *)(lVar3 + 0x34);
    *(undefined8 *)(this + 0x170) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x180) != *(int *)(lVar3 + 0x38)) {
    plVar4 = *(long **)(this + 0x188);
    *(int *)(this + 0x180) = *(int *)(lVar3 + 0x38);
    *(undefined8 *)(this + 0x188) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x1a0) != *(int *)(lVar3 + 0x3c)) {
    plVar4 = *(long **)(this + 0x1a8);
    *(int *)(this + 0x1a0) = *(int *)(lVar3 + 0x3c);
    *(undefined8 *)(this + 0x1a8) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(int *)(this + 0x1b8) != *(int *)(lVar3 + 0x40)) {
    plVar4 = *(long **)(this + 0x1c0);
    *(int *)(this + 0x1b8) = *(int *)(lVar3 + 0x40);
    *(undefined8 *)(this + 0x1c0) = 0;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  iVar2 = *(int *)(lVar3 + 0x50);
  *(int *)(this + 0x218) = iVar2;
  if (0 < iVar2) {
    lVar5 = 0;
    pCVar6 = this + 0x1d0;
    do {
      (**(code **)(*(long *)pCVar6 + 0x10))
                (pCVar6,*(undefined4 *)(*(long *)(lVar3 + 0x48) + lVar5 * 4));
      lVar5 = lVar5 + 1;
      pCVar6 = pCVar6 + 0x18;
    } while (lVar5 < *(int *)(this + 0x218));
  }
  uVar1 = *(uint *)(lVar3 + 0x7c);
  if ((uVar1 >> 0x10 & 1) != 0) {
    *(undefined4 *)(this + 0x26c) = *(undefined4 *)(lVar3 + 0x6c);
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    *(undefined4 *)(this + 0x278) = *(undefined4 *)(lVar3 + 0x68);
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    *(undefined4 *)(this + 0x27c) = *(undefined4 *)(lVar3 + 0x70);
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    *(undefined4 *)(this + 0x280) = *(undefined4 *)(lVar3 + 0x74);
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    *(undefined4 *)(this + 0x284) = *(undefined4 *)(lVar3 + 0x78);
  }
  return;
}


