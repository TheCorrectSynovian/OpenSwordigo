/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058a174
 * Function: std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>
 * Signature: char * __thiscall _S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>(string * this, istreambuf_iterator param_1, istreambuf_iterator param_2, allocator * param_3, input_iterator_tag param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* char* std::string::_S_construct<std::istreambuf_iterator<char, std::char_traits<char> >
   >(std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char,
   std::char_traits<char> >, std::allocator<char> const&, std::input_iterator_tag) */

char * __thiscall
std::string::_S_construct<std::istreambuf_iterator<char,std::char_traits<char>>>
          (string *this,uint param_2,long *param_3,uint param_4,undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  size_t *psVar6;
  uint uVar7;
  size_t *psVar8;
  ulong __n;
  size_t __n_00;
  long lVar9;
  undefined1 local_e8 [128];
  long local_68;
  
                    /* try { // try from 0058a178 to 0068a17f has its CatchHandler @ 0058b240 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0058a1a8 to 0068a1b3 has its CatchHandler @ 0058b1f0 */
  uVar7 = param_2;
  if (this == (string *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = param_2;
    if (param_2 == 0xffffffff) {
      if (*(byte **)(this + 0x10) < *(byte **)(this + 0x18)) {
        uVar5 = (uint)**(byte **)(this + 0x10);
        uVar7 = uVar5;
      }
      else {
        uVar5 = (**(code **)(*(long *)this + 0x48))(this);
                    /* try { // try from 0058a648 to 0068a64b has its CatchHandler @ 0058b14c */
        uVar7 = uVar5;
                    /* try { // try from 0058a650 to 0068a663 has its CatchHandler @ 0058b148 */
        if (uVar5 == 0xffffffff) {
          this = (string *)0x0;
          uVar5 = 0xffffffff;
          uVar7 = param_2;
        }
      }
    }
  }
  if (param_3 == (long *)0x0) {
LAB_0058a208:
                    /* try { // try from 0058a208 to 0068a20f has its CatchHandler @ 0058b1ec */
    psVar6 = (size_t *)PTR_DAT_007e5de8;
    if (uVar5 != 0xffffffff) {
                    /* try { // try from 0058a210 to 0068a277 has its CatchHandler @ 0058b47c */
      param_3 = (long *)0x0;
LAB_0058a24c:
      __n = 0;
      if (this != (string *)0x0) goto LAB_0058a270;
LAB_0058a31c:
      uVar5 = 0xffffffff;
joined_r0x0058a320:
      if (param_3 != (long *)0x0) goto LAB_0058a280;
      do {
        uVar4 = 0xffffffff;
        uVar2 = param_4;
LAB_0058a328:
        param_4 = uVar2;
                    /* try { // try from 0058a330 to 0068a33b has its CatchHandler @ 0058b160 */
        if ((0x7f < __n) || ((uVar5 == 0xffffffff) == (uVar4 == 0xffffffff))) {
          psVar6 = (size_t *)FUN_00668c20(__n,0,param_5);
          lVar9 = __n + 0x18;
          if (__n == 1) {
            *(undefined1 *)(psVar6 + 3) = local_e8[0];
          }
          else {
            memcpy(psVar6 + 3,local_e8,__n);
          }
          if (this != (string *)0x0) goto LAB_0058a430;
          goto LAB_0058a4e4;
        }
        if (this == (string *)0x0) {
LAB_0058a3c0:
          this = (string *)0x0;
          local_e8[__n] = 0xff;
          __n = __n + 1;
          goto LAB_0058a31c;
        }
        if (uVar7 == 0xffffffff) {
                    /* try { // try from 0058a35c to 0068a383 has its CatchHandler @ 0058ae44 */
          if (*(byte **)(this + 0x10) < *(byte **)(this + 0x18)) {
            uVar5 = (uint)**(byte **)(this + 0x10);
          }
          else {
            uVar5 = (**(code **)(*(long *)this + 0x48))(this);
            if (uVar5 == 0xffffffff) goto LAB_0058a3c0;
          }
          uVar3 = (undefined1)uVar5;
        }
        else {
          uVar3 = (undefined1)uVar7;
        }
        local_e8[__n] = uVar3;
                    /* try { // try from 0058a384 to 0068a38f has its CatchHandler @ 0058b47c */
        if (*(ulong *)(this + 0x10) < *(ulong *)(this + 0x18)) {
          *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) + 1;
                    /* try { // try from 0058a390 to 0068a397 has its CatchHandler @ 0058b15c */
        }
        else {
                    /* try { // try from 0058a398 to 0068a41b has its CatchHandler @ 0058b47c */
          (**(code **)(*(long *)this + 0x50))(this);
        }
        uVar7 = 0xffffffff;
        __n = __n + 1;
        if (this == (string *)0x0) goto LAB_0058a31c;
LAB_0058a270:
        uVar5 = uVar7;
        if (uVar7 == 0xffffffff) {
                    /* try { // try from 0058a298 to 0068a2ab has its CatchHandler @ 0058b2a8 */
          if (*(byte **)(this + 0x10) < *(byte **)(this + 0x18)) {
            uVar5 = (uint)**(byte **)(this + 0x10);
          }
          else {
                    /* try { // try from 0058a2dc to 0068a2df has its CatchHandler @ 0058b2a8 */
            uVar5 = (**(code **)(*(long *)this + 0x48))(this);
            if (uVar5 == 0xffffffff) {
              this = (string *)0x0;
              goto joined_r0x0058a320;
            }
          }
        }
        uVar7 = uVar5;
                    /* try { // try from 0058a2ac to 0068a2bb has its CatchHandler @ 0058b1b4 */
        uVar5 = uVar7;
      } while (param_3 == (long *)0x0);
LAB_0058a280:
      uVar4 = param_4;
      uVar2 = param_4;
                    /* try { // try from 0058a284 to 0068a297 has its CatchHandler @ 0058b1e4 */
      if (param_4 == 0xffffffff) {
        if ((byte *)param_3[2] < (byte *)param_3[3]) {
          uVar4 = (uint)*(byte *)param_3[2];
          uVar2 = uVar4;
        }
        else {
                    /* try { // try from 0058a300 to 0068a307 has its CatchHandler @ 0058b1b0 */
          uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
          uVar2 = uVar4;
          if (uVar4 == 0xffffffff) {
            param_3 = (long *)0x0;
            uVar2 = param_4;
          }
        }
      }
      goto LAB_0058a328;
    }
  }
  else {
    uVar4 = param_4;
    if (param_4 == 0xffffffff) {
      if ((byte *)param_3[2] < (byte *)param_3[3]) {
        uVar4 = (uint)*(byte *)param_3[2];
      }
      else {
        uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
        if (uVar4 == 0xffffffff) goto LAB_0058a208;
      }
    }
    param_4 = uVar4;
    psVar6 = (size_t *)PTR_DAT_007e5de8;
                    /* try { // try from 0058a1d4 to 0068a1fb has its CatchHandler @ 0058ae48 */
    if (uVar5 == 0xffffffff) goto LAB_0058a24c;
  }
LAB_0058a5f4:
                    /* try { // try from 0058a5fc to 0068a623 has its CatchHandler @ 0058b440 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return (char *)(psVar6 + 3);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0058a4e4:
                    /* try { // try from 0058a4e4 to 0068a50b has its CatchHandler @ 0058b374 */
  uVar5 = 0xffffffff;
joined_r0x0058a4ec:
  __n_00 = lVar9 - 0x18;
  if (param_3 != (long *)0x0) goto LAB_0058a444;
LAB_0058a4f0:
  if (uVar5 != 0xffffffff) {
    param_3 = (long *)0x0;
    psVar8 = psVar6;
    do {
      psVar6 = psVar8;
      if (__n_00 == psVar8[1]) {
        psVar6 = (size_t *)FUN_00668c20(lVar9 + -0x17,__n_00,param_5);
        if (lVar9 == 0x19) {
                    /* try { // try from 0058a530 to 0068a53b has its CatchHandler @ 0058b440 */
          *(char *)(psVar6 + 3) = (char)psVar8[3];
        }
        else {
                    /* try { // try from 0058a53c to 0068a54f has its CatchHandler @ 0058b150 */
          memcpy(psVar6 + 3,psVar8 + 3,__n_00);
        }
        operator_delete(psVar8);
      }
      if (this == (string *)0x0) {
LAB_0058a5c8:
        this = (string *)0x0;
        *(undefined1 *)((long)psVar6 + lVar9) = 0xff;
        lVar9 = lVar9 + 1;
        goto LAB_0058a4e4;
      }
      if (uVar7 == 0xffffffff) {
        if (*(byte **)(this + 0x10) < *(byte **)(this + 0x18)) {
          uVar5 = (uint)**(byte **)(this + 0x10);
        }
        else {
          uVar5 = (**(code **)(*(long *)this + 0x48))(this);
          if (uVar5 == 0xffffffff) goto LAB_0058a5c8;
        }
        uVar3 = (undefined1)uVar5;
      }
      else {
                    /* try { // try from 0058a55c to 0068a563 has its CatchHandler @ 0058b440 */
        uVar3 = (undefined1)uVar7;
      }
      *(undefined1 *)((long)psVar6 + lVar9) = uVar3;
      if (*(ulong *)(this + 0x10) < *(ulong *)(this + 0x18)) {
        *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) + 1;
      }
      else {
        (**(code **)(*(long *)this + 0x50))(this);
                    /* try { // try from 0058a5ac to 0068a5db has its CatchHandler @ 0058b324 */
      }
      uVar7 = 0xffffffff;
                    /* try { // try from 0058a428 to 0068a43b has its CatchHandler @ 0058b154 */
      lVar9 = lVar9 + 1;
      if (this == (string *)0x0) goto LAB_0058a4e4;
LAB_0058a430:
      uVar5 = uVar7;
      if (uVar7 == 0xffffffff) {
        if (*(byte **)(this + 0x10) < *(byte **)(this + 0x18)) {
          uVar5 = (uint)**(byte **)(this + 0x10);
        }
        else {
          uVar5 = (**(code **)(*(long *)this + 0x48))(this);
          if (uVar5 == 0xffffffff) {
            this = (string *)0x0;
            goto joined_r0x0058a4ec;
          }
        }
      }
      uVar7 = uVar5;
                    /* try { // try from 0058a494 to 0068a4c3 has its CatchHandler @ 0058ae4c */
      __n_00 = lVar9 - 0x18;
      uVar5 = uVar7;
      if (param_3 == (long *)0x0) goto LAB_0058a4f0;
LAB_0058a444:
      uVar4 = param_4;
      if (param_4 == 0xffffffff) {
        if ((byte *)param_3[2] < (byte *)param_3[3]) {
          uVar4 = (uint)*(byte *)param_3[2];
        }
        else {
          uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
          if (uVar4 == 0xffffffff) goto LAB_0058a4f0;
        }
      }
      psVar8 = psVar6;
      param_4 = uVar4;
      if (uVar5 != 0xffffffff) break;
    } while( true );
  }
  if (psVar6 != (size_t *)PTR_DAT_007e5de8) {
    *(undefined4 *)(psVar6 + 2) = 0;
    *psVar6 = __n_00;
    *(undefined1 *)((long)psVar6 + lVar9) = 0;
  }
  goto LAB_0058a5f4;
}


