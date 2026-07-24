/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00368c2c
 * Function: Caver::EntityComponent::Prepare
 * Signature: undefined __thiscall Prepare(EntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityComponent::Prepare() */

void __thiscall Caver::EntityComponent::Prepare(EntityComponent *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  RegisterLibrary(this);
  iVar3 = *(int *)(this + 0x70);
  *(undefined4 *)(this + 0x70) = 0;
  if (iVar3 == 0) {
    lVar7 = *(long *)(this + 0x28);
  }
  else {
    lVar7 = *(long *)(this + 0x28);
    *(int *)(this + 0x70) = iVar3;
    *(byte *)(lVar7 + 0x90) = (byte)((uint)iVar3 >> 0x1f);
  }
  *(long *)(this + 0x78) = lVar7;
  puVar5 = PTR_Interface_007e5b08;
  uVar4 = DAT_00687f30;
  plVar2 = *(long **)(lVar7 + 200);
  for (plVar1 = *(long **)(lVar7 + 0xc0); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    uVar6 = (**(code **)(*(long *)*plVar1 + 0xa0))((long *)*plVar1,puVar5);
    if (((uVar6 & 1) != 0) && (*(char *)(*plVar1 + 0x17b) != '\0')) {
      *(undefined8 *)(*plVar1 + 0x1c4) = uVar4;
    }
  }
  return;
}


