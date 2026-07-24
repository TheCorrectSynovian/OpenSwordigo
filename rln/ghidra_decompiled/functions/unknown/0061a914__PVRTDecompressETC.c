/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061a914
 * Function: PVRTDecompressETC
 * Signature: undefined __cdecl PVRTDecompressETC(void * param_1, uint * param_2, uint * param_3, void * param_4, int * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTDecompressETC(void const*, unsigned int const&, unsigned int const&, void*, int const&) */

undefined4 PVRTDecompressETC(void *param_1,uint *param_2,uint *param_3,void *param_4,int *param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 uVar3;
  void *__ptr;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_70;
  uint uStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar6 = *param_2;
  uVar4 = *param_3;
  if ((uVar6 < 4) || (uVar4 < 4)) {
    if (uVar6 < 5) {
      uVar6 = 4;
    }
    if (uVar4 < 5) {
      uVar4 = 4;
    }
    __ptr = malloc((ulong)(uVar6 * uVar4 * 4));
    local_70 = uVar4;
    uStack_6c = uVar6;
    uVar3 = ETCTextureDecompress(param_1,(int *)&uStack_6c,(int *)&local_70,__ptr,param_5);
    if (*param_3 != 0) {
      iVar7 = 0;
      uVar6 = 0;
      do {
        uVar5 = *param_2;
        uVar4 = uVar5;
        if (uVar5 < 5) {
          uVar4 = 4;
        }
        memcpy((void *)((long)param_4 + (ulong)(iVar7 * uVar5)),
               (void *)((long)__ptr + (ulong)(iVar7 * uVar4)),(ulong)(uVar5 << 2));
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar6 < *param_3);
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    uVar6 = *param_3;
  }
  else {
    local_70 = uVar4;
    uStack_6c = uVar6;
    uVar3 = ETCTextureDecompress(param_1,(int *)&uStack_6c,(int *)&local_70,param_4,param_5);
    uVar6 = *param_3;
  }
  if (uVar6 != 0) {
    uVar5 = *param_2;
    uVar4 = 0;
    do {
      if (uVar5 != 0) {
        uVar6 = 0;
        do {
          uVar1 = *(undefined1 *)param_4;
          uVar6 = uVar6 + 1;
          *(undefined1 *)param_4 = *(undefined1 *)((long)param_4 + 2);
          *(undefined1 *)((long)param_4 + 2) = uVar1;
          uVar5 = *param_2;
          param_4 = (void *)((long)param_4 + 4);
        } while (uVar6 < uVar5);
        uVar6 = *param_3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


