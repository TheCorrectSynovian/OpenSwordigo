/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003faf5c
 * Function: Caver::Proto::Mesh::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Mesh::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Mesh::InitAsDefaultInstance(Mesh *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_default_instance__007e7378;
  lVar3 = *(long *)PTR_default_instance__007e7378;
  if (lVar3 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar3 = *(long *)puVar1;
    *(long *)(this + 0x18) = lVar3;
    if (lVar3 != 0) goto LAB_003faf94;
    protobuf_AddDesc_Scene_2eproto();
    lVar3 = *(long *)puVar1;
    *(long *)(this + 0x20) = lVar3;
    if (lVar3 == 0) {
      protobuf_AddDesc_Scene_2eproto();
      lVar3 = *(long *)puVar1;
      *(long *)(this + 0x28) = lVar3;
      if (lVar3 == 0) {
        protobuf_AddDesc_Scene_2eproto();
        lVar3 = *(long *)puVar1;
        *(long *)(this + 0x68) = lVar3;
        if (lVar3 == 0) {
          protobuf_AddDesc_Scene_2eproto();
          lVar3 = *(long *)puVar1;
          *(long *)(this + 0x70) = lVar3;
          if (lVar3 == 0) {
            protobuf_AddDesc_Scene_2eproto();
            lVar3 = *(long *)puVar1;
          }
        }
        else {
          *(long *)(this + 0x70) = lVar3;
        }
        goto LAB_003faf9c;
      }
    }
    else {
      *(long *)(this + 0x28) = lVar3;
    }
  }
  else {
    *(long *)(this + 0x18) = lVar3;
LAB_003faf94:
    *(long *)(this + 0x20) = lVar3;
    *(long *)(this + 0x28) = lVar3;
  }
  *(long *)(this + 0x68) = lVar3;
  *(long *)(this + 0x70) = lVar3;
LAB_003faf9c:
  *(long *)(this + 0x78) = lVar3;
  puVar1 = PTR_default_instance__007e6c30;
  lVar3 = *(long *)PTR_default_instance__007e6c30;
  if (lVar3 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar3 = *(long *)puVar1;
  }
  *(long *)(this + 0x80) = lVar3;
  uVar2 = Box::default_instance();
  *(undefined8 *)(this + 0x88) = uVar2;
  return;
}


