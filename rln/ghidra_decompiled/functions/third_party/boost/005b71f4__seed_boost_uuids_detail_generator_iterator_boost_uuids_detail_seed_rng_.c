/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b71f4
 * Function: boost::random::mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>
 * Signature: void __cdecl seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>(generator_iterator * param_1, generator_iterator.conflict param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::random::mersenne_twister<unsigned int, 32, 624, 397, 31, 2567483615u, 11, 7,
   2636928640u, 15, 4022730752u, 18,
   3346425566u>::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>
   >(boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>&,
   boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>) */

void boost::random::
     mersenne_twister<unsigned_int,32,624,397,31,2567483615u,11,7,2636928640u,15,4022730752u,18,3346425566u>
     ::seed<boost::uuids::detail::generator_iterator<boost::uuids::detail::seed_rng>>
               (long param_1,undefined8 *param_2,seed_rng *param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  seed_rng *this;
  ulong uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  do {
    this = (seed_rng *)*param_2;
    if (this == param_3) {
      iVar4 = *(int *)(param_2 + 1);
      if (iVar4 == param_4) {
                    /* try { // try from 005b72cc to 006b7347 has its CatchHandler @ 005b74e8 */
        *(undefined4 *)(param_1 + 0x1380) = 0x270;
        uVar3 = __cxa_allocate_exception(0x10);
        FUN_00666bb8(auStack_68,"mersenne_twister::seed",auStack_70);
        FUN_0064aa44(uVar3,auStack_68);
                    /* WARNING: Subroutine does not return */
        __cxa_throw(uVar3,PTR_PTR_007e7c50,PTR_FUN_007e4f90);
      }
    }
    else {
      iVar4 = *(int *)(param_2 + 1);
    }
    *(int *)(param_1 + uVar5 * 4) = iVar4;
    iVar4 = *(int *)(this + 0x14);
    if (4 < iVar4) {
      uuids::detail::seed_rng::sha1_random_digest_(this);
      iVar4 = 0;
      *(undefined4 *)(this + 0x14) = 0;
    }
    *(int *)(this + 0x14) = iVar4 + 1;
    bVar2 = uVar5 < 0x26f;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(this + (long)iVar4 * 4);
    uVar5 = uVar5 + 1;
  } while (bVar2);
  *(undefined4 *)(param_1 + 0x1380) = 0x270;
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 005b72bc to 006b72c7 has its CatchHandler @ 005b74dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


