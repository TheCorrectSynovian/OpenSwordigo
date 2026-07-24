/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00407798
 * Function: Caver::Proto::GroundMeshComponent::Clear
 * Signature: undefined __thiscall Clear(GroundMeshComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::Clear() */

void __thiscall Caver::Proto::GroundMeshComponent::Clear(GroundMeshComponent *this)

{
  GroundMeshComponent GVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  GVar1 = this[0xdc];
  uVar3 = (uint)(byte)GVar1;
  if (GVar1 != (GroundMeshComponent)0x0) {
    if ((((byte)GVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_vertex_data__007e4e40)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0xdc);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_indices__007e67d8)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0xdc);
    }
    if (((uVar3 >> 3 & 1) != 0) && (*(Rectangle **)(this + 0x58) != (Rectangle *)0x0)) {
      Rectangle::Clear(*(Rectangle **)(this + 0x58));
      uVar3 = *(uint *)(this + 0xdc);
    }
    if (((uVar3 >> 6 & 1) != 0) && (*(FloatColor **)(this + 0xd0) != (FloatColor *)0x0)) {
      FloatColor::Clear(*(FloatColor **)(this + 0xd0));
    }
    this[0xd8] = (GroundMeshComponent)0x0;
  }
  if (0 < *(int *)(this + 0x28)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x20) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x28));
  }
  *(undefined4 *)(this + 0x28) = 0;
  if (0 < *(int *)(this + 0x68)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x60) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x68));
  }
  *(undefined4 *)(this + 0x68) = 0;
  if (0 < *(int *)(this + 0xa0)) {
    lVar4 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x98) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0xa0));
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  return;
}


