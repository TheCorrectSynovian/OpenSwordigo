/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065fb8c
 * Function: FUN_0065fb8c
 * Signature: undefined FUN_0065fb8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0065fb8c(long param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 local_1;
  
  if ((*(uint *)(param_1 + 0x78) & 0x11) != 0) {
    if (*(char *)(param_1 + 0xa9) != '\0') {
      if (*(char *)(param_1 + 0xc0) != '\0') {
        lVar4 = *(long *)(param_1 + 0xb0);
        if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
          lVar4 = lVar4 + 1;
        }
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
        *(long *)(param_1 + 0xb0) = lVar4;
        *(long *)(param_1 + 0x10) = lVar4;
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
        *(undefined1 *)(param_1 + 0xc0) = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fb58 with catch @ 0065fd10
                        */
      }
      iVar3 = FUN_0065f194(param_1,param_1 + 0x8c);
      lVar4 = FUN_0065fa7c(param_1,(long)iVar3,1,*(undefined8 *)(param_1 + 0x8c));
      if (lVar4 == -1) {
        return -1;
      }
    }
    puVar6 = *(undefined1 **)(param_1 + 0x20);
    bVar1 = param_2 != -1;
    puVar7 = *(undefined1 **)(param_1 + 0x28);
    local_1 = (undefined1)param_2;
    if (puVar6 < puVar7) {
      if (bVar1) {
        *puVar7 = local_1;
        puVar6 = *(undefined1 **)(param_1 + 0x20);
        puVar7 = (undefined1 *)(*(long *)(param_1 + 0x28) + 1);
        *(undefined1 **)(param_1 + 0x28) = puVar7;
      }
      cVar2 = FUN_0065f010(param_1,puVar6,(long)puVar7 - (long)puVar6);
      if (cVar2 != '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fb10 with catch @ 0065fd1c
                        */
        if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x98);
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar5;
          *(undefined8 *)(param_1 + 0x18) = uVar5;
        }
        else {
                    /* try { // try from 0065fd44 to 0075fd4f has its CatchHandler @ 0065fa58 */
          lVar4 = *(long *)(param_1 + 0x98);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fd3c with catch @ 0065fd4c
                        */
          *(long *)(param_1 + 8) = lVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065fe54 with catch @ 0065fd50
                       catch(type#1 @ 00000000) { ... } // from try @ 0066003c with catch @ 0065fd50
                        */
          *(long *)(param_1 + 0x10) = lVar4;
          *(long *)(param_1 + 0x18) = lVar4;
          if (1 < *(ulong *)(param_1 + 0xa0)) {
            *(long *)(param_1 + 0x28) = lVar4;
            *(long *)(param_1 + 0x20) = lVar4;
            *(ulong *)(param_1 + 0x30) = lVar4 + (*(ulong *)(param_1 + 0xa0) - 1);
            goto LAB_0065fca0;
          }
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 0065fd3c to 0075fd43 has its CatchHandler @ 0065fd4c */
        *(undefined8 *)(param_1 + 0x30) = 0;
LAB_0065fca0:
        if (param_2 == -1) {
          param_2 = 0;
        }
        return param_2;
      }
    }
    else {
      if (1 < *(ulong *)(param_1 + 0xa0)) {
        if ((*(uint *)(param_1 + 0x78) & 0x11) == 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x98);
          *(undefined8 *)(param_1 + 8) = uVar5;
          *(undefined8 *)(param_1 + 0x10) = uVar5;
          *(undefined8 *)(param_1 + 0x18) = uVar5;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
        }
        else {
          lVar4 = *(long *)(param_1 + 0x98);
          *(long *)(param_1 + 8) = lVar4;
          *(long *)(param_1 + 0x10) = lVar4;
          *(long *)(param_1 + 0x18) = lVar4;
          *(long *)(param_1 + 0x28) = lVar4;
          *(long *)(param_1 + 0x20) = lVar4;
          *(ulong *)(param_1 + 0x30) = lVar4 + (*(ulong *)(param_1 + 0xa0) - 1);
        }
        *(undefined1 *)(param_1 + 0xaa) = 1;
        if (bVar1) {
          **(undefined1 **)(param_1 + 0x28) = local_1;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
        }
        goto LAB_0065fca0;
      }
      if ((!bVar1) || (cVar2 = FUN_0065f010(param_1,&local_1,1), cVar2 != '\0')) {
        *(undefined1 *)(param_1 + 0xaa) = 1;
        if (param_2 == -1) {
          param_2 = 0;
        }
        return param_2;
      }
    }
  }
  return -1;
}


