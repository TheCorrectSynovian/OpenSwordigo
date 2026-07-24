/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8b54
 * Function: boost::uniform_int<unsigned_long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
 * Signature: ulong __cdecl generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>(pass_through_engine * param_1, ulong param_2, ulong param_3, ulong param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* unsigned long boost::uniform_int<unsigned
   long>::generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned
   int, 32, 624, 397, 31, 2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u>*> >
   >(boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned
   int, 32, 624, 397, 31, 2567483615u, 11, 7, 2636928640u, 15, 4022730752u, 18, 3346425566u>*> >&,
   unsigned long, unsigned long, unsigned long) */

ulong boost::uniform_int<unsigned_long>::
      generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
                (pass_through_engine *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x27;
  
  uVar4 = param_2;
  if (param_4 != 0) {
    if (param_4 == 0xffffffff) {
      uVar4 = random::detail::
              pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
              ::operator()((pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
                            *)param_1);
                    /* catch() { ... } // from try @ 005b86fc with catch @ 005b8b94 */
      uVar4 = param_2 + (uVar4 & 0xffffffff);
    }
    else {
      uVar8 = param_4 >> 0x20;
      uVar9 = (uint)param_4;
      if (uVar8 == 0) {
        uVar1 = uVar9 + 1;
                    /* try { // try from 005b8c84 to 006b8ccf has its CatchHandler @ 005b8be8 */
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = 0xffffffff / uVar1;
        }
        if (~(uVar2 * uVar1) == uVar9) {
          uVar2 = uVar2 + 1;
        }
        do {
          uVar3 = random::detail::
                  pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
                  ::operator()((pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
                                *)param_1);
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = uVar3 / uVar2;
          }
        } while (uVar9 < uVar1);
        uVar4 = param_2 + uVar1;
      }
      else {
        if (uVar9 == 0xffffffff) {
          uVar8 = uVar8 + 1;
        }
        if (param_4 != 0xffffffffffffffff) {
          uVar8 = param_4 + 1 >> 0x20;
        }
        do {
          uVar10 = 0;
          if (uVar8 == 0) {
            uVar11 = 1;
          }
          else {
            uVar4 = 1;
            do {
              uVar5 = random::detail::
                      pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
                      ::operator()((pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>
                                    *)param_1);
                    /* try { // try from 005b8bdc to 006b8be7 has its CatchHandler @ 005b861c */
              uVar11 = uVar4 << 0x20;
                    /* catch() { ... } // from try @ 005b8b08 with catch @ 005b8be4 */
                    /* try { // try from 005b8be8 to 006b8c47 has its CatchHandler @ 005b8be8
                       catch() { ... } // from try @ 005b8be8 with catch @ 005b8be8
                       catch() { ... } // from try @ 005b8c50 with catch @ 005b8be8
                       catch() { ... } // from try @ 005b8c84 with catch @ 005b8be8
                       catch() { ... } // from try @ 005b8cd8 with catch @ 005b8be8
                       catch() { ... } // from try @ 005b8d04 with catch @ 005b8be8
                       catch() { ... } // from try @ 005b8d5c with catch @ 005b8be8 */
              uVar10 = uVar10 + uVar4 * (uVar5 & 0xffffffff);
              if (uVar11 == param_4 + 1) {
                iVar7 = 1;
                uVar4 = uVar10;
                goto LAB_005b8c6c;
              }
              uVar4 = uVar11;
            } while (uVar11 <= uVar8);
          }
          uVar4 = 0;
          if (uVar11 != 0) {
            uVar4 = param_4 / uVar11;
          }
          uVar6 = generate<boost::random::detail::pass_through_engine<boost::random::detail::pass_through_engine<boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>*>>>
                            (param_1,0,uVar4,uVar4);
          uVar5 = 0;
          if (uVar11 != 0) {
            uVar5 = 0xffffffffffffffff / uVar11;
          }
          uVar4 = unaff_x27;
          if (uVar5 < uVar6) {
            iVar7 = 3;
          }
          else {
            uVar5 = uVar6 * uVar11 + uVar10;
                    /* try { // try from 005b8c48 to 006b8c4f has its CatchHandler @ 005b8f88 */
                    /* try { // try from 005b8c50 to 006b8c73 has its CatchHandler @ 005b8be8 */
            iVar7 = 3;
            if (!CARRY8(uVar6 * uVar11,uVar10) && uVar5 <= param_4) {
              iVar7 = 1;
              uVar4 = uVar5 + param_2;
            }
          }
LAB_005b8c6c:
          unaff_x27 = uVar4;
                    /* try { // try from 005b8c74 to 006b8c83 has its CatchHandler @ 005b9008 */
        } while (iVar7 == 3);
      }
    }
  }
  return uVar4;
}


