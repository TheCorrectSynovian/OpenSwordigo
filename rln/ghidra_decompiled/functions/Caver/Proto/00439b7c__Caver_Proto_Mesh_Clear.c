/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00439b7c
 * Function: Caver::Proto::Mesh::Clear
 * Signature: undefined __thiscall Clear(Mesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::Mesh::Clear() */

void __thiscall Caver::Proto::Mesh::Clear(Mesh *this)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *(uint *)(this + 0xa0);
  if ((uVar3 & 0xff) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    uVar1 = _DAT_0068b490;
    if (((uVar3 >> 2 & 1) != 0) && (lVar4 = *(long *)(this + 0x18), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
    uVar1 = _DAT_0068b490;
    if (((uVar3 >> 3 & 1) != 0) && (lVar4 = *(long *)(this + 0x20), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
    uVar1 = _DAT_0068b490;
    if (((uVar3 >> 4 & 1) != 0) && (lVar4 = *(long *)(this + 0x28), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
    uVar1 = _DAT_0068b490;
    if (((uVar3 >> 6 & 1) != 0) && (lVar4 = *(long *)(this + 0x68), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
    uVar1 = _DAT_0068b490;
    if (((uVar3 >> 7 & 1) != 0) && (lVar4 = *(long *)(this + 0x70), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
  }
  uVar1 = _DAT_0068b490;
  if ((uVar3 & 0xff00) != 0) {
    if (((uVar3 >> 8 & 1) != 0) && (lVar4 = *(long *)(this + 0x78), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x1c) != '\0') {
        *(undefined8 *)(lVar4 + 0x14) = _UNK_0068b498;
        *(undefined8 *)(lVar4 + 0xc) = uVar1;
      }
      *(undefined4 *)(lVar4 + 0x1c) = 0;
      uVar3 = *(uint *)(this + 0xa0);
    }
                    /* try { // try from 00439c98 to 00539d27 has its CatchHandler @ 00439c98
                       catch(type#1 @ 00000000) { ... } // from try @ 00439c98 with catch @ 00439c98
                       catch(type#1 @ 00000000) { ... } // from try @ 00439d30 with catch @ 00439c98
                       catch(type#1 @ 00000000) { ... } // from try @ 00439d88 with catch @ 00439c98
                        */
    if (((uVar3 >> 9 & 1) != 0) && (*(MeshMaterial **)(this + 0x80) != (MeshMaterial *)0x0)) {
      MeshMaterial::Clear(*(MeshMaterial **)(this + 0x80));
      uVar3 = *(uint *)(this + 0xa0);
    }
    if (((uVar3 >> 10 & 1) != 0) && (*(Box **)(this + 0x88) != (Box *)0x0)) {
      Box::Clear(*(Box **)(this + 0x88));
      uVar3 = *(uint *)(this + 0xa0);
    }
    if (((uVar3 >> 0xb & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x90), plVar2 != (long *)PTR__default_vertex_data__007e5ae0)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0xa0);
    }
    if (((uVar3 >> 0xc & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x98), plVar2 != (long *)PTR__default_index_data__007e6c48)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
  }
  if (0 < *(int *)(this + 0x38)) {
    lVar4 = 0;
    do {
                    /* try { // try from 00439d28 to 00539d2f has its CatchHandler @ 00439d5c */
                    /* try { // try from 00439d30 to 00539d7f has its CatchHandler @ 00439c98 */
      (**(code **)(**(long **)(*(long *)(this + 0x30) + lVar4 * 8) + 0x20))();
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(this + 0x38));
  }
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00439d28 with catch @ 00439d5c
                        */
  return;
}


