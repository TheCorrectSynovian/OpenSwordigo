/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f0dc
 * Function: __cxxabiv1::__vmi_class_type_info::__do_upcast
 * Signature: undefined __thiscall __do_upcast(__vmi_class_type_info * this, __class_type_info * param_1, void * param_2, __upcast_result * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

char __thiscall
__cxxabiv1::__vmi_class_type_info::__do_upcast
          (__vmi_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *__s1;
  ulong uVar4;
  long lVar5;
  __vmi_class_type_info *p_Var6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_18;
  uint local_10;
  uint local_c;
  long local_8;
  
                    /* try { // try from 0061f0fc to 0071f133 has its CatchHandler @ 0061f0fc
                       catch() { ... } // from try @ 0061f0fc with catch @ 0061f0fc
                       catch() { ... } // from try @ 0061f13c with catch @ 0061f0fc
                       catch() { ... } // from try @ 0061f438 with catch @ 0061f0fc
                       catch() { ... } // from try @ 0061f5e8 with catch @ 0061f0fc
                       catch() { ... } // from try @ 0061f6f4 with catch @ 0061f0fc */
  cVar2 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar2 == '\0') {
    uVar7 = *(uint *)(param_3 + 0xc);
    if ((uVar7 >> 4 & 1) != 0) {
                    /* try { // try from 0061f2e8 to 0071f2f3 has its CatchHandler @ 0061f604 */
      uVar7 = *(uint *)(this + 0x10);
    }
    uVar9 = 0;
    uVar8 = (ulong)*(uint *)(this + 0x14);
                    /* try { // try from 0061f134 to 0071f13b has its CatchHandler @ 0061f680 */
    p_Var6 = this + uVar8 * 0x10;
                    /* try { // try from 0061f13c to 0071f157 has its CatchHandler @ 0061f0fc */
    if (uVar8 != 0) {
      do {
        uVar4 = *(ulong *)(p_Var6 + 0x10);
        local_18 = 0;
        local_10 = 0;
                    /* try { // try from 0061f158 to 0071f15f has its CatchHandler @ 0061f67c */
        local_8 = 0;
                    /* try { // try from 0061f164 to 0071f16b has its CatchHandler @ 0061f6a8 */
        if (((uVar4 >> 1 & 1) != 0) || ((uVar7 & 1) != 0)) {
          if (param_2 == (void *)0x0) {
                    /* try { // try from 0061f23c to 0071f2cf has its CatchHandler @ 0061f6a8 */
            lVar5 = 0;
          }
          else {
                    /* try { // try from 0061f16c to 0071f177 has its CatchHandler @ 0061f698 */
            lVar5 = (long)uVar4 >> 8;
            if ((uVar4 & 1) != 0) {
              lVar5 = *(long *)(*(long *)param_2 + lVar5);
            }
            lVar5 = (long)param_2 + lVar5;
          }
          local_c = uVar7;
          cVar2 = (**(code **)(**(long **)(p_Var6 + 8) + 0x30))
                            (*(long **)(p_Var6 + 8),param_1,lVar5,&local_18);
          if (cVar2 != '\0') {
            if (((uVar4 & 1) != 0) && (local_8 == 0x10)) {
              local_8 = *(long *)(p_Var6 + 8);
            }
                    /* try { // try from 0061f1c0 to 0071f1ef has its CatchHandler @ 0061f4f4 */
            if (((uVar4 >> 1 & 1) == 0) && (3 < (int)local_10)) {
              local_10 = local_10 & 0xfffffffd;
            }
            lVar5 = *(long *)(param_3 + 0x10);
            if (lVar5 == 0) {
              *(long *)param_3 = local_18;
              *(ulong *)(param_3 + 8) = CONCAT44(local_c,local_10);
              uVar1 = *(uint *)(param_3 + 8);
              *(long *)(param_3 + 0x10) = local_8;
              if ((int)uVar1 < 4) {
                return cVar2;
              }
              if ((uVar1 >> 1 & 1) == 0) {
                if ((uVar1 & 1) == 0) {
                  return cVar2;
                }
                    /* try { // try from 0061f2d4 to 0071f2e7 has its CatchHandler @ 0061f678 */
                uVar1 = *(uint *)(this + 0x10) >> 1;
              }
              else {
                uVar1 = *(uint *)(this + 0x10);
              }
              if ((uVar1 & 1) == 0) {
                return cVar2;
              }
            }
            else {
              if (*(long *)param_3 != local_18) {
                *(undefined8 *)param_3 = 0;
                *(undefined4 *)(param_3 + 8) = 2;
                    /* try { // try from 0061f30c to 0071f317 has its CatchHandler @ 0061f694 */
                    /* try { // try from 0061f318 to 0071f31f has its CatchHandler @ 0061f5ec */
                return cVar2;
              }
              if (*(long *)param_3 == 0) {
                if ((local_8 == 0x10) || (lVar5 == 0x10)) {
LAB_0061f2bc:
                  *(undefined4 *)(param_3 + 8) = 2;
                  return cVar2;
                }
                __s1 = *(char **)(local_8 + 8);
                if ((__s1 != *(char **)(lVar5 + 8)) &&
                   ((*__s1 == '*' || (iVar3 = strcmp(__s1,*(char **)(lVar5 + 8)), iVar3 != 0))))
                goto LAB_0061f2bc;
              }
              *(uint *)(param_3 + 8) = *(uint *)(param_3 + 8) | local_10;
            }
          }
        }
        uVar9 = uVar9 + 1;
        p_Var6 = p_Var6 + -0x10;
      } while (uVar8 != uVar9);
    }
                    /* try { // try from 0061f210 to 0071f237 has its CatchHandler @ 0061f698 */
    cVar2 = *(int *)(param_3 + 8) != 0;
  }
  return cVar2;
}


