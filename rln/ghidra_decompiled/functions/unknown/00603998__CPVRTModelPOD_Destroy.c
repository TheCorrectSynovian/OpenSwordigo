/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00603998
 * Function: CPVRTModelPOD::Destroy
 * Signature: undefined __thiscall Destroy(CPVRTModelPOD * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTModelPOD::Destroy() */

void __thiscall CPVRTModelPOD::Destroy(CPVRTModelPOD *this)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (*(long *)(this + 0x80) != 0) {
    if (*(char *)(*(long *)(this + 0x80) + 0x28) == '\0') {
      uVar3 = *(uint *)(this + 0x18);
      pvVar1 = *(void **)(this + 0x20);
      if (uVar3 != 0) {
        uVar4 = 0;
        lVar5 = 0x10;
        do {
          if (*(void **)((long)pvVar1 + lVar5) != (void *)0x0) {
            free(*(void **)((long)pvVar1 + lVar5));
            pvVar1 = *(void **)(this + 0x20);
                    /* catch() { ... } // from try @ 006024a0 with catch @ 006039e8 */
            *(undefined8 *)((long)pvVar1 + lVar5) = 0;
                    /* catch() { ... } // from try @ 00602370 with catch @ 006039ec */
            uVar3 = *(uint *)(this + 0x18);
          }
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar4 < uVar3);
      }
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(this + 0x20) = 0;
      }
      if (*(void **)(this + 0x30) != (void *)0x0) {
        free(*(void **)(this + 0x30));
        *(undefined8 *)(this + 0x30) = 0;
      }
      pvVar1 = *(void **)(this + 0x70);
      if (*(int *)(this + 0x68) != 0) {
        lVar5 = 0;
        uVar4 = 0;
        do {
          if (*(void **)((long)pvVar1 + lVar5) != (void *)0x0) {
            free(*(void **)((long)pvVar1 + lVar5));
            pvVar1 = *(void **)(this + 0x70);
            *(undefined8 *)((long)pvVar1 + lVar5) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x60);
                    /* catch() { ... } // from try @ 0060235c with catch @ 00603a50 */
          if (pvVar2 != (void *)0x0) {
                    /* catch() { ... } // from try @ 00602330 with catch @ 00603a54 */
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x70);
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x60) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x68);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x70);
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x68) = 0;
          }
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 0xb0;
        } while (uVar4 < *(uint *)(this + 0x68));
      }
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(this + 0x70) = 0;
      }
      pvVar1 = *(void **)(this + 0x40);
                    /* catch() { ... } // from try @ 0060231c with catch @ 00603ab0 */
      if (*(int *)(this + 0x38) != 0) {
        uVar4 = 0;
                    /* catch() { ... } // from try @ 006022c0 with catch @ 00603ab8 */
        do {
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x20);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x20) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x28);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x28) = 0;
          }
                    /* catch() { ... } // from try @ 00602270 with catch @ 00603b08 */
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0xe8);
          if (pvVar2 == (void *)0x0) {
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x48);
                    /* catch() { ... } // from try @ 006021f4 with catch @ 00603b30 */
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
              pvVar1 = *(void **)(this + 0x40);
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x48) = 0;
            }
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x60);
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
              pvVar1 = *(void **)(this + 0x40);
                    /* catch() { ... } // from try @ 006021cc with catch @ 00603b60 */
                    /* catch() { ... } // from try @ 006021c4 with catch @ 00603b68 */
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x60) = 0;
            }
                    /* catch() { ... } // from try @ 00602150 with catch @ 00603b70 */
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x78);
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
                    /* catch() { ... } // from try @ 00602a74 with catch @ 00603b80
                       catch() { ... } // from try @ 00602ab8 with catch @ 00603b80 */
              pvVar1 = *(void **)(this + 0x40);
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x78) = 0;
            }
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x90);
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
              pvVar1 = *(void **)(this + 0x40);
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x90) = 0;
            }
                    /* catch() { ... } // from try @ 006029fc with catch @ 00603bb8
                       catch() { ... } // from try @ 00602a40 with catch @ 00603bb8 */
            if (*(int *)((long)pvVar1 + uVar4 * 0x158 + 8) != 0) {
              uVar6 = 0;
              lVar5 = 0x10;
              do {
                pvVar2 = *(void **)(*(long *)((long)pvVar1 + uVar4 * 0x158 + 0x98) + lVar5);
                if (pvVar2 != (void *)0x0) {
                  free(pvVar2);
                  pvVar1 = *(void **)(this + 0x40);
                    /* catch() { ... } // from try @ 00602314 with catch @ 00603bf0
                       catch() { ... } // from try @ 006030bc with catch @ 00603bf0 */
                  *(undefined8 *)(*(long *)((long)pvVar1 + uVar4 * 0x158 + 0x98) + lVar5) = 0;
                }
                    /* catch() { ... } // from try @ 00602354 with catch @ 00603bf8
                       catch() { ... } // from try @ 00603098 with catch @ 00603bf8 */
                uVar6 = uVar6 + 1;
                lVar5 = lVar5 + 0x18;
                    /* catch() { ... } // from try @ 00602674 with catch @ 00603c08
                       catch() { ... } // from try @ 006027c4 with catch @ 00603c08 */
              } while (uVar6 < *(uint *)((long)pvVar1 + uVar4 * 0x158 + 8));
            }
                    /* catch() { ... } // from try @ 006026a4 with catch @ 00603c10
                       catch() { ... } // from try @ 00602790 with catch @ 00603c10 */
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0xb0);
                    /* catch() { ... } // from try @ 006021e0 with catch @ 00603c18
                       catch() { ... } // from try @ 00602224 with catch @ 00603c18 */
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
              pvVar1 = *(void **)(this + 0x40);
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0xb0) = 0;
            }
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 200);
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
              pvVar1 = *(void **)(this + 0x40);
              *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 200) = 0;
            }
            pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0xe0);
            if (pvVar2 != (void *)0x0) {
              free(pvVar2);
                    /* catch() { ... } // from try @ 00602d98 with catch @ 00603c70
                       catch() { ... } // from try @ 00602e2c with catch @ 00603c70 */
              puVar7 = (undefined8 *)(*(long *)(this + 0x40) + uVar4 * 0x158 + 0xe0);
              goto LAB_00603c78;
            }
          }
          else {
            free(pvVar2);
            puVar7 = (undefined8 *)(*(long *)(this + 0x40) + uVar4 * 0x158 + 0xe8);
LAB_00603c78:
            *puVar7 = 0;
            pvVar1 = *(void **)(this + 0x40);
          }
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x98);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x40);
            *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x98) = 0;
          }
                    /* catch() { ... } // from try @ 00602914 with catch @ 00603ca8
                       catch() { ... } // from try @ 006029a4 with catch @ 00603ca8 */
          puVar7 = (undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0xf0);
          pvVar2 = (void *)*puVar7;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
          *puVar7 = 0;
          puVar7 = (undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0xf8);
          pvVar2 = (void *)*puVar7;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
          *puVar7 = 0;
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 0x158 + 0x100);
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
          *(undefined8 *)((long)pvVar1 + uVar4 * 0x158 + 0x100) = 0;
          *(undefined4 *)((long)pvVar1 + uVar4 * 0x158 + 0x10c) = 0;
                    /* catch() { ... } // from try @ 006026b8 with catch @ 00603cfc
                       catch() { ... } // from try @ 00602748 with catch @ 00603cfc */
          pvVar1 = *(void **)(this + 0x40);
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(this + 0x38));
      }
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(this + 0x40) = 0;
      }
      pvVar1 = *(void **)(this + 0x50);
      if (*(int *)(this + 0x48) != 0) {
        uVar4 = 0;
        lVar5 = 0x30;
        do {
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + -0x28);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + -0x28) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + -8);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + -8) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + -0x10);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + -0x10) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 8);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + 8) = 0;
          }
          if (*(void **)((long)pvVar1 + lVar5) != (void *)0x0) {
            free(*(void **)((long)pvVar1 + lVar5));
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x18);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x18) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x10);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
                    /* catch() { ... } // from try @ 0060239c with catch @ 00603e00
                       catch() { ... } // from try @ 0060242c with catch @ 00603e00 */
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x10) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x28);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x28) = 0;
          }
          pvVar2 = *(void **)((long)pvVar1 + lVar5 + 0x20);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x50);
            *(undefined8 *)((long)pvVar1 + lVar5 + 0x20) = 0;
          }
          *(undefined4 *)((long)pvVar1 + lVar5 + -0x18) = 0;
                    /* catch() { ... } // from try @ 00602e68 with catch @ 00603e50
                       catch() { ... } // from try @ 00602f0c with catch @ 00603e50 */
                    /* catch() { ... } // from try @ 00602ad8 with catch @ 00603e54
                       catch() { ... } // from try @ 00602b7c with catch @ 00603e54 */
          uVar4 = uVar4 + 1;
                    /* catch() { ... } // from try @ 00602144 with catch @ 00603e58
                       catch() { ... } // from try @ 00602158 with catch @ 00603e58 */
          lVar5 = lVar5 + 0x60;
                    /* catch() { ... } // from try @ 00601eb0 with catch @ 00603e60 */
        } while (uVar4 < *(uint *)(this + 0x48));
      }
                    /* catch() { ... } // from try @ 00601dd4 with catch @ 00603e64 */
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(this + 0x50) = 0;
      }
      uVar3 = *(uint *)(this + 0x58);
      pvVar1 = *(void **)(this + 0x60);
      if (uVar3 != 0) {
        uVar4 = 0;
        do {
          pvVar2 = *(void **)((long)pvVar1 + uVar4 * 8);
          if (pvVar2 != (void *)0x0) {
            free(pvVar2);
            pvVar1 = *(void **)(this + 0x60);
            *(undefined8 *)((long)pvVar1 + uVar4 * 8) = 0;
            uVar3 = *(uint *)(this + 0x58);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar3);
      }
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
        *(undefined8 *)(this + 0x60) = 0;
      }
    }
                    /* catch() { ... } // from try @ 006024d4 with catch @ 00603eb4
                       catch() { ... } // from try @ 006025b4 with catch @ 00603eb4
                       catch() { ... } // from try @ 00602ad0 with catch @ 00603eb4
                       catch() { ... } // from try @ 00602c54 with catch @ 00603eb4
                       catch() { ... } // from try @ 00602f98 with catch @ 00603eb4 */
    pvVar1 = *(void **)(this + 0x80);
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((long)pvVar1 + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar1 + 0x10));
        pvVar1 = *(void **)(this + 0x80);
      }
      if (*(void **)((long)pvVar1 + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar1 + 0x18));
        pvVar1 = *(void **)(this + 0x80);
      }
      if (*(void **)((long)pvVar1 + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar1 + 0x20));
        pvVar1 = *(void **)(this + 0x80);
      }
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
      }
      *(undefined8 *)(this + 0x80) = 0;
    }
  }
                    /* catch() { ... } // from try @ 00601f10 with catch @ 00603f04 */
                    /* catch() { ... } // from try @ 00601ef4 with catch @ 00603f08 */
  memset(this,0,0x88);
  return;
}


